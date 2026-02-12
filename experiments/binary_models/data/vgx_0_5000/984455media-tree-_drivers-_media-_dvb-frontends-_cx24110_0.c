static int cx24110_set_frontend(struct dvb_frontend *fe)
{
struct cx24110_state *state = fe->demodulator_priv;
struct dtv_frontend_properties *p = &fe->dtv_property_cache;

if (fe->ops.tuner_ops.set_params) {
fe->ops.tuner_ops.set_params(fe);
if (fe->ops.i2c_gate_ctrl) fe->ops.i2c_gate_ctrl(fe, 0);
}

cx24110_set_inversion(state, p->inversion);
cx24110_set_fec(state, p->fec_inner);
cx24110_set_symbolrate(state, p->symbol_rate);
cx24110_writereg(state,0x04,0x05); 

return 0;
}