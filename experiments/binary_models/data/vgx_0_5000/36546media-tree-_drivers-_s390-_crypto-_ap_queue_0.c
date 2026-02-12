static ssize_t ap_interrupt_show(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct ap_queue *aq = to_ap_queue(dev);
int rc = 0;

spin_lock_bh(&aq->lock);
if (aq->state == AP_STATE_SETIRQ_WAIT)
rc = snprintf(buf, PAGE_SIZE, "Enable Interrupt pending.\n");
else if (aq->interrupt == AP_INTR_ENABLED)
rc = snprintf(buf, PAGE_SIZE, "Interrupts enabled.\n");
else
rc = snprintf(buf, PAGE_SIZE, "Interrupts disabled.\n");
spin_unlock_bh(&aq->lock);
return rc;
}