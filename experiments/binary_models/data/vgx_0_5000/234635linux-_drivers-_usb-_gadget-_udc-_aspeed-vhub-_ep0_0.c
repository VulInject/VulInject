static int ast_vhub_ep0_dequeue(struct usb_ep* u_ep, struct usb_request *u_req)
{
struct ast_vhub_ep *ep = to_ast_ep(u_ep);
struct ast_vhub *vhub = ep->vhub;
struct ast_vhub_req *req;
unsigned long flags;
int rc = -EINVAL;

spin_lock_irqsave(&vhub->lock, flags);


req = list_first_entry_or_null(&ep->queue, struct ast_vhub_req, queue);


if (req && u_req == &req->req) {
EPVDBG(ep, "dequeue req @%p\n", req);


ast_vhub_done(ep, req, -ECONNRESET);


writel(VHUB_EP0_CTRL_STALL, ep->ep0.ctlstat);
ep->ep0.state = ep0_state_status;
ep->ep0.dir_in = false;
rc = 0;
}
spin_unlock_irqrestore(&vhub->lock, flags);
return rc;
}