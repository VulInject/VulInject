static void xbox_remote_irq_in(struct urb *urb)
{
struct xbox_remote *xbox_remote = urb->context;
int retval;

switch (urb->status) {
case 0:			
xbox_remote_input_report(urb);
break;
case -ECONNRESET:	
case -ENOENT:
case -ESHUTDOWN:
dev_dbg(&xbox_remote->interface->dev,
"%s: urb error status, unlink?\n",
__func__);
return;
default:		
dev_dbg(&xbox_remote->interface->dev,
"%s: Nonzero urb status %d\n",
__func__, urb->status);
}

retval = usb_submit_urb(urb, GFP_ATOMIC);
if (retval)
dev_err(&xbox_remote->interface->dev,
"%s: usb_submit_urb()=%d\n",
__func__, retval);
}