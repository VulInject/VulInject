static int sof_ipc3_widget_setup_comp_mux(struct snd_sof_widget *swidget)
{
struct snd_soc_component *scomp = swidget->scomp;
struct sof_ipc_comp_mux *mux;
size_t ipc_size = sizeof(*mux);
int ret;

mux = sof_comp_alloc(swidget, &ipc_size, swidget->pipeline_id);
if (!mux)
return -ENOMEM;

swidget->private = mux;


mux->comp.type = SOF_COMP_MUX;
mux->config.hdr.size = sizeof(mux->config);


ret = sof_update_ipc_object(scomp, &mux->config, SOF_COMP_TOKENS,
swidget->tuples, swidget->num_tuples, sizeof(mux->config), 1);
if (ret < 0) {
kfree(swidget->private);
swidget->private = NULL;
return ret;
}

dev_dbg(scomp->dev, "loaded mux %s\n", swidget->widget->name);
sof_dbg_comp_config(scomp, &mux->config);

return 0;
}