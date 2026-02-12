static void heathrow_set_irq(void *opaque, int num, int level)
{
HeathrowState *s = opaque;
HeathrowPICState *pic;
unsigned int irq_bit;
int last_level;

pic = &s->pics[1 - (num >> 5)];
irq_bit = 1 << (num & 0x1f);
last_level = (pic->levels & irq_bit) ? 1 : 0;

if (level) {
pic->events |= irq_bit & ~pic->level_triggered;
pic->levels |= irq_bit;
} else {
pic->levels &= ~irq_bit;
}

if (last_level != level) {
trace_heathrow_set_irq(num, level);
}

heathrow_update_irq(s);
}