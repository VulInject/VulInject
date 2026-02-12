void __init q40_init_IRQ(void)
{
m68k_setup_irq_controller(&q40_irq_chip, handle_simple_irq, 1,
Q40_IRQ_MAX);


m68k_setup_auto_interrupt(q40_irq_handler);

m68k_irq_startup_irq(IRQ_AUTO_2);
m68k_irq_startup_irq(IRQ_AUTO_4);


master_outb(1, EXT_ENABLE_REG);  


master_outb(0, KEY_IRQ_ENABLE_REG);
}




int ql_ticks;              
static int sound_ticks;


void q40_mksound(unsigned int hz, unsigned int ticks)
{


if (hz == 0) {
if (sound_ticks)
sound_ticks = 1;

*DAC_LEFT = 128;
*DAC_RIGHT = 128;

return;
}

if (sound_ticks == 0)
sound_ticks = 1000; 
sound_ticks = ticks << 1;
}