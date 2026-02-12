static int mtk_afe_adc_hires_connect(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
{
struct snd_soc_dapm_widget *w = source;
struct snd_soc_component *cmpnt = snd_soc_dapm_to_component(w->dapm);
struct mtk_base_afe *afe = snd_soc_component_get_drvdata(cmpnt);
struct mt8188_afe_private *afe_priv = afe->platform_priv;
struct mtk_dai_adda_priv *adda_priv;

adda_priv = afe_priv->dai_priv[MT8188_AFE_IO_ADDA];

if (!adda_priv) {
dev_err(afe->dev, "%s adda_priv == NULL", __func__);
return 0;
}

return !!(adda_priv->ul_rate > ADDA_HIRES_THRES);
}