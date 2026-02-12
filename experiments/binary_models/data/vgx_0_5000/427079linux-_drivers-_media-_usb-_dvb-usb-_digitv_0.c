static int digitv_frontend_attach(struct dvb_usb_adapter *adap)
{
struct digitv_state *st = adap->dev->priv;

adap->fe_adap[0].fe = dvb_attach(mt352_attach, &digitv_mt352_config,
&adap->dev->i2c_adap);
if ((adap->fe_adap[0].fe) != NULL) {
st->is_nxt6000 = 0;
return 0;
}
adap->fe_adap[0].fe = dvb_attach(nxt6000_attach,
&digitv_nxt6000_config,
&adap->dev->i2c_adap);
if ((adap->fe_adap[0].fe) != NULL) {
st->is_nxt6000 = 1;
return 0;
}
return -EIO;
}