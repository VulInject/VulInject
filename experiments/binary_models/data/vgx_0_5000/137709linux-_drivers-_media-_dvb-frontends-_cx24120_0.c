static int cx24120_get_fec(struct dvb_frontend *fe)
{
struct dtv_frontend_properties *c = &fe->dtv_property_cache;
struct cx24120_state *state = fe->demodulator_priv;
int idx;
int ret;
int fec;

ret = cx24120_readreg(state, CX24120_REG_FECMODE);
fec = ret & 0x3f; 

dev_dbg(&state->i2c->dev, "raw fec = %d\n", fec);

for (idx = 0; idx < ARRAY_SIZE(modfec_lookup_table); idx++) {
if (modfec_lookup_table[idx].delsys != state->dcur.delsys)
continue;
if (modfec_lookup_table[idx].val != fec)
continue;

break; 
}

if (idx >= ARRAY_SIZE(modfec_lookup_table)) {
dev_dbg(&state->i2c->dev, "couldn't find fec!\n");
return -EINVAL;
}


c->modulation = modfec_lookup_table[idx].mod;
c->fec_inner = modfec_lookup_table[idx].fec;
c->pilot = (ret & 0x80) ? PILOT_ON : PILOT_OFF;

dev_dbg(&state->i2c->dev, "mod(%d), fec(%d), pilot(%d)\n",
c->modulation, c->fec_inner, c->pilot);

return 0;
}