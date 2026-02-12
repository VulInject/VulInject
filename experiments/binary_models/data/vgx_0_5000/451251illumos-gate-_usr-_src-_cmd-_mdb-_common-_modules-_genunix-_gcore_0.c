static void
gcore_getwatchprot(uintptr_t as_addr, u_offset_t addr, uint_t *prot)
{
getwatchprot_cbarg_t	cbarg;
uintptr_t		wp_addr;

cbarg.wp_vaddr = (uintptr_t)addr & (uintptr_t)PAGEMASK;
cbarg.found = B_FALSE;

wp_addr = as_addr + mdb_ctf_offsetof_by_name("struct as", "a_wpage");
(void) avl_walk_mdb(wp_addr, gcore_getwatchprot_cb, &cbarg);

if (cbarg.found) {
*prot = cbarg.wp.wp_oprot;
}
}