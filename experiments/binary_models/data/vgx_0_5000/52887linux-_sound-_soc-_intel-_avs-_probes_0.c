static int avs_dsp_init_probe(struct avs_dev *adev, union avs_connector_node_id node_id,
size_t buffer_size)
{
struct avs_probe_cfg cfg = {{0}};
struct avs_module_entry mentry;
u16 dummy;

avs_get_module_entry(adev, &AVS_PROBE_MOD_UUID, &mentry);


cfg.base.ibs = 1;

cfg.base.is_pages = mentry.segments[2].flags.length;
cfg.gtw_cfg.node_id = node_id;
cfg.gtw_cfg.dma_buffer_size = buffer_size;

return avs_dsp_init_module(adev, mentry.module_id, INVALID_PIPELINE_ID, 0, 0, &cfg,
sizeof(cfg), &dummy);
}