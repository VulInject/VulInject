void i1480_usb_neep_cb(struct urb *urb)
{
struct i1480 *i1480 = urb->context;
struct device *dev = i1480->dev;

switch (urb->status) {
case 0:
break;
case -ECONNRESET:	
case -ENOENT:		
dev_dbg(dev, "NEEP: reset/noent %d\n", urb->status);
break;
case -ESHUTDOWN:	
dev_dbg(dev, "NEEP: down %d\n", urb->status);
break;
default:
dev_err(dev, "NEEP: unknown status %d\n", urb->status);
break;
}
i1480->evt_result = urb->actual_length;
complete(&i1480->evt_complete);
return;
}