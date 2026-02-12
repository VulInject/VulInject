static void snd_sof_refresh_control(struct snd_sof_control *scontrol)
{
struct sof_ipc_ctrl_data *cdata = scontrol->ipc_control_data;
struct snd_soc_component *scomp = scontrol->scomp;
int ret;

if (!scontrol->comp_data_dirty)
return;

if (!pm_runtime_active(scomp->dev))
return;


cdata->data->magic = SOF_ABI_MAGIC;
cdata->data->abi = SOF_ABI_VERSION;


scontrol->comp_data_dirty = false;
ret = sof_ipc3_set_get_kcontrol_data(scontrol, false, true);
if (ret < 0) {
dev_err(scomp->dev, "Failed to get control data: %d\n", ret);


scontrol->comp_data_dirty = true;
}
}