void pcep_thread_finish_event_handler(struct thread *thread)
{
int i;
struct frr_pthread *fpt = THREAD_ARG(thread);
struct ctrl_state *ctrl_state = fpt->data;

assert(ctrl_state != NULL);

for (i = 0; i < MAX_PCC; i++) {
if (ctrl_state->pcc[i]) {
pcep_pcc_finalize(ctrl_state, ctrl_state->pcc[i]);
ctrl_state->pcc[i] = NULL;
}
}

XFREE(MTYPE_PCEP, ctrl_state->pcc_opts);
XFREE(MTYPE_PCEP, ctrl_state);
fpt->data = NULL;

atomic_store_explicit(&fpt->running, false, memory_order_relaxed);
}