static int tda9887_set_tvnorm(struct dvb_frontend *fe)
{
struct tda9887_priv *priv = fe->analog_demod_priv;
struct tvnorm *norm = NULL;
char *buf = priv->data;
int i;

if (priv->mode == V4L2_TUNER_RADIO) {
if (priv->audmode == V4L2_TUNER_MODE_MONO)
norm = &radio_mono;
else
norm = &radio_stereo;
} else {
for (i = 0; i < ARRAY_SIZE(tvnorms); i++) {
if (tvnorms[i].std & priv->std) {
norm = tvnorms+i;
break;
}
}
}
if (NULL == norm) {
tuner_dbg("Unsupported tvnorm entry - audio muted\n");
return -1;
}

tuner_dbg("configure for: %s\n", norm->name);
buf[1] = norm->b;
buf[2] = norm->c;
buf[3] = norm->e;
return 0;
}