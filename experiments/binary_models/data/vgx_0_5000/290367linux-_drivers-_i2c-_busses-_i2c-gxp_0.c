static int gxp_i2c_master_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs, int num)
{
int ret;
struct gxp_i2c_drvdata *drvdata = i2c_get_adapdata(adapter);
unsigned long time_left;

drvdata->msgs_remaining = num;
drvdata->curr_msg = msgs;
drvdata->msgs_num = num;
reinit_completion(&drvdata->completion);

gxp_i2c_start(drvdata);

time_left = wait_for_completion_timeout(&drvdata->completion,
adapter->timeout);
ret = num - drvdata->msgs_remaining;
if (time_left == 0) {
switch (drvdata->state) {
case GXP_I2C_WDATA_PHASE:
break;
case GXP_I2C_RDATA_PHASE:
break;
case GXP_I2C_ADDR_PHASE:
break;
default:
break;
}
return -ETIMEDOUT;
}

if (drvdata->state == GXP_I2C_ADDR_NACK ||
drvdata->state == GXP_I2C_DATA_NACK)
return -EIO;

return ret;
}