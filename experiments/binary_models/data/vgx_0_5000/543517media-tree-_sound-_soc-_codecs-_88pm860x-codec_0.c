int pm860x_hs_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack,
int det, int hook, int hs_shrt, int lo_shrt)
{
struct pm860x_priv *pm860x = snd_soc_codec_get_drvdata(codec);
int data;

pm860x->det.hp_jack = jack;
pm860x->det.hp_det = det;
pm860x->det.hook_det = hook;
pm860x->det.hs_shrt = hs_shrt;
pm860x->det.lo_shrt = lo_shrt;

if (det & SND_JACK_HEADPHONE)
pm860x_set_bits(pm860x->i2c, REG_HS_DET,
EN_HS_DET, EN_HS_DET);

if (hs_shrt) {
data = CLR_SHORT_HS2 | CLR_SHORT_HS1;
pm860x_set_bits(pm860x->i2c, REG_SHORTS, data, data);
}

if (lo_shrt) {
data = CLR_SHORT_LO2 | CLR_SHORT_LO1;
pm860x_set_bits(pm860x->i2c, REG_SHORTS, data, data);
}


pm860x_codec_handler(0, pm860x);
return 0;
}