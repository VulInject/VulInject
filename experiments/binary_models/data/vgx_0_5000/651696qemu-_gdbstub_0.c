static void handle_v_attach(GArray *params, void *user_ctx)
{
GDBProcess *process;
CPUState *cpu;

g_string_assign(gdbserver_state.str_buf, "E22");
if (!params->len) {
goto cleanup;
}

process = gdb_get_process(get_param(params, 0)->val_ul);
if (!process) {
goto cleanup;
}

cpu = get_first_cpu_in_process(process);
if (!cpu) {
goto cleanup;
}

process->attached = true;
gdbserver_state.g_cpu = cpu;
gdbserver_state.c_cpu = cpu;

g_string_printf(gdbserver_state.str_buf, "T%02xthread:", GDB_SIGNAL_TRAP);
gdb_append_thread_id(cpu, gdbserver_state.str_buf);
g_string_append_c(gdbserver_state.str_buf, ';');
cleanup:
put_strbuf();
}