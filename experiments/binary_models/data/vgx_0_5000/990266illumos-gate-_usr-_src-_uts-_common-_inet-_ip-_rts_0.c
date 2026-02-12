int
rts_ioctl(sock_lower_handle_t proto_handle, int cmd, intptr_t arg,
int mode, int32_t *rvalp, cred_t *cr)
{
conn_t		*connp = (conn_t *)proto_handle;
int		error;


if (connp->conn_helper_info == NULL) {
rts_stack_t *rtss = connp->conn_rts->rts_rtss;

ASSERT(rtss->rtss_ldi_ident != NULL);


error = ip_create_helper_stream(connp, rtss->rtss_ldi_ident);
if (error != 0) {
ip0dbg(("rts_ioctl: create of IP helper stream "
"failed %d\n", error));
return (error);
}
}

switch (cmd) {
case ND_SET:
case ND_GET:
case TI_GETPEERNAME:
case TI_GETMYNAME:
cmn_err(CE_CONT, "rts_ioctl cmd 0x%x on non sreams"
" socket", cmd);
error = EINVAL;
break;
default:

error = ldi_ioctl(connp->conn_helper_info->iphs_handle,
cmd, arg, mode, cr, rvalp);
break;
}

return (error);
}