int snd_emu10k1_fx8010_unregister_irq_handler(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_irq *irq)
{
struct snd_emu10k1_fx8010_irq *tmp;
unsigned long flags;

spin_lock_irqsave(&emu->fx8010.irq_lock, flags);
tmp = emu->fx8010.irq_handlers;
if (tmp == irq) {
emu->fx8010.irq_handlers = tmp->next;
if (emu->fx8010.irq_handlers == NULL) {
snd_emu10k1_intr_disable(emu, INTE_FXDSPENABLE);
emu->dsp_interrupt = NULL;
}
} else {
while (tmp && tmp->next != irq)
tmp = tmp->next;
if (tmp)
tmp->next = tmp->next->next;
}
spin_unlock_irqrestore(&emu->fx8010.irq_lock, flags);
return 0;
}