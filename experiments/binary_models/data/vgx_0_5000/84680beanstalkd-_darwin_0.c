int
socknext(Socket **s, int64 timeout)
{
int r;
struct kevent ev;
static struct timespec ts;

ts.tv_sec = timeout / 1000000000;
ts.tv_nsec = timeout % 1000000000;
r = kevent(kq, NULL, 0, &ev, 1, &ts);
if (r == -1 && errno != EINTR) {
twarn("kevent");
return -1;
}

if (r > 0) {
*s = ev.udata;
if (ev.flags & EV_EOF) {
return 'h';
}
switch (ev.filter) {
case EVFILT_READ:
return 'r';
case EVFILT_WRITE:
return 'w';
}
}
return 0;
}