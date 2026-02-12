static int demod_attach_stv0367(struct ngene_channel *chan,
struct i2c_adapter *i2c)
{
struct device *pdev = &chan->dev->pci_dev->dev;

chan->fe = dvb_attach(stv0367ddb_attach,
&ddb_stv0367_config[(chan->number & 1)], i2c);

if (!chan->fe) {
dev_err(pdev, "stv0367ddb_attach() failed!\n");
return -ENODEV;
}

chan->fe->sec_priv = chan;
chan->gate_ctrl = chan->fe->ops.i2c_gate_ctrl;
chan->fe->ops.i2c_gate_ctrl = drxk_gate_ctrl;
return 0;
}