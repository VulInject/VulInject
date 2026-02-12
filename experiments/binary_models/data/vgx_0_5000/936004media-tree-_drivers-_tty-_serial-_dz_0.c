static void dz_console_putchar(struct uart_port *uport, int ch)
{
struct dz_port *dport = to_dport(uport);
unsigned long flags;
unsigned short csr, tcr, trdy, mask;
int loops = 10000;

spin_lock_irqsave(&dport->port.lock, flags);
csr = dz_in(dport, DZ_CSR);
dz_out(dport, DZ_CSR, csr & ~DZ_TIE);
tcr = dz_in(dport, DZ_TCR);
tcr |= 1 << dport->port.line;
mask = tcr;
dz_out(dport, DZ_TCR, mask);
iob();
spin_unlock_irqrestore(&dport->port.lock, flags);

do {
trdy = dz_in(dport, DZ_CSR);
if (!(trdy & DZ_TRDY))
continue;
trdy = (trdy & DZ_TLINE) >> 8;
if (trdy == dport->port.line)
break;
mask &= ~(1 << trdy);
dz_out(dport, DZ_TCR, mask);
iob();
udelay(2);
} while (--loops);

if (loops)				
dz_out(dport, DZ_TDR, ch);

dz_out(dport, DZ_TCR, tcr);
dz_out(dport, DZ_CSR, csr);
}