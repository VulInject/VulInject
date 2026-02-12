struct nes_cqp_request *nes_get_cqp_request(struct nes_device *nesdev)
{
unsigned long flags;
struct nes_cqp_request *cqp_request = NULL;

if (!list_empty(&nesdev->cqp_avail_reqs)) {
spin_lock_irqsave(&nesdev->cqp.lock, flags);
if (!list_empty(&nesdev->cqp_avail_reqs)) {
cqp_request = list_entry(nesdev->cqp_avail_reqs.next,
struct nes_cqp_request, list);
list_del_init(&cqp_request->list);
}
spin_unlock_irqrestore(&nesdev->cqp.lock, flags);
}
if (cqp_request == NULL) {
cqp_request = kzalloc(sizeof(struct nes_cqp_request), GFP_ATOMIC);
if (cqp_request) {
cqp_request->dynamic = 1;
INIT_LIST_HEAD(&cqp_request->list);
}
}

if (cqp_request) {
init_waitqueue_head(&cqp_request->waitq);
cqp_request->waiting = 0;
cqp_request->request_done = 0;
cqp_request->callback = 0;
init_waitqueue_head(&cqp_request->waitq);
nes_debug(NES_DBG_CQP, "Got cqp request %p from the available list \n",
cqp_request);
} else
printk(KERN_ERR PFX "%s: Could not allocated a CQP request.\n",
__func__);

return cqp_request;
}