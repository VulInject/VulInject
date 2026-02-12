static void pci230_handle_ao_nofifo(struct comedi_device *dev,
struct comedi_subdevice *s)
{
struct comedi_async *async = s->async;
struct comedi_cmd *cmd = &async->cmd;
unsigned short data;
int i;

if (cmd->stop_src == TRIG_COUNT && async->scans_done >= cmd->stop_arg)
return;

for (i = 0; i < cmd->chanlist_len; i++) {
unsigned int chan = CR_CHAN(cmd->chanlist[i]);

if (!comedi_buf_read_samples(s, &data, 1)) {
async->events |= COMEDI_CB_OVERFLOW;
return;
}
pci230_ao_write_nofifo(dev, data, chan);
s->readback[chan] = data;
}

if (cmd->stop_src == TRIG_COUNT && async->scans_done >= cmd->stop_arg)
async->events |= COMEDI_CB_EOA;
}