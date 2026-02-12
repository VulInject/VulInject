static void *_signal_handler(void *no_data)
{
int rc, sig;
int sig_array[] = {SIGINT, SIGTERM, SIGHUP, SIGABRT, 0};
sigset_t set;

(void) pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
(void) pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);


_default_sigaction(SIGINT);
_default_sigaction(SIGTERM);
_default_sigaction(SIGHUP);
_default_sigaction(SIGABRT);

while (1) {
xsignal_sigset_create(sig_array, &set);
rc = sigwait(&set, &sig);
if (rc == EINTR)
continue;
switch (sig) {
case SIGHUP:	
info("Reconfigure signal (SIGHUP) received");
_reconfig();
break;
case SIGINT:	
case SIGTERM:	
info("Terminate signal (SIGINT or SIGTERM) received");
_shutdown_threads();
return NULL;	
case SIGABRT:	
info("SIGABRT received");
abort();	
_shutdown_threads();
return NULL;
default:
error("Invalid signal (%d) received", sig);
}
}

}