static int atmio16d_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
{
struct atmio16d_private *devpriv = dev->private;
int i;
int chan;
int gain;
int ret;

chan = CR_CHAN(insn->chanspec);
gain = CR_RANGE(insn->chanspec);







outw(chan | (gain << 6), dev->iobase + MUX_GAIN_REG);

for (i = 0; i < insn->n; i++) {

outw(0, dev->iobase + START_CONVERT_REG);


ret = comedi_timeout(dev, s, insn, atmio16d_ai_eoc, 0);
if (ret)
return ret;


data[i] = inw(dev->iobase + AD_FIFO_REG);

if (devpriv->adc_coding == adc_2comp)
data[i] ^= 0x800;
}

return i;
}