static void
GetSignal(cstatus_t *cp)
{
char procname[64];	
int fd;
struct sigaction action[MAXSIG];
int i;

MakeProcName(procname, cp->pid);
(void) strcat(procname, "/sigact");
(void) memset((char *)action, 0, sizeof (action));
if ((fd = open(procname, O_RDONLY, 0)) >= 0) {
(void) read(fd, (char *)action, sizeof (action));
(void) close(fd);
}
for (i = 0; i < MAXSIG; i++)
cp->user.u_signal[i] = action[i].sa_handler;
cp->flags |= CS_SIGNAL;
}