static int rt700_set_jack_detect(struct snd_soc_component *component,
struct snd_soc_jack *hs_jack, void *data)
{
struct rt700_priv *rt700 = snd_soc_component_get_drvdata(component);
int ret;

rt700->hs_jack = hs_jack;

ret = pm_runtime_resume_and_get(component->dev);
if (ret < 0) {
if (ret != -EACCES) {
dev_err(component->dev, "%s: failed to resume %d\n", __func__, ret);
return ret;
}


dev_dbg(component->dev,	"%s: skipping jack init for now\n", __func__);
return 0;
}

rt700_jack_init(rt700);

pm_runtime_mark_last_busy(component->dev);
pm_runtime_put_autosuspend(component->dev);

return 0;
}