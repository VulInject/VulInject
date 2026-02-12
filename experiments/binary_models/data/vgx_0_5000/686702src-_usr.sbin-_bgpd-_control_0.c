size_t
control_fill_pfds(struct pollfd *pfd, size_t size)
{
struct ctl_conn	*ctl_conn;
size_t i = 0;

TAILQ_FOREACH(ctl_conn, &ctl_conns, entry) {
pfd[i].fd = ctl_conn->ibuf.fd;
pfd[i].events = POLLIN;
if (ctl_conn->ibuf.w.queued > 0)
pfd[i].events |= POLLOUT;
i++;
}
return i;
}