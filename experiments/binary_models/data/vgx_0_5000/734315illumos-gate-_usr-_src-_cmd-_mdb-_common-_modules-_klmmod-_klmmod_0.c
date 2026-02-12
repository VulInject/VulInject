int
nlm_slreq_walk_step(mdb_walk_state_t *wsp)
{
struct nlm_slreq nsr;
uintptr_t addr = wsp->walk_addr;

if (addr == 0)
return (WALK_DONE);

if (mdb_vread(&nsr, sizeof (nsr), addr) < 0) {
mdb_warn("failed to read nlm_slreq at %p", addr);
return (WALK_ERR);
}

wsp->walk_addr = (uintptr_t)nsr.nsr_link.tqe_next;
return (wsp->walk_callback(addr, &nsr, wsp->walk_cbdata));
}