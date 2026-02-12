static int
mux_master_process_stop_listening(struct ssh *ssh, u_int rid,
Channel *c, struct sshbuf *m, struct sshbuf *reply)
{
debug_f("channel %d: stop listening", c->self);

if (options.control_master == SSHCTL_MASTER_ASK ||
options.control_master == SSHCTL_MASTER_AUTO_ASK) {
if (!ask_permission("Disable further multiplexing on shared "
"connection to %s? ", host)) {
debug2_f("stop listen refused by user");
reply_error(reply, MUX_S_PERMISSION_DENIED, rid,
"Permission denied");
return 0;
}
}

if (mux_listener_channel != NULL) {
channel_free(ssh, mux_listener_channel);
client_stop_mux();
free(options.control_path);
options.control_path = NULL;
mux_listener_channel = NULL;
muxserver_sock = -1;
}

reply_ok(reply, rid);
return 0;
}