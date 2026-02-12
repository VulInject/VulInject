static int cs4271_soc_suspend(struct snd_soc_codec *codec)
{
int ret;
struct cs4271_private *cs4271 = snd_soc_codec_get_drvdata(codec);


ret = regmap_update_bits(cs4271->regmap, CS4271_MODE2,
CS4271_MODE2_PDN, CS4271_MODE2_PDN);
if (ret < 0)
return ret;

regcache_mark_dirty(cs4271->regmap);
regulator_bulk_disable(ARRAY_SIZE(cs4271->supplies), cs4271->supplies);

return 0;
}