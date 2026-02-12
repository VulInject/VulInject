static int vici_reconnect(struct thread *t)
{
struct vici_conn *vici = THREAD_ARG(t);
int fd;

vici->t_reconnect = NULL;
if (vici->fd >= 0) return 0;

fd = sock_open_unix("/var/run/charon.vici");
if (fd < 0) {
zlog_warn("%s: failure connecting VICI socket: %s",
__PRETTY_FUNCTION__, strerror(errno));
THREAD_TIMER_ON(master, vici->t_reconnect, vici_reconnect, vici, 2);
return 0;
}

debugf(NHRP_DEBUG_COMMON, "VICI: Connected");
vici->fd = fd;
THREAD_READ_ON(master, vici->t_read, vici_read, vici, vici->fd);




vici_register_event(vici, "child-state-installed");
vici_register_event(vici, "child-state-rekeyed");
vici_register_event(vici, "child-state-destroying");
vici_register_event(vici, "list-sa");
vici_submit_request(vici, "list-sas", VICI_END);

return 0;
}