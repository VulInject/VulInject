static int si2168_ts_bus_ctrl(struct dvb_frontend *fe, int acquire)
{
struct i2c_client *client = fe->demodulator_priv;
struct si2168_dev *dev = i2c_get_clientdata(client);
struct si2168_cmd cmd;
int ret = 0;

dev_dbg(&client->dev, "%s acquire: %d\n", __func__, acquire);


if (dev->ts_mode & SI2168_TS_CLK_MANUAL) {
cmd_init(&cmd, "\x14\x00\x0d\x10\xe8\x03", 6, 4);
ret = si2168_cmd_execute(client, &cmd);
if (ret)
return ret;
}

cmd_init(&cmd, "\x14\x00\x01\x10\x10\x00", 6, 4);
if (dev->ts_mode & SI2168_TS_CLK_MANUAL)
cmd.args[4] = SI2168_TS_CLK_MANUAL;
if (acquire)
cmd.args[4] |= dev->ts_mode;
else
cmd.args[4] |= SI2168_TS_TRISTATE;
if (dev->ts_clock_gapped)
cmd.args[4] |= 0x40;
ret = si2168_cmd_execute(client, &cmd);

return ret;
}