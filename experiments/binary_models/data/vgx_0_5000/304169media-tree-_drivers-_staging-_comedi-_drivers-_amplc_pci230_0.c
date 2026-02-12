static void pci230_ai_update_fifo_trigger_level(struct comedi_device *dev,
struct comedi_subdevice *s)
{
struct pci230_private *devpriv = dev->private;
struct comedi_cmd *cmd = &s->async->cmd;
unsigned int wake;
unsigned short triglev;
unsigned short adccon;

if (cmd->flags & CMDF_WAKE_EOS)
wake = cmd->scan_end_arg - s->async->cur_chan;
else
wake = comedi_nsamples_left(s, PCI230_ADC_FIFOLEVEL_HALFFULL);

if (wake >= PCI230_ADC_FIFOLEVEL_HALFFULL) {
triglev = PCI230_ADC_INT_FIFO_HALF;
} else if (wake > 1 && devpriv->hwver > 0) {

if (devpriv->adcfifothresh != wake) {
devpriv->adcfifothresh = wake;
outw(wake, devpriv->daqio + PCI230P_ADCFFTH);
}
triglev = PCI230P_ADC_INT_FIFO_THRESH;
} else {
triglev = PCI230_ADC_INT_FIFO_NEMPTY;
}
adccon = (devpriv->adccon & ~PCI230_ADC_INT_FIFO_MASK) | triglev;
if (adccon != devpriv->adccon) {
devpriv->adccon = adccon;
outw(adccon, devpriv->daqio + PCI230_ADCCON);
}
}