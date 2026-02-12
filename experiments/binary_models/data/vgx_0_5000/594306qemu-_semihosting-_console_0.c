void qemu_semihosting_console_outc(CPUArchState *env, target_ulong addr)
{
CPUState *cpu = env_cpu(env);
uint8_t c;

if (cpu_memory_rw_debug(cpu, addr, &c, 1, 0) == 0) {
if (use_gdb_syscalls()) {
gdb_do_syscall(semihosting_cb, "write,2,%x,%x", addr, 1);
} else {
qemu_semihosting_log_out((const char *) &c, 1);
}
} else {
qemu_log_mask(LOG_GUEST_ERROR,
"%s: passed inaccessible address " TARGET_FMT_lx,
__func__, addr);
}
}



typedef struct SemihostingConsole {
CharBackend         backend;
GSList              *sleeping_cpus;
bool                got;
Fifo8               fifo;
} SemihostingConsole;

static SemihostingConsole console;

static int console_can_read(void *opaque)
{
SemihostingConsole *c = opaque;
int ret;
g_assert(qemu_mutex_iothread_locked());
ret = (int) fifo8_num_free(&c->fifo);
return ret;
}