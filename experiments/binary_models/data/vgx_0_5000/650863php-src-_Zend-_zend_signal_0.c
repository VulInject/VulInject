ZEND_API void zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact)
{
struct sigaction sa;
sigset_t sigset;

if (oldact != NULL) {
oldact->sa_flags   = SIGG(handlers)[signo-1].flags;
oldact->sa_handler = (void *) SIGG(handlers)[signo-1].handler;
oldact->sa_mask    = global_sigmask;
}
if (act != NULL) {
SIGG(handlers)[signo-1].flags = act->sa_flags;
if (act->sa_flags & SA_SIGINFO) {
SIGG(handlers)[signo-1].handler = (void *) act->sa_sigaction;
} else {
SIGG(handlers)[signo-1].handler = (void *) act->sa_handler;
}

memset(&sa, 0, sizeof(sa));
if (SIGG(handlers)[signo-1].handler == (void *) SIG_IGN) {
sa.sa_sigaction = (void *) SIG_IGN;
} else {
sa.sa_flags     = SA_ONSTACK | SA_SIGINFO | (act->sa_flags & SA_FLAGS_MASK);
sa.sa_sigaction = zend_signal_handler_defer;
sa.sa_mask      = global_sigmask;
}

if (sigaction(signo, &sa, NULL) < 0) {
zend_error_noreturn(E_ERROR, "Error installing signal handler for %d", signo);
}


sigemptyset(&sigset);
sigaddset(&sigset, signo);
zend_sigprocmask(SIG_UNBLOCK, &sigset, NULL);
}
}