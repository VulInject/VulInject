void zebra_ptm_init(void)
{
char buf[64];

memset(&ptm_cb, 0, sizeof(ptm_cb));

ptm_cb.out_data = calloc(1, ZEBRA_PTM_SEND_MAX_SOCKBUF);
if (!ptm_cb.out_data) {
zlog_debug("%s: Allocation of send data failed", __func__);
return;
}

ptm_cb.in_data = calloc(1, ZEBRA_PTM_MAX_SOCKBUF);
if (!ptm_cb.in_data) {
zlog_debug("%s: Allocation of recv data failed", __func__);
free(ptm_cb.out_data);
return;
}

ptm_cb.pid = getpid();
zebra_ptm_install_commands();

snprintf(buf, sizeof(buf), "%s", FRR_PTM_NAME);
ptm_hdl = ptm_lib_register(buf, NULL, zebra_ptm_handle_msg_cb,
zebra_ptm_handle_msg_cb);
ptm_cb.wb = buffer_new(0);

ptm_cb.reconnect_time = ZEBRA_PTM_RECONNECT_TIME_INITIAL;

ptm_cb.ptm_sock = -1;

hook_register(zserv_client_close, zebra_ptm_bfd_client_deregister);
}