static int
walk_thread_info_step(mdb_walk_state_t *wsp)
{
uintptr_t addr = wsp->walk_addr;
thread_info_t ti;

if (mdb_vread(&ti, sizeof (ti), addr) == -1) {
mdb_warn("unable to read thread_info_t at %p", addr);
return (WALK_ERR);
}

return (wsp->walk_callback(addr, &ti, wsp->walk_cbdata));
}