int snd_soc_tplg_component_load(struct snd_soc_component *comp,
struct snd_soc_tplg_ops *ops, const struct firmware *fw)
{
struct soc_tplg tplg;
int ret;


if (!comp || !comp->card || !comp->card->dev || !fw)
return -EINVAL;


memset(&tplg, 0, sizeof(tplg));
tplg.fw = fw;
tplg.dev = comp->card->dev;
tplg.comp = comp;
if (ops) {
tplg.ops = ops;
tplg.io_ops = ops->io_ops;
tplg.io_ops_count = ops->io_ops_count;
tplg.bytes_ext_ops = ops->bytes_ext_ops;
tplg.bytes_ext_ops_count = ops->bytes_ext_ops_count;
}

ret = soc_tplg_load(&tplg);

if (ret)
snd_soc_tplg_component_remove(comp);

return ret;
}