static irqreturn_t das6402_interrupt(int irq, void *d)
{
struct comedi_device *dev = d;
struct comedi_subdevice *s = dev->read_subdev;
struct comedi_async *async = s->async;
struct comedi_cmd *cmd = &async->cmd;
unsigned int status;

status = inb(dev->iobase + DAS6402_STATUS_REG);
if ((status & DAS6402_STATUS_INT) == 0)
return IRQ_NONE;

if (status & DAS6402_STATUS_FFULL) {
async->events |= COMEDI_CB_OVERFLOW;
} else if (status & DAS6402_STATUS_FFNE) {
unsigned short val;

val = das6402_ai_read_sample(dev, s);
comedi_buf_write_samples(s, &val, 1);

if (cmd->stop_src == TRIG_COUNT &&
async->scans_done >= cmd->stop_arg)
async->events |= COMEDI_CB_EOA;
}

das6402_clear_all_interrupts(dev);

comedi_handle_events(dev, s);

return IRQ_HANDLED;
}