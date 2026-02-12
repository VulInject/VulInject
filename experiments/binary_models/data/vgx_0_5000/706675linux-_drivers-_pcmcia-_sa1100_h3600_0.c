static int
h3600_pcmcia_configure_socket(struct soc_pcmcia_socket *skt, const socket_state_t *state)
{
if (state->Vcc != 0 && state->Vcc != 33 && state->Vcc != 50) {
printk(KERN_ERR "h3600_pcmcia: unrecognized Vcc %u.%uV\n",
state->Vcc / 10, state->Vcc % 10);
return -1;
}

gpio_set_value(H3XXX_EGPIO_CARD_RESET, !!(state->flags & SS_RESET));



return 0;
}