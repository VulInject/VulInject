static int
vsw_send_dds_resp_msg(vsw_ldc_t *ldcp, vio_dds_msg_t *dmsg, int ack)
{
vsw_t	*vswp = ldcp->ldc_port->p_vswp;
int	rv;

D1(vswp, "%s:enter\n", __func__);
if (ack == B_TRUE) {
dmsg->tag.vio_subtype = VIO_SUBTYPE_ACK;
dmsg->msg.share_resp_msg.status = DDS_VNET_SUCCESS;
} else {
dmsg->tag.vio_subtype = VIO_SUBTYPE_NACK;
dmsg->msg.share_resp_msg.status = DDS_VNET_FAIL;
}
rv = vsw_send_msg(ldcp, dmsg, sizeof (vio_dds_msg_t), B_FALSE);
D1(vswp, "%s:exit rv=%d\n", __func__, rv);
return (rv);
}