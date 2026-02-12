int max98090_set_sysclk(struct maxim_priv *priv, unsigned int freq)
{
int error = 0;


if (freq == priv->sysclk)
return 0;


if (freq >= 10000000 && freq < 20000000) {
error = maxim_i2c_write(priv, M98090_REG_SYSTEM_CLOCK,
M98090_PSCLK_DIV1);
} else if (freq >= 20000000 && freq < 40000000) {
error = maxim_i2c_write(priv, M98090_REG_SYSTEM_CLOCK,
M98090_PSCLK_DIV2);
} else if (freq >= 40000000 && freq < 60000000) {
error = maxim_i2c_write(priv, M98090_REG_SYSTEM_CLOCK,
M98090_PSCLK_DIV4);
} else {
debug("%s: Invalid master clock frequency\n", __func__);
return -1;
}

debug("%s: Clock at %uHz\n", __func__, freq);

if (error < 0)
return -1;

priv->sysclk = freq;

return 0;
}