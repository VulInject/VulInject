int hda_ctrl_dai_widget_free(struct snd_soc_dapm_widget *w, unsigned int quirk_flags,
struct snd_sof_dai_config_data *data)
{
struct snd_sof_widget *swidget = w->dobj.private;
struct snd_soc_component *component = swidget->scomp;
struct snd_sof_dev *sdev = snd_soc_component_get_drvdata(component);
const struct sof_ipc_tplg_ops *tplg_ops = sdev->ipc->ops->tplg;
struct snd_sof_dai *sof_dai = swidget->private;

if (!sof_dai) {
dev_err(sdev->dev, "%s: No DAI for BE DAI widget %s\n", __func__, w->name);
return -EINVAL;
}

if (tplg_ops->dai_config) {
unsigned int flags;
int ret;


flags = SOF_DAI_CONFIG_FLAGS_HW_FREE |
quirk_flags << SOF_DAI_CONFIG_FLAGS_QUIRK_SHIFT;

ret = tplg_ops->dai_config(sdev, swidget, flags, data);
if (ret < 0)
dev_err(sdev->dev, "%s: DAI config failed for widget '%s'\n", __func__,
w->name);
}

return 0;
}