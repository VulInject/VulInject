void abort_print_current_ts(void)
{
struct thread_specific_data *tsd = thread_get_tsd();
struct abort_info ai = { };
struct ts_session *s = ts_get_current_session();

ai.abort_type = tsd->abort_type;
ai.fault_descr = tsd->abort_descr;
ai.va = tsd->abort_va;
ai.pc = tsd->abort_regs.elr;
ai.regs = &tsd->abort_regs;

if (ai.abort_type != ABORT_TYPE_USER_MODE_PANIC)
__print_abort_info(&ai, "User mode");

s->ctx->ops->dump_state(s->ctx);

if (s->ctx->ops->dump_ftrace) {
s->fbuf = NULL;
s->ctx->ops->dump_ftrace(s->ctx);
}
}