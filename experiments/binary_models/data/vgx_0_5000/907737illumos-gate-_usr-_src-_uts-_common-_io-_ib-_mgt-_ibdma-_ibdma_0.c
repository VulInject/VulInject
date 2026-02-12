static void
ibdma_get_ioc_profile(ibdma_hca_t *hca, ibmf_msg_t *msg)
{
ib_dm_ioc_ctrl_profile_t	*iocp;
uint32_t			slot;

ASSERT(msg != NULL);

slot = b2h32(msg->im_msgbufs_recv.im_bufs_mad_hdr->AttributeModifier);
iocp = (ib_dm_ioc_ctrl_profile_t *)
msg->im_msgbufs_send.im_bufs_cl_data;
if (slot == 0 || slot > IBDMA_MAX_IOC) {
msg->im_msgbufs_send.im_bufs_mad_hdr->Status =
MAD_STATUS_INVALID_FIELD;
return;
}

slot--;
rw_enter(&hca->ih_iou_rwlock, RW_READER);
if (ibdma_get_ioc_state(hca, slot) == IBDMA_IOC_PRESENT) {
bcopy(&hca->ih_ioc[slot].ii_profile, iocp,
sizeof (ib_dm_ioc_ctrl_profile_t));
} else {
msg->im_msgbufs_send.im_bufs_mad_hdr->Status =
IB_DM_DEVMGT_MAD_STAT_NORESP;
}
rw_exit(&hca->ih_iou_rwlock);
}