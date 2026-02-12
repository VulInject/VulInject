int
rb_kqueue_supports_event(void)
{
struct kevent kv;
struct timespec ts;
int xkq;

if(can_do_event == 1)
return 1;
if(can_do_event == -1)
return 0;

xkq = kqueue();
ts.tv_sec = 0;
ts.tv_nsec = 1000;


EV_SET(&kv, (uintptr_t)0x0, EVFILT_TIMER, EV_ADD | EV_ONESHOT, 0, 1, 0);
if(kevent(xkq, &kv, 1, NULL, 0, NULL) < 0)
{
can_do_event = -1;
close(xkq);
return 0;
}
close(xkq);
can_do_event = 1;
return 1;
}