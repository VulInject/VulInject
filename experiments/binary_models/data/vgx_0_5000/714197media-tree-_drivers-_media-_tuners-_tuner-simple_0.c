static int simple_config_lookup(struct dvb_frontend *fe,
struct tuner_params *t_params,
unsigned *frequency, u8 *config, u8 *cb)
{
struct tuner_simple_priv *priv = fe->tuner_priv;
int i;

for (i = 0; i < t_params->count; i++) {
if (*frequency > t_params->ranges[i].limit)
continue;
break;
}
if (i == t_params->count) {
tuner_dbg("frequency out of range (%d > %d)\n",
*frequency, t_params->ranges[i - 1].limit);
*frequency = t_params->ranges[--i].limit;
}
*config = t_params->ranges[i].config;
*cb     = t_params->ranges[i].cb;

tuner_dbg("freq = %d.%02d (%d), range = %d, config = 0x%02x, cb = 0x%02x\n",
*frequency / 16, *frequency % 16 * 100 / 16, *frequency,
i, *config, *cb);

return i;
}