__releases(mep->mtu->lock)
__acquires(mep->mtu->lock)
{
struct mtu3_request *mreq;
struct mtu3 *mtu;
int busy = mep->busy;

mreq = to_mtu3_request(req);
list_del(&mreq->list);
if (mreq->request.status == -EINPROGRESS)
mreq->request.status = status;

mtu = mreq->mtu;
mep->busy = 1;
spin_unlock(&mtu->lock);


if (mep->epnum)
usb_gadget_unmap_request(&mtu->g, req, mep->is_in);

dev_dbg(mtu->dev, "%s complete req: %p, sts %d, %d/%d\n", mep->name,
req, req->status, mreq->request.actual, mreq->request.length);

usb_gadget_giveback_request(&mep->ep, &mreq->request);

spin_lock(&mtu->lock);
mep->busy = busy;
}