module_param_named(ishtp_use_dma, ishtp_use_dma, int, 0600);
MODULE_PARM_DESC(ishtp_use_dma, "Use DMA to send messages");

static bool ishtp_device_ready;


void ishtp_recv(struct ishtp_device *dev)
{
uint32_t	msg_hdr;
struct ishtp_msg_hdr	*ishtp_hdr;


msg_hdr = dev->ops->ishtp_read_hdr(dev);
if (!msg_hdr)
return;

dev->ops->sync_fw_clock(dev);

ishtp_hdr = (struct ishtp_msg_hdr *)&msg_hdr;
dev->ishtp_msg_hdr = msg_hdr;


if (ishtp_hdr->length > dev->mtu) {
dev_err(dev->devc,
"ISHTP hdr - bad length: %u; dropped [%08X]\n",
(unsigned int)ishtp_hdr->length, msg_hdr);
return;
}


if (!ishtp_hdr->host_addr && !ishtp_hdr->fw_addr)
recv_hbm(dev, ishtp_hdr);

else if (!ishtp_hdr->host_addr)
recv_fixed_cl_msg(dev, ishtp_hdr);
else

recv_ishtp_cl_msg(dev, ishtp_hdr);
}