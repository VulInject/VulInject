static int sti_uniperiph_dai_suspend(struct snd_soc_dai *dai)
{
struct sti_uniperiph_data *priv = snd_soc_dai_get_drvdata(dai);
struct uniperif *uni = priv->dai_data.uni;
int ret;


if (uni->state != UNIPERIF_STATE_STOPPED) {
dev_err(uni->dev, "%s: invalid uni state( %d)\n",
__func__, (int)uni->state);
return -EBUSY;
}


ret = pinctrl_pm_select_sleep_state(uni->dev);
if (ret)
dev_err(uni->dev, "%s: failed to select pinctrl state\n",
__func__);

return ret;
}