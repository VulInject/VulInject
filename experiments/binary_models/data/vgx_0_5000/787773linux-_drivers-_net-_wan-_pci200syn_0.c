static void pci200_set_iface(port_t *port)
{
card_t *card = port->card;
u16 msci = get_msci(port);
u8 rxs = port->rxs & CLK_BRG_MASK;
u8 txs = port->txs & CLK_BRG_MASK;

sca_out(EXS_TES1, (port->chan ? MSCI1_OFFSET : MSCI0_OFFSET) + EXS,
port->card);
switch (port->settings.clock_type) {
case CLOCK_INT:
rxs |= CLK_BRG; 
txs |= CLK_PIN_OUT | CLK_TX_RXCLK; 
break;

case CLOCK_TXINT:
rxs |= CLK_LINE; 
txs |= CLK_PIN_OUT | CLK_BRG; 
break;

case CLOCK_TXFROMRX:
rxs |= CLK_LINE; 
txs |= CLK_PIN_OUT | CLK_TX_RXCLK; 
break;

default:		
rxs |= CLK_LINE; 
txs |= CLK_PIN_OUT | CLK_LINE; 
break;
}

port->rxs = rxs;
port->txs = txs;
sca_out(rxs, msci + RXS, card);
sca_out(txs, msci + TXS, card);
sca_set_port(port);
}