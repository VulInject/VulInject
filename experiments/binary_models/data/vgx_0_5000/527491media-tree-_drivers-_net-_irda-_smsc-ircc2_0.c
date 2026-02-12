static void smsc_ircc_set_sir_speed(struct smsc_ircc_cb *self, __u32 speed)
{
int iobase;
int fcr;    
int lcr;    
int divisor;

pr_debug("%s(), Setting speed to: %d\n", __func__, speed);

IRDA_ASSERT(self != NULL, return;);
iobase = self->io.sir_base;


self->io.speed = speed;


outb(0, iobase + UART_IER);

divisor = SMSC_IRCC2_MAX_SIR_SPEED / speed;

fcr = UART_FCR_ENABLE_FIFO;


fcr |= self->io.speed < 38400 ?
UART_FCR_TRIGGER_1 : UART_FCR_TRIGGER_14;


lcr = UART_LCR_WLEN8;

outb(UART_LCR_DLAB | lcr, iobase + UART_LCR); 
outb(divisor & 0xff,      iobase + UART_DLL); 
outb(divisor >> 8,	  iobase + UART_DLM);
outb(lcr,		  iobase + UART_LCR); 
outb(fcr,		  iobase + UART_FCR); 


outb(UART_IER_RLSI | UART_IER_RDI | UART_IER_THRI, iobase + UART_IER);

pr_debug("%s() speed changed to: %d\n", __func__, speed);
}