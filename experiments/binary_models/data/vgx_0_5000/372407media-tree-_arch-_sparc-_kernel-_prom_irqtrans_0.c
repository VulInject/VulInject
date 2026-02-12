static unsigned int fire_irq_build(struct device_node *dp,
unsigned int ino,
void *_data)
{
struct fire_irq_data *irq_data = _data;
unsigned long pbm_regs = irq_data->pbm_regs;
unsigned long imap, iclr;
unsigned long int_ctrlr;

ino &= 0x3f;


imap = fire_ino_to_imap(pbm_regs, ino);
iclr = fire_ino_to_iclr(pbm_regs, ino);


int_ctrlr = 1 << 6;
upa_writeq(int_ctrlr, imap);


ino |= (irq_data->portid << 6);
ino -= int_ctrlr;
return build_irq(ino, iclr, imap);
}