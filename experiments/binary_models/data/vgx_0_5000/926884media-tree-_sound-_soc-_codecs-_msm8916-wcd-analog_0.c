static int pm8916_wcd_analog_probe(struct snd_soc_codec *codec)
{
struct pm8916_wcd_analog_priv *priv = dev_get_drvdata(codec->dev);
int err, reg;

err = regulator_bulk_enable(ARRAY_SIZE(priv->supplies), priv->supplies);
if (err != 0) {
dev_err(codec->dev, "failed to enable regulators (%d)\n", err);
return err;
}

snd_soc_codec_set_drvdata(codec, priv);
priv->pmic_rev = snd_soc_read(codec, CDC_D_REVISION1);
priv->codec_version = snd_soc_read(codec, CDC_D_PERPH_SUBTYPE);

dev_info(codec->dev, "PMIC REV: %d\t CODEC Version: %d\n",
priv->pmic_rev, priv->codec_version);

snd_soc_write(codec, CDC_D_PERPH_RESET_CTL4, 0x01);
snd_soc_write(codec, CDC_A_PERPH_RESET_CTL4, 0x01);

for (reg = 0; reg < ARRAY_SIZE(wcd_reg_defaults_2_0); reg++)
snd_soc_write(codec, wcd_reg_defaults_2_0[reg].reg,
wcd_reg_defaults_2_0[reg].def);

return 0;
}