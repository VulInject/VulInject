freecom_writedata (struct scsi_cmnd *srb, struct us_data *us,
int unsigned ipipe, unsigned int opipe, int count)
{
struct freecom_xfer_wrap *fxfr =
(struct freecom_xfer_wrap *) us->iobuf;
int result;

fxfr->Type = FCM_PACKET_OUTPUT | 0x00;
fxfr->Timeout = 0;    
fxfr->Count = cpu_to_le32 (count);
memset (fxfr->Pad, 0, sizeof (fxfr->Pad));

usb_stor_dbg(us, "Write data Freecom! (c=%d)\n", count);


result = usb_stor_bulk_transfer_buf (us, opipe, fxfr,
FCM_PACKET_LENGTH, NULL);
if (result != USB_STOR_XFER_GOOD) {
usb_stor_dbg(us, "Freecom writedata transport error\n");
return USB_STOR_TRANSPORT_ERROR;
}


usb_stor_dbg(us, "Start of write\n");
result = usb_stor_bulk_srb(us, opipe, srb);

usb_stor_dbg(us, "freecom_writedata done!\n");
if (result > USB_STOR_XFER_SHORT)
return USB_STOR_TRANSPORT_ERROR;
return USB_STOR_TRANSPORT_GOOD;
}