static void
kq_setup_kevent(struct kevent *out, evutil_socket_t fd, int filter, short change)
{
memset(out, 0, sizeof(struct kevent));
out->ident = fd;
out->filter = filter;

if (change & EV_CHANGE_ADD) {
out->flags = EV_ADD;

out->udata = INT_TO_UDATA(ADD_UDATA);
if (change & EV_ET)
out->flags |= EV_CLEAR;

if (filter == EVFILT_READ)
out->fflags = NOTE_EOF;
} else {
EVUTIL_ASSERT(change & EV_CHANGE_DEL);
out->flags = EV_DELETE;
}
}