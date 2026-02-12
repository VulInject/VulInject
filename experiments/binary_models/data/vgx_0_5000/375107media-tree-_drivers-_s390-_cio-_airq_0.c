int register_adapter_interrupt(struct airq_struct *airq)
{
char dbf_txt[32];

if (!airq->handler || airq->isc > MAX_ISC)
return -EINVAL;
if (!airq->lsi_ptr) {
airq->lsi_ptr = kzalloc(1, GFP_KERNEL);
if (!airq->lsi_ptr)
return -ENOMEM;
airq->flags |= AIRQ_PTR_ALLOCATED;
}
if (!airq->lsi_mask)
airq->lsi_mask = 0xff;
snprintf(dbf_txt, sizeof(dbf_txt), "rairq:%p", airq);
CIO_TRACE_EVENT(4, dbf_txt);
isc_register(airq->isc);
spin_lock(&airq_lists_lock);
hlist_add_head_rcu(&airq->list, &airq_lists[airq->isc]);
spin_unlock(&airq_lists_lock);
return 0;
}