static int apci3120_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
{
struct apci3120_private *devpriv = dev->private;


outw(0, devpriv->addon + 4);


apci3120_addon_write(dev, 0, AMCC_OP_REG_AGCSTS);


outl(0, devpriv->amcc + AMCC_OP_REG_MCSR);


devpriv->ctrl = 0;
outw(devpriv->ctrl, dev->iobase + APCI3120_CTRL_REG);


devpriv->mode = 0;
outb(devpriv->mode, dev->iobase + APCI3120_MODE_REG);

inw(dev->iobase + APCI3120_STATUS_REG);
devpriv->cur_dmabuf = 0;

return 0;
}