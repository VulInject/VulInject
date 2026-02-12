ISC_SOCKETFUNC_SCOPE isc_result_t
isc__socket_recv2(isc_socket_t *sock0, isc_region_t *region,
unsigned int minimum, isc_task_t *task,
isc_socketevent_t *event, unsigned int flags)
{
isc__socket_t *sock = (isc__socket_t *)sock0;

event->ev_sender = sock;
event->result = ISC_R_UNSET;
ISC_LIST_INIT(event->bufferlist);
event->region = *region;
event->n = 0;
event->offset = 0;
event->attributes = 0;


if (sock->type == isc_sockettype_udp)
event->minimum = 1;
else {
if (minimum == 0)
event->minimum = region->length;
else
event->minimum = minimum;
}

return (socket_recv(sock, event, task, flags));
}