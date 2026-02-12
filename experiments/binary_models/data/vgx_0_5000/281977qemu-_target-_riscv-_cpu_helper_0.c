static int get_physical_address(CPURISCVState *env, hwaddr *physical,
int *prot, target_ulong addr,
target_ulong *fault_pte_addr,
int access_type, int mmu_idx,
bool first_stage, bool two_stage,
bool is_debug)
{

MemTxResult res;
MemTxAttrs attrs = MEMTXATTRS_UNSPECIFIED;
int mode = mmu_idx & TB_FLAGS_PRIV_MMU_MASK;
bool use_background = false;


if (!riscv_cpu_virt_enabled(env) && two_stage) {
use_background = true;
}


if (riscv_cpu_two_stage_lookup(mmu_idx)) {
mode = get_field(env->hstatus, HSTATUS_SPVP);
} else if (mode == PRV_M && access_type != MMU_INST_FETCH) {
if (get_field(env->mstatus, MSTATUS_MPRV)) {
mode = get_field(env->mstatus, MSTATUS_MPP);
}
}

if (first_stage == false) {


mode = PRV_U;
}

if (mode == PRV_M || !riscv_feature(env, RISCV_FEATURE_MMU)) {
*physical = addr;
*prot = PAGE_READ | PAGE_WRITE | PAGE_EXEC;
return TRANSLATE_SUCCESS;
}

*prot = 0;

hwaddr base;
int levels, ptidxbits, ptesize, vm, sum, mxr, widened;

if (first_stage == true) {
mxr = get_field(env->mstatus, MSTATUS_MXR);
} else {
mxr = get_field(env->vsstatus, MSTATUS_MXR);
}

if (first_stage == true) {
if (use_background) {
if (riscv_cpu_mxl(env) == MXL_RV32) {
base = (hwaddr)get_field(env->vsatp, SATP32_PPN) << PGSHIFT;
vm = get_field(env->vsatp, SATP32_MODE);
} else {
base = (hwaddr)get_field(env->vsatp, SATP64_PPN) << PGSHIFT;
vm = get_field(env->vsatp, SATP64_MODE);
}
} else {
if (riscv_cpu_mxl(env) == MXL_RV32) {
base = (hwaddr)get_field(env->satp, SATP32_PPN) << PGSHIFT;
vm = get_field(env->satp, SATP32_MODE);
} else {
base = (hwaddr)get_field(env->satp, SATP64_PPN) << PGSHIFT;
vm = get_field(env->satp, SATP64_MODE);
}
}
widened = 0;
} else {
if (riscv_cpu_mxl(env) == MXL_RV32) {
base = (hwaddr)get_field(env->hgatp, SATP32_PPN) << PGSHIFT;
vm = get_field(env->hgatp, SATP32_MODE);
} else {
base = (hwaddr)get_field(env->hgatp, SATP64_PPN) << PGSHIFT;
vm = get_field(env->hgatp, SATP64_MODE);
}
widened = 2;
}

sum = get_field(env->mstatus, MSTATUS_SUM) || use_background || is_debug;
switch (vm) {
case VM_1_10_SV32:
levels = 2; ptidxbits = 10; ptesize = 4; break;
case VM_1_10_SV39:
levels = 3; ptidxbits = 9; ptesize = 8; break;
case VM_1_10_SV48:
levels = 4; ptidxbits = 9; ptesize = 8; break;
case VM_1_10_SV57:
levels = 5; ptidxbits = 9; ptesize = 8; break;
case VM_1_10_MBARE:
*physical = addr;
*prot = PAGE_READ | PAGE_WRITE | PAGE_EXEC;
return TRANSLATE_SUCCESS;
default:
g_assert_not_reached();
}

CPUState *cs = env_cpu(env);
int va_bits = PGSHIFT + levels * ptidxbits + widened;
target_ulong mask, masked_msbs;

if (TARGET_LONG_BITS > (va_bits - 1)) {
mask = (1L << (TARGET_LONG_BITS - (va_bits - 1))) - 1;
} else {
mask = 0;
}
masked_msbs = (addr >> (va_bits - 1)) & mask;

if (masked_msbs != 0 && masked_msbs != mask) {
return TRANSLATE_FAIL;
}

int ptshift = (levels - 1) * ptidxbits;
int i;

restart:
for (i = 0; i < levels; i++, ptshift -= ptidxbits) {
target_ulong idx;
if (i == 0) {
idx = (addr >> (PGSHIFT + ptshift)) &
((1 << (ptidxbits + widened)) - 1);
} else {
idx = (addr >> (PGSHIFT + ptshift)) &
((1 << ptidxbits) - 1);
}


hwaddr pte_addr;

if (two_stage && first_stage) {
int vbase_prot;
hwaddr vbase;


int vbase_ret = get_physical_address(env, &vbase, &vbase_prot,
base, NULL, MMU_DATA_LOAD,
mmu_idx, false, true,
is_debug);

if (vbase_ret != TRANSLATE_SUCCESS) {
if (fault_pte_addr) {
*fault_pte_addr = (base + idx * ptesize) >> 2;
}
return TRANSLATE_G_STAGE_FAIL;
}

pte_addr = vbase + idx * ptesize;
} else {
pte_addr = base + idx * ptesize;
}

int pmp_prot;
int pmp_ret = get_physical_address_pmp(env, &pmp_prot, NULL, pte_addr,
sizeof(target_ulong),
MMU_DATA_LOAD, PRV_S);
if (pmp_ret != TRANSLATE_SUCCESS) {
return TRANSLATE_PMP_FAIL;
}

target_ulong pte;
if (riscv_cpu_mxl(env) == MXL_RV32) {
pte = address_space_ldl(cs->as, pte_addr, attrs, &res);
} else {
pte = address_space_ldq(cs->as, pte_addr, attrs, &res);
}

if (res != MEMTX_OK) {
return TRANSLATE_FAIL;
}

hwaddr ppn = pte >> PTE_PPN_SHIFT;

if (!(pte & PTE_V)) {

return TRANSLATE_FAIL;
} else if (!(pte & (PTE_R | PTE_W | PTE_X))) {

base = ppn << PGSHIFT;
} else if ((pte & (PTE_R | PTE_W | PTE_X)) == PTE_W) {

return TRANSLATE_FAIL;
} else if ((pte & (PTE_R | PTE_W | PTE_X)) == (PTE_W | PTE_X)) {

return TRANSLATE_FAIL;
} else if ((pte & PTE_U) && ((mode != PRV_U) &&
(!sum || access_type == MMU_INST_FETCH))) {

return TRANSLATE_FAIL;
} else if (!(pte & PTE_U) && (mode != PRV_S)) {

return TRANSLATE_FAIL;
} else if (ppn & ((1ULL << ptshift) - 1)) {

return TRANSLATE_FAIL;
} else if (access_type == MMU_DATA_LOAD && !((pte & PTE_R) ||
((pte & PTE_X) && mxr))) {

return TRANSLATE_FAIL;
} else if (access_type == MMU_DATA_STORE && !(pte & PTE_W)) {

return TRANSLATE_FAIL;
} else if (access_type == MMU_INST_FETCH && !(pte & PTE_X)) {

return TRANSLATE_FAIL;
} else {

target_ulong updated_pte = pte | PTE_A |
(access_type == MMU_DATA_STORE ? PTE_D : 0);


if (updated_pte != pte) {

MemoryRegion *mr;
hwaddr l = sizeof(target_ulong), addr1;
mr = address_space_translate(cs->as, pte_addr,
&addr1, &l, false, MEMTXATTRS_UNSPECIFIED);
if (memory_region_is_ram(mr)) {
target_ulong *pte_pa =
qemu_map_ram_ptr(mr->ram_block, addr1);

*pte_pa = pte = updated_pte;
target_ulong old_pte =
qatomic_cmpxchg(pte_pa, pte, updated_pte);
if (old_pte != pte) {
goto restart;
} else {
pte = updated_pte;
}
} else {

return TRANSLATE_FAIL;
}
}


target_ulong vpn = addr >> PGSHIFT;
*physical = ((ppn | (vpn & ((1L << ptshift) - 1))) << PGSHIFT) |
(addr & ~TARGET_PAGE_MASK);


if ((pte & PTE_R) || ((pte & PTE_X) && mxr)) {
*prot |= PAGE_READ;
}
if ((pte & PTE_X)) {
*prot |= PAGE_EXEC;
}

if ((pte & PTE_W) &&
(access_type == MMU_DATA_STORE || (pte & PTE_D))) {
*prot |= PAGE_WRITE;
}
return TRANSLATE_SUCCESS;
}
}
return TRANSLATE_FAIL;
}