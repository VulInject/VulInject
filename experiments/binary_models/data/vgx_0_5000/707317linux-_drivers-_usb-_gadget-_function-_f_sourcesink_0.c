static void source_sink_complete(struct usb_ep *ep, struct usb_request *req)
{
struct usb_composite_dev	*cdev;
struct f_sourcesink		*ss = ep->driver_data;
int				status = req->status;


if (!ss)
return;

cdev = ss->function.config->cdev;

switch (status) {

case 0:				
if (ep == ss->out_ep) {
check_read_data(ss, req);
if (ss->pattern != 2)
memset(req->buf, 0x55, req->length);
}
break;


case -ECONNABORTED:		
case -ECONNRESET:		
case -ESHUTDOWN:		
VDBG(cdev, "%s gone (%d), %d/%d\n", ep->name, status,
req->actual, req->length);
if (ep == ss->out_ep)
check_read_data(ss, req);
free_ep_req(ep, req);
return;

case -EOVERFLOW:		
default:
DBG(cdev, "%s complete --> %d, %d/%d\n", ep->name,
status, req->actual, req->length);
break;
case -EREMOTEIO:		
break;
}

status = usb_ep_queue(ep, req, GFP_ATOMIC);
if (status) {
ERROR(cdev, "kill %s:  resubmit %d bytes --> %d\n",
ep->name, req->length, status);
usb_ep_set_halt(ep);

}
}