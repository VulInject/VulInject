static int das16_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
{
unsigned int chan = CR_CHAN(insn->chanspec);
unsigned int range = CR_RANGE(insn->chanspec);
unsigned int val;
int ret;
int i;


das16_ai_set_mux_range(dev, chan, chan, range);

for (i = 0; i < insn->n; i++) {

outb_p(0, dev->iobase + DAS16_TRIG_REG);

ret = comedi_timeout(dev, s, insn, das16_ai_eoc, 0);
if (ret)
return ret;

val = inb(dev->iobase + DAS16_AI_MSB_REG) << 8;
val |= inb(dev->iobase + DAS16_AI_LSB_REG);
if (s->maxdata == 0x0fff)
val >>= 4;
val &= s->maxdata;

data[i] = val;
}

return insn->n;
}