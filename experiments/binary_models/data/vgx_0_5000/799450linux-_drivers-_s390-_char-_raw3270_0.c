int raw3270_start(struct raw3270_view *view, struct raw3270_request *rq)
{
unsigned long flags;
struct raw3270 *rp;
int rc;

spin_lock_irqsave(get_ccwdev_lock(view->dev->cdev), flags);
rp = view->dev;
if (!rp || rp->view != view)
rc = -EACCES;
else if (!raw3270_state_ready(rp))
rc = -EBUSY;
else
rc =  __raw3270_start(rp, view, rq);
spin_unlock_irqrestore(get_ccwdev_lock(view->dev->cdev), flags);
return rc;
}