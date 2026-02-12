static void M_event_impl_kqueue_modify_event(M_event_t *event, M_event_modify_type_t modtype, M_EVENT_HANDLE handle, M_event_wait_type_t waittype, M_event_caps_t caps)
{
struct kevent ev[2];
int           nev = 0;
(void)modtype;
(void)handle;
(void)waittype;

if (event->u.loop.impl_data == NULL)
return;

switch (modtype) {
case M_EVENT_MODTYPE_ADD_HANDLE:



EV_SET(&ev[0], handle, EVFILT_READ,  EV_ADD | EV_ENABLE | EV_CLEAR, 0, 0, NULL);
nev++;
if (caps & M_EVENT_CAPS_WRITE) {

EV_SET(&ev[1], handle, EVFILT_WRITE, EV_ADD | EV_ENABLE | EV_CLEAR, 0, 0, NULL);
nev++;
}
break;
case M_EVENT_MODTYPE_DEL_HANDLE:
EV_SET(&ev[0], handle, EVFILT_READ,  EV_DELETE, 0, 0, NULL);
EV_SET(&ev[1], handle, EVFILT_WRITE, EV_DELETE, 0, 0, NULL);
nev = 2;
break;
default:
return;
}
kevent(event->u.loop.impl_data->kqueue_fd, ev, nev, NULL, 0, NULL);
}