static void save_and_disable_tracer(void)
{
char *orig_th;
char *tracer;
bool need_nop = false;

mutex_lock(&save_state.mutex);

save_trace_opts(&save_state);
tracer = read_file(TR_CURRENT, ERR_EXIT);
orig_th = read_file(TR_THRESH, ERR_EXIT);

if (needs_change(tracer, NOP_TRACER)) {
mutex_lock(&print_mtx);
if (force_tracer) {
printf(
"The %s tracer is already in use but proceeding anyway!\n",
tracer);
} else {
printf(
"The %s tracer is already in use, cowardly bailing out!\n"
"This could indicate that another program or instance is tracing.\n"
"Use the -F [--force] option to disregard the current tracer.\n", tracer);
exit(0);
}
mutex_unlock(&print_mtx);
need_nop = true;
}

save_state.tracer =  tracer;
save_state.thresh = orig_th;

if (need_nop)
write_file(TR_CURRENT, NULL, NOP_TRACER, ERR_EXIT);

mutex_unlock(&save_state.mutex);
}