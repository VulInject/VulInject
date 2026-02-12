static int pci9111_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
{
unsigned int chan = CR_CHAN(insn->chanspec);
unsigned int range = CR_RANGE(insn->chanspec);
unsigned int maxdata = s->maxdata;
unsigned int invert = (maxdata + 1) >> 1;
unsigned int shift = (maxdata == 0xffff) ? 0 : 4;
unsigned int status;
int ret;
int i;

outb(chan, dev->iobase + PCI9111_AI_CHANNEL_REG);

status = inb(dev->iobase + PCI9111_AI_RANGE_STAT_REG);
if ((status & PCI9111_AI_RANGE_MASK) != range) {
outb(PCI9111_AI_RANGE(range),
dev->iobase + PCI9111_AI_RANGE_STAT_REG);
}

pci9111_fifo_reset(dev);

for (i = 0; i < insn->n; i++) {

outb(0, dev->iobase + PCI9111_SOFT_TRIG_REG);

ret = comedi_timeout(dev, s, insn, pci9111_ai_eoc, 0);
if (ret) {
pci9111_fifo_reset(dev);
return ret;
}

data[i] = inw(dev->iobase + PCI9111_AI_FIFO_REG);
data[i] = ((data[i] >> shift) & maxdata) ^ invert;
}

return i;
}