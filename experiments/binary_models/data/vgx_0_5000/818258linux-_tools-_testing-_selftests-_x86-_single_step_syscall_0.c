static void sigtrap(int sig, siginfo_t *info, void *ctx_void)
{
ucontext_t *ctx = (ucontext_t*)ctx_void;

if (get_eflags() & X86_EFLAGS_TF) {
set_eflags(get_eflags() & ~X86_EFLAGS_TF);
printf("[WARN]\tSIGTRAP handler had TF set\n");
_exit(1);
}

sig_traps++;

if (sig_traps == 10000 || sig_traps == 10001) {
printf("[WARN]\tHit %d SIGTRAPs with si_addr 0x%lx, ip 0x%lx\n",
(int)sig_traps,
(unsigned long)info->si_addr,
(unsigned long)ctx->uc_mcontext.gregs[REG_IP]);
}
}