static int tda10021_get_frontend(struct dvb_frontend *fe,
struct dtv_frontend_properties *p)
{
struct tda10021_state* state = fe->demodulator_priv;
int sync;
s8 afc = 0;

sync = tda10021_readreg(state, 0x11);
afc = tda10021_readreg(state, 0x19);
if (verbose) {

printk(sync & 2 ? "DVB: TDA10021(%d): AFC (%d) %dHz\n" :
"DVB: TDA10021(%d): [AFC (%d) %dHz]\n",
state->frontend.dvb->num, afc,
-((s32)p->symbol_rate * afc) >> 10);
}

p->inversion = ((state->reg0 & 0x20) == 0x20) ^ (state->config->invert != 0) ? INVERSION_ON : INVERSION_OFF;
p->modulation = ((state->reg0 >> 2) & 7) + QAM_16;

p->fec_inner = FEC_NONE;
p->frequency = ((p->frequency + 31250) / 62500) * 62500;

if (sync & 2)
p->frequency -= ((s32)p->symbol_rate * afc) >> 10;

return 0;
}