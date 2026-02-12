static int friio_tuner_attach(struct dvb_usb_adapter *adap)
{
const struct i2c_board_info *info;
struct dvb_pll_config cfg;
struct i2c_client *cl;
struct gl861 *priv;

priv = adap_to_priv(adap);
info = &friio_config.tuner_info;
cfg = friio_config.tuner_cfg;
cfg.fe = adap->fe[0];

cl = dvb_module_probe("dvb_pll", info->type,
priv->demod_sub_i2c, info->addr, &cfg);
if (!cl)
return -ENODEV;
priv->i2c_client_tuner = cl;
return 0;
}