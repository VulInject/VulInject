static int
xprt_walk_init(mdb_walk_state_t *wsp)
{
fmd_module_t m;

if (wsp->walk_addr == 0) {
mdb_warn("transport walker requires fmd_module_t address\n");
return (WALK_ERR);
}

if (mdb_vread(&m, sizeof (m), wsp->walk_addr) != sizeof (m)) {
mdb_warn("failed to read module at %p", wsp->walk_addr);
return (WALK_ERR);
}

wsp->walk_addr = (uintptr_t)m.mod_transports.l_next;
return (WALK_NEXT);
}