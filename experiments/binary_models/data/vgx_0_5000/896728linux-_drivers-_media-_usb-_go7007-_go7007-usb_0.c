static void go7007_usb_readinterrupt_complete(struct urb *urb)
{
struct go7007 *go = (struct go7007 *)urb->context;
__le16 *regs = (__le16 *)urb->transfer_buffer;
int status = urb->status;

if (status) {
if (status != -ESHUTDOWN &&
go->status != STATUS_SHUTDOWN) {
dev_err(go->dev, "error in read interrupt: %d\n", urb->status);
} else {
wake_up(&go->interrupt_waitq);
return;
}
} else if (urb->actual_length != urb->transfer_buffer_length) {
dev_err(go->dev, "short read in interrupt pipe!\n");
} else {
go->interrupt_available = 1;
go->interrupt_data = __le16_to_cpu(regs[0]);
go->interrupt_value = __le16_to_cpu(regs[1]);
pr_debug("ReadInterrupt: %04x %04x\n",
go->interrupt_value, go->interrupt_data);
}

wake_up(&go->interrupt_waitq);
}