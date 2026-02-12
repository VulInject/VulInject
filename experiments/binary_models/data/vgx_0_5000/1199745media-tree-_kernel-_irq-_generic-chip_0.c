}
EXPORT_SYMBOL_GPL(irq_setup_alt_chip);


void irq_remove_generic_chip(struct irq_chip_generic *gc, u32 msk,
unsigned int clr, unsigned int set)
{
unsigned int i = gc->irq_base;

raw_spin_lock(&gc_lock);
list_del(&gc->list);
raw_spin_unlock(&gc_lock);

for (; msk; msk >>= 1, i++) {
if (!(msk & 0x01))
continue;


irq_set_handler(i, NULL);
irq_set_chip(i, &no_irq_chip);
irq_set_chip_data(i, NULL);
irq_modify_status(i, clr, set);
}
}