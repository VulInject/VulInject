static int snd_sof_get_hw_config_params(struct snd_sof_dev *sdev, struct snd_sof_dai *dai,
int *sample_rate, int *channel_count, int *bit_depth)
{
struct snd_soc_tplg_hw_config *hw_config;
struct snd_sof_dai_link *slink;
bool dai_link_found = false;
bool hw_cfg_found = false;
int i;


list_for_each_entry(slink, &sdev->dai_link_list, list) {
if (!strcmp(slink->link->name, dai->name)) {
dai_link_found = true;
break;
}
}

if (!dai_link_found) {
dev_err(sdev->dev, "%s: no DAI link found for DAI %s\n", __func__, dai->name);
return -EINVAL;
}

for (i = 0; i < slink->num_hw_configs; i++) {
hw_config = &slink->hw_configs[i];
if (dai->current_config == le32_to_cpu(hw_config->id)) {
hw_cfg_found = true;
break;
}
}

if (!hw_cfg_found) {
dev_err(sdev->dev, "%s: no matching hw_config found for DAI %s\n", __func__,
dai->name);
return -EINVAL;
}

*bit_depth = le32_to_cpu(hw_config->tdm_slot_width);
*channel_count = le32_to_cpu(hw_config->tdm_slots);
*sample_rate = le32_to_cpu(hw_config->fsync_rate);

dev_dbg(sdev->dev, "sample rate: %d sample width: %d channels: %d\n",
*sample_rate, *bit_depth, *channel_count);

return 0;
}