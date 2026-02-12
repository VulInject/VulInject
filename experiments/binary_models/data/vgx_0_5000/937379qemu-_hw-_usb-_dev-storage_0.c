void usb_msd_transfer_data(SCSIRequest *req, uint32_t len)
{
MSDState *s = DO_UPCAST(MSDState, dev.qdev, req->bus->qbus.parent);
USBPacket *p = s->packet;

assert((s->mode == USB_MSDM_DATAOUT) == (req->cmd.mode == SCSI_XFER_TO_DEV));
s->scsi_len = len;
s->scsi_off = 0;
if (p) {
usb_msd_copy_data(s, p);
p = s->packet;
if (p && p->actual_length == p->iov.size) {
p->status = USB_RET_SUCCESS; 
usb_msd_packet_complete(s);
}
}
}