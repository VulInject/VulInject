static int try_address(struct i2c_adapter *i2c_adap,
unsigned char addr, int retries)
{
struct i2c_algo_bit_data *adap = i2c_adap->algo_data;
int i, ret = 0;

for (i = 0; i <= retries; i++) {
ret = i2c_outb(i2c_adap, addr);
if (ret == 1 || i == retries)
break;
bit_dbg(3, &i2c_adap->dev, "emitting stop condition\n");
i2c_stop(adap);
udelay(adap->udelay);
yield();
bit_dbg(3, &i2c_adap->dev, "emitting start condition\n");
i2c_start(adap);
}
if (i && ret)
bit_dbg(1, &i2c_adap->dev, "Used %d tries to %s client at "
"0x%02x: %s\n", i + 1,
addr & 1 ? "read from" : "write to", addr >> 1,
ret == 1 ? "success" : "failed, timeout?");
return ret;
}