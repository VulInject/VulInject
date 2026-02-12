static int sof_ipc3_widget_kcontrol_setup(struct snd_sof_dev *sdev,
struct snd_sof_widget *swidget)
{
struct snd_sof_control *scontrol;
int ret;


list_for_each_entry(scontrol, &sdev->kcontrol_list, list)
if (scontrol->comp_id == swidget->comp_id) {

ret = sof_ipc3_set_get_kcontrol_data(scontrol, true, false);
if (ret < 0) {
dev_err(sdev->dev,
"kcontrol %d set up failed for widget %s\n",
scontrol->comp_id, swidget->widget->name);
return ret;
}


if (swidget->dynamic_pipeline_widget)
continue;

ret = sof_ipc3_set_get_kcontrol_data(scontrol, false, false);
if (ret < 0)
dev_warn(sdev->dev,
"kcontrol %d read failed for widget %s\n",
scontrol->comp_id, swidget->widget->name);
}

return 0;
}