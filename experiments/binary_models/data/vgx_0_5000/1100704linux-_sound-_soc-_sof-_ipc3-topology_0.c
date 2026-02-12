static int sof_link_acp_sp_load(struct snd_soc_component *scomp, struct snd_sof_dai_link *slink,
struct sof_ipc_dai_config *config, struct snd_sof_dai *dai)
{
struct snd_soc_tplg_hw_config *hw_config = slink->hw_configs;
struct sof_dai_private_data *private = dai->private;
u32 size = sizeof(*config);
int ret;


sof_dai_set_format(hw_config, config);


memset(&config->acpsp, 0, sizeof(config->acpsp));
config->hdr.size = size;

ret = sof_update_ipc_object(scomp, &config->acpsp, SOF_ACPI2S_TOKENS, slink->tuples,
slink->num_tuples, size, slink->num_hw_configs);
if (ret < 0)
return ret;


dev_info(scomp->dev, "ACP_SP config ACP%d channel %d rate %d tdm_mode %d\n",
config->dai_index, config->acpsp.tdm_slots,
config->acpsp.fsync_rate, config->acpsp.tdm_mode);

dai->number_configs = 1;
dai->current_config = 0;
private->dai_config = kmemdup(config, size, GFP_KERNEL);
if (!private->dai_config)
return -ENOMEM;

return 0;
}