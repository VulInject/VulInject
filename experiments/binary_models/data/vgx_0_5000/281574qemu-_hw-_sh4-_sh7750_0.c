static void porta_changed(SH7750State *s, uint16_t prev)
{
uint16_t currenta, changes;
int i, r = 0;

currenta = porta_lines(s);
if (currenta == prev) {
return;
}
trace_sh7750_porta(prev, currenta, s->pdtra, s->pctra);
changes = currenta ^ prev;

for (i = 0; i < NB_DEVICES; i++) {
if (s->devices[i] && (s->devices[i]->portamask_trigger & changes)) {
r |= s->devices[i]->port_change_cb(currenta, portb_lines(s),
&s->periph_pdtra,
&s->periph_portdira,
&s->periph_pdtrb,
&s->periph_portdirb);
}
}

if (r) {
gen_port_interrupts(s);
}
}