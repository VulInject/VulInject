static int qm1d1c0042_wakeup(struct qm1d1c0042_state *state)
{
int ret;

state->regs[0x01] |= 1 << 3;             
state->regs[0x01] &= (~(1 << 0)) & 0xff; 
state->regs[0x05] &= (~(1 << 3)) & 0xff; 
ret = reg_write(state, 0x01, state->regs[0x01]);
if (ret == 0)
ret = reg_write(state, 0x05, state->regs[0x05]);

if (ret < 0)
dev_warn(&state->i2c->dev, "(%s) failed. [adap%d-fe%d]\n",
__func__, state->cfg.fe->dvb->num, state->cfg.fe->id);
return ret;
}