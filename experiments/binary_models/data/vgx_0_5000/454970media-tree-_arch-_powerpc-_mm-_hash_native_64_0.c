static void native_hpte_invalidate(unsigned long slot, unsigned long vpn,
int bpsize, int apsize, int ssize, int local)
{
struct hash_pte *hptep = htab_address + slot;
unsigned long hpte_v;
unsigned long want_v;
unsigned long flags;

local_irq_save(flags);

DBG_LOW("    invalidate(vpn=%016lx, hash: %lx)\n", vpn, slot);

want_v = hpte_encode_avpn(vpn, bpsize, ssize);
native_lock_hpte(hptep);
hpte_v = be64_to_cpu(hptep->v);
if (cpu_has_feature(CPU_FTR_ARCH_300))
hpte_v = hpte_new_to_old_v(hpte_v, be64_to_cpu(hptep->r));


if (!HPTE_V_COMPARE(hpte_v, want_v) || !(hpte_v & HPTE_V_VALID))
native_unlock_hpte(hptep);
else

hptep->v = 0;


tlbie(vpn, bpsize, apsize, ssize, local);

local_irq_restore(flags);
}