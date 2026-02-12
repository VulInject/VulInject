void
virNetDaemonRemoveShutdownInhibition(virNetDaemon *dmn)
{
VIR_LOCK_GUARD lock = virObjectLockGuard(dmn);

dmn->autoShutdownInhibitions--;

VIR_DEBUG("dmn=%p inhibitions=%zu", dmn, dmn->autoShutdownInhibitions);

if (dmn->autoShutdownInhibitions == 0) {
VIR_DEBUG("Closing inhibit FD %d", dmn->autoShutdownInhibitFd);
VIR_FORCE_CLOSE(dmn->autoShutdownInhibitFd);
}
}


static sig_atomic_t sigErrors;
static int sigLastErrno;
static int sigWrite = -1;

static void
virNetDaemonSignalHandler(int sig, siginfo_t * siginfo,
void* context G_GNUC_UNUSED)
{
int origerrno;
int r;
siginfo_t tmp;

if (SA_SIGINFO)
tmp = *siginfo;
else
memset(&tmp, 0, sizeof(tmp));


tmp.si_signo = sig;

origerrno = errno;
r = safewrite(sigWrite, &tmp, sizeof(tmp));
if (r == -1) {
sigErrors++;
sigLastErrno = errno;
}
errno = origerrno;
}