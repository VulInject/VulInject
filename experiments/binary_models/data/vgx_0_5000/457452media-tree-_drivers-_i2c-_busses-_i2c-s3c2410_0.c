static int s3c24xx_i2c_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
{
struct s3c24xx_i2c *i2c = (struct s3c24xx_i2c *)adap->algo_data;
int retry;
int ret;

ret = clk_enable(i2c->clk);
if (ret)
return ret;

for (retry = 0; retry < adap->retries; retry++) {

ret = s3c24xx_i2c_doxfer(i2c, msgs, num);

if (ret != -EAGAIN) {
clk_disable(i2c->clk);
return ret;
}

dev_dbg(i2c->dev, "Retrying transmission (%d)\n", retry);

udelay(100);
}

clk_disable(i2c->clk);
return -EREMOTEIO;
}