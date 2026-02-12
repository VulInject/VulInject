static void command_out_completed(struct urb *urb)
{				
struct vub300_mmc_host *vub300 = (struct vub300_mmc_host *)urb->context;
if (urb->status) {
complete(&vub300->command_complete);
} else {
int ret;
unsigned int pipe =
usb_rcvbulkpipe(vub300->udev, vub300->cmnd_res_ep);
usb_fill_bulk_urb(vub300->command_res_urb, vub300->udev, pipe,
&vub300->resp, sizeof(vub300->resp),
command_res_completed, vub300);
vub300->command_res_urb->actual_length = 0;
ret = usb_submit_urb(vub300->command_res_urb, GFP_ATOMIC);
if (ret == 0) {

} else {

complete(&vub300->command_complete);
}
}
}