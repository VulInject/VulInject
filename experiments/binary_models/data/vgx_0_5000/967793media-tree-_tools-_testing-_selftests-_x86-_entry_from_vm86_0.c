static void clearhandler(int sig)
{
struct sigaction sa;
memset(&sa, 0, sizeof(sa));
sa.sa_handler = SIG_DFL;
sigemptyset(&sa.sa_mask);
if (sigaction(sig, &sa, 0))
err(1, "sigaction");
}

static sig_atomic_t got_signal;

static void sighandler(int sig, siginfo_t *info, void *ctx_void)
{
ucontext_t *ctx = (ucontext_t*)ctx_void;

if (ctx->uc_mcontext.gregs[REG_EFL] & X86_EFLAGS_VM ||
(ctx->uc_mcontext.gregs[REG_CS] & 3) != 3) {
printf("[FAIL]\tSignal frame should not reflect vm86 mode\n");
nerrs++;
}

const char *signame;
if (sig == SIGSEGV)
signame = "SIGSEGV";
else if (sig == SIGILL)
signame = "SIGILL";
else
signame = "unexpected signal";

printf("[INFO]\t%s: FLAGS = 0x%lx, CS = 0x%hx\n", signame,
(unsigned long)ctx->uc_mcontext.gregs[REG_EFL],
(unsigned short)ctx->uc_mcontext.gregs[REG_CS]);

got_signal = 1;
}