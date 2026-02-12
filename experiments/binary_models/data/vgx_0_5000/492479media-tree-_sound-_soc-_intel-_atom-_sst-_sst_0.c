static irqreturn_t intel_sst_irq_thread_mrfld(int irq, void *context)
{
struct intel_sst_drv *drv = (struct intel_sst_drv *) context;
struct ipc_post *__msg, *msg = NULL;
unsigned long irq_flags;

spin_lock_irqsave(&drv->rx_msg_lock, irq_flags);
if (list_empty(&drv->rx_list)) {
spin_unlock_irqrestore(&drv->rx_msg_lock, irq_flags);
return IRQ_HANDLED;
}

list_for_each_entry_safe(msg, __msg, &drv->rx_list, node) {
list_del(&msg->node);
spin_unlock_irqrestore(&drv->rx_msg_lock, irq_flags);
if (msg->is_process_reply)
drv->ops->process_message(msg);
else
drv->ops->process_reply(drv, msg);

if (msg->is_large)
kfree(msg->mailbox_data);
kfree(msg);
spin_lock_irqsave(&drv->rx_msg_lock, irq_flags);
}
spin_unlock_irqrestore(&drv->rx_msg_lock, irq_flags);
return IRQ_HANDLED;
}