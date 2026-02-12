static int
sio_psleep(struct sio_hdl *hdl, int event)
{
struct pollfd pfd[SIO_MAXNFDS];
int revents;
int nfds;

nfds = sio_nfds(hdl);
if (nfds > SIO_MAXNFDS) {
DPRINTF("sio_psleep: %d: too many descriptors\n", nfds);
hdl->eof = 1;
return 0;
}
for (;;) {
nfds = sio_pollfd(hdl, pfd, event);
while (poll(pfd, nfds, -1) == -1) {
if (errno == EINTR)
continue;
DPERROR("sio_psleep: poll");
hdl->eof = 1;
return 0;
}
revents = sio_revents(hdl, pfd);
if (revents & POLLHUP) {
DPRINTF("sio_psleep: hang-up\n");
return 0;
}
if (revents & event)
break;
}
return 1;
}