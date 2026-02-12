static int dib0070_write_reg(struct dib0070_state *state, u8 reg, u16 val)
{
int ret;

if (mutex_lock_interruptible(&state->i2c_buffer_lock) < 0) {
dprintk("could not acquire lock\n");
return -EINVAL;
}
state->i2c_write_buffer[0] = reg;
state->i2c_write_buffer[1] = val >> 8;
state->i2c_write_buffer[2] = val & 0xff;

memset(state->msg, 0, sizeof(struct i2c_msg));
state->msg[0].addr = state->cfg->i2c_address;
state->msg[0].flags = 0;
state->msg[0].buf = state->i2c_write_buffer;
state->msg[0].len = 3;

if (i2c_transfer(state->i2c, state->msg, 1) != 1) {
pr_warn("DiB0070 I2C write failed\n");
ret = -EREMOTEIO;
} else
ret = 0;

mutex_unlock(&state->i2c_buffer_lock);
return ret;
}

state->cfg->sleep(state->fe, 0); \
if (state->cfg->reset) { \
state->cfg->reset(state->fe,1); msleep(10); \
state->cfg->reset(state->fe,0); msleep(10); \
} \
} while (0)