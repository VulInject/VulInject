static void urb_completion(struct urb *purb)
{
struct au0828_dev *dev = purb->context;
int ptype = usb_pipetype(purb->pipe);
unsigned char *ptr;

dprintk(2, "%s: %d\n", __func__, purb->actual_length);

if (!dev) {
dprintk(2, "%s: no dev!\n", __func__);
return;
}

if (!dev->urb_streaming) {
dprintk(2, "%s: not streaming!\n", __func__);
return;
}

if (ptype != PIPE_BULK) {
pr_err("%s: Unsupported URB type %d\n",
__func__, ptype);
return;
}


ptr = purb->transfer_buffer;
if (purb->actual_length > 0 && ptr[0] != 0x47) {
dprintk(1, "Need to restart streaming %02x len=%d!\n",
ptr[0], purb->actual_length);
schedule_work(&dev->restart_streaming);
return;
}


dvb_dmx_swfilter_packets(&dev->dvb.demux,
purb->transfer_buffer, purb->actual_length / 188);


memset(purb->transfer_buffer, 0, URB_BUFSIZE);


usb_submit_urb(purb, GFP_ATOMIC);
}