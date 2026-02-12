static void uping_read_callback(struct Event* ev)
{
struct UPing *pptr;

assert(0 != ev_socket(ev));
assert(0 != s_data(ev_socket(ev)));

pptr = (struct UPing*) s_data(ev_socket(ev));

Debug((DEBUG_SEND, "uping_read_callback called, %p (%d)", pptr,
ev_type(ev)));

if (ev_type(ev) == ET_DESTROY) { 
pptr->freeable &= ~UPING_PENDING_SOCKET;

if (!pptr->freeable)
MyFree(pptr); 
} else {
assert(ev_type(ev) == ET_READ || ev_type(ev) == ET_ERROR);

uping_read(pptr); 
}
}