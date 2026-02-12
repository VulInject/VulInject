static void synquacer_i2c_stop(struct synquacer_i2c *i2c, int ret)
{

writeb(0, i2c->base + SYNQUACER_I2C_REG_BCR);

i2c->state = STATE_IDLE;

i2c->msg_ptr = 0;
i2c->msg = NULL;
i2c->msg_idx++;
i2c->msg_num = 0;
if (ret)
i2c->msg_idx = ret;

complete(&i2c->completion);
}