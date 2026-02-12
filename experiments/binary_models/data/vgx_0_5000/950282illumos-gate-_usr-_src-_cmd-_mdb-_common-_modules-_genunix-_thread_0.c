int
thread_walk_step(mdb_walk_state_t *wsp)
{
thread_walk_t *twp = (thread_walk_t *)wsp->walk_data;
int status;

if (wsp->walk_addr == 0)
return (WALK_DONE); 

if (twp->tw_step && wsp->walk_addr == twp->tw_last)
return (WALK_DONE); 

if (mdb_vread(twp->tw_thread, sizeof (kthread_t),
wsp->walk_addr) == -1) {
mdb_warn("failed to read thread at %p", wsp->walk_addr);
return (WALK_DONE);
}

status = wsp->walk_callback(wsp->walk_addr, twp->tw_thread,
wsp->walk_cbdata);

if (twp->tw_inproc)
wsp->walk_addr = (uintptr_t)twp->tw_thread->t_forw;
else
wsp->walk_addr = (uintptr_t)twp->tw_thread->t_next;

twp->tw_step = TRUE;
return (status);
}