static void can_host_socketcan_read(void *opaque)
{
CanHostSocketCAN *c = opaque;
CanHostState *ch = CAN_HOST(c);


c->bufcnt = read(c->fd, c->buf, sizeof(qemu_can_frame));
if (c->bufcnt < 0) {
warn_report("CAN bus host read failed (%s)", strerror(errno));
return;
}

if (!ch->bus_client.fd_mode) {
c->buf[0].flags = 0;
} else {
if (c->bufcnt > CAN_MTU) {
c->buf[0].flags |= QEMU_CAN_FRMF_TYPE_FD;
}
}

can_bus_client_send(&ch->bus_client, c->buf, 1);

if (DEBUG_CAN) {
can_host_socketcan_display_msg(c->buf);
}
}