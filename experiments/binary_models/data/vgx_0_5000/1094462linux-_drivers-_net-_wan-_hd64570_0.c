static void sca_set_port(port_t *port)
{
card_t *card = port_to_card(port);
u16 msci = get_msci(port);
u8 md2 = sca_in(msci + MD2, card);
unsigned int tmc, br = 10, brv = 1024;

if (port->settings.clock_rate > 0) {

do {
br--;
brv >>= 1; 


tmc = CLOCK_BASE / brv / port->settings.clock_rate;
} while (br > 1 && tmc <= 128);

if (tmc < 1) {
tmc = 1;
br = 0;	
brv = 1;
} else if (tmc > 255) {
tmc = 256; 
}

port->settings.clock_rate = CLOCK_BASE / brv / tmc;
} else {
br = 9; 
tmc = 256;	
port->settings.clock_rate = CLOCK_BASE / (256 * 512);
}

port->rxs = (port->rxs & ~CLK_BRG_MASK) | br;
port->txs = (port->txs & ~CLK_BRG_MASK) | br;
port->tmc = tmc;


sca_out(port->tmc, msci + TMC, card);


sca_out(port->rxs, msci + RXS, card);
sca_out(port->txs, msci + TXS, card);

if (port->settings.loopback)
md2 |= MD2_LOOPBACK;
else
md2 &= ~MD2_LOOPBACK;

sca_out(md2, msci + MD2, card);
}