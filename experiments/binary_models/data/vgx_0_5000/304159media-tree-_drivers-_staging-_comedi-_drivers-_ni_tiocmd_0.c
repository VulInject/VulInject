void ni_tio_handle_interrupt(struct ni_gpct *counter,
struct comedi_subdevice *s)
{
unsigned int cidx = counter->counter_index;
unsigned long flags;
int gate_error;
int tc_error;
int perm_stale_data;

ni_tio_acknowledge_and_confirm(counter, &gate_error, &tc_error,
&perm_stale_data);
if (gate_error) {
dev_notice(counter->counter_dev->dev->class_dev,
"%s: Gi_Gate_Error detected.\n", __func__);
s->async->events |= COMEDI_CB_OVERFLOW;
}
if (perm_stale_data)
s->async->events |= COMEDI_CB_ERROR;
switch (counter->counter_dev->variant) {
case ni_gpct_variant_m_series:
case ni_gpct_variant_660x:
if (ni_tio_read(counter, NITIO_DMA_STATUS_REG(cidx)) &
GI_DRQ_ERROR) {
dev_notice(counter->counter_dev->dev->class_dev,
"%s: Gi_DRQ_Error detected.\n", __func__);
s->async->events |= COMEDI_CB_OVERFLOW;
}
break;
case ni_gpct_variant_e_series:
break;
}
spin_lock_irqsave(&counter->lock, flags);
if (counter->mite_chan)
mite_ack_linkc(counter->mite_chan, s, true);
spin_unlock_irqrestore(&counter->lock, flags);
}