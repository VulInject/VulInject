int
blocked_walk_step(mdb_walk_state_t *wsp)
{
uintptr_t addr = (uintptr_t)((const kthread_t *)wsp->walk_layer)->t_ts;
uintptr_t taddr = wsp->walk_addr;
turnstile_t ts;

if (mdb_vread(&ts, sizeof (ts), addr) == -1) {
mdb_warn("couldn't read %p's turnstile at %p", taddr, addr);
return (WALK_ERR);
}

if (ts.ts_waiters == 0 || ts.ts_sobj != wsp->walk_data)
return (WALK_NEXT);

return (wsp->walk_callback(taddr, wsp->walk_layer, wsp->walk_cbdata));
}