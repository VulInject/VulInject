void
routefd_handler(struct interface_info *ifi, int routefd)
{
struct rt_msghdr		*rtm;
unsigned char			*buf = ifi->rbuf;
unsigned char			*lim, *next;
ssize_t				 n;

do {
n = read(routefd, buf, RT_BUF_SIZE);
} while (n == -1 && errno == EINTR);
if (n == -1) {
log_warn("%s: routing socket", log_procname);
return;
}
if (n == 0)
fatalx("%s: routing socket closed", log_procname);

lim = buf + n;
for (next = buf; next < lim && quit == 0; next += rtm->rtm_msglen) {
rtm = (struct rt_msghdr *)next;
if (lim < next + sizeof(rtm->rtm_msglen) ||
lim < next + rtm->rtm_msglen)
fatalx("%s: partial rtm in buffer", log_procname);

if (rtm->rtm_version != RTM_VERSION)
continue;

rtm_dispatch(ifi, rtm);
}
}