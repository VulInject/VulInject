static u64 i8253_read(struct clocksource *cs)
{
static int old_count;
static u32 old_jifs;
unsigned long flags;
int count;
u32 jifs;

raw_spin_lock_irqsave(&i8253_lock, flags);

jifs = jiffies;
outb_p(0x00, PIT_MODE);	
count = inb_p(PIT_CH0);	
count |= inb_p(PIT_CH0) << 8;


if (count > PIT_LATCH) {
outb_p(0x34, PIT_MODE);
outb_p(PIT_LATCH & 0xff, PIT_CH0);
outb_p(PIT_LATCH >> 8, PIT_CH0);
count = PIT_LATCH - 1;
}


if (count > old_count && jifs == old_jifs)
count = old_count;

old_count = count;
old_jifs = jifs;

raw_spin_unlock_irqrestore(&i8253_lock, flags);

count = (PIT_LATCH - 1) - count;

return (u64)(jifs * PIT_LATCH) + count;
}

static struct clocksource i8253_cs = {
.name		= "pit",
.rating		= 110,
.read		= i8253_read,
.mask		= CLOCKSOURCE_MASK(32),
};