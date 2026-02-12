static int mtk_afe_dac_hires_connect(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
{
struct snd_soc_dapm_widget *w = source;
struct snd_soc_component *cmpnt = snd_soc_dapm_to_component(w->dapm);
struct mtk_base_afe *afe = snd_soc_component_get_drvdata(cmpnt);
struct mtk_afe_adda_priv *adda_priv;

adda_priv = get_adda_priv_by_name(afe, w->name);

if (!adda_priv) {
dev_err(afe->dev, "%s(), adda_priv == NULL", __func__);
return 0;
}

return (adda_priv->dl_rate > HIRES_THRESHOLD) ? 1 : 0;
}