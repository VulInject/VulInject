static int vulkan_device_init(AVHWDeviceContext *ctx)
{
int err;
uint32_t queue_num;
AVVulkanDeviceContext *hwctx = ctx->hwctx;
VulkanDevicePriv *p = ctx->internal->priv;
FFVulkanFunctions *vk = &p->vkfn;
int graph_index, comp_index, tx_index, enc_index, dec_index;


for (int i = 0; i < hwctx->nb_enabled_dev_extensions; i++) {
for (int j = 0; j < FF_ARRAY_ELEMS(optional_device_exts); j++) {
if (!strcmp(hwctx->enabled_dev_extensions[i],
optional_device_exts[j].name)) {
p->extensions |= optional_device_exts[j].flag;
break;
}
}
}

err = ff_vk_load_functions(ctx, vk, p->extensions, 1, 1);
if (err < 0) {
av_log(ctx, AV_LOG_ERROR, "Unable to load functions!\n");
return err;
}

p->props.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
p->props.pNext = &p->hprops;
p->hprops.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;

vk->GetPhysicalDeviceProperties2(hwctx->phys_dev, &p->props);
av_log(ctx, AV_LOG_VERBOSE, "Using device: %s\n",
p->props.properties.deviceName);
av_log(ctx, AV_LOG_VERBOSE, "Alignments:\n");
av_log(ctx, AV_LOG_VERBOSE, "    optimalBufferCopyRowPitchAlignment: %"PRIu64"\n",
p->props.properties.limits.optimalBufferCopyRowPitchAlignment);
av_log(ctx, AV_LOG_VERBOSE, "    minMemoryMapAlignment:              %"SIZE_SPECIFIER"\n",
p->props.properties.limits.minMemoryMapAlignment);
if (p->extensions & FF_VK_EXT_EXTERNAL_HOST_MEMORY)
av_log(ctx, AV_LOG_VERBOSE, "    minImportedHostPointerAlignment:    %"PRIu64"\n",
p->hprops.minImportedHostPointerAlignment);

p->dev_is_nvidia = (p->props.properties.vendorID == 0x10de);
p->dev_is_intel  = (p->props.properties.vendorID == 0x8086);

vk->GetPhysicalDeviceQueueFamilyProperties(hwctx->phys_dev, &queue_num, NULL);
if (!queue_num) {
av_log(ctx, AV_LOG_ERROR, "Failed to get queues!\n");
return AVERROR_EXTERNAL;
}

graph_index = hwctx->queue_family_index;
comp_index  = hwctx->queue_family_comp_index;
tx_index    = hwctx->queue_family_tx_index;
enc_index   = hwctx->queue_family_encode_index;
dec_index   = hwctx->queue_family_decode_index;

do {                                                                                        \
if (ctx_qf < 0 && required) {                                                           \
av_log(ctx, AV_LOG_ERROR, "%s queue family is required, but marked as missing"      \
" in the context!\n", type);                                                 \
return AVERROR(EINVAL);                                                             \
} else if (fidx < 0 || ctx_qf < 0) {                                                    \
break;                                                                              \
} else if (ctx_qf >= queue_num) {                                                       \
av_log(ctx, AV_LOG_ERROR, "Invalid %s family index %i (device has %i families)!\n", \
type, ctx_qf, queue_num);                                                    \
return AVERROR(EINVAL);                                                             \
}                                                                                       \
\
av_log(ctx, AV_LOG_VERBOSE, "Using queue family %i (queues: %i)"                        \
" for%s%s%s%s%s\n",                                                              \
ctx_qf, qc,                                                                      \
ctx_qf == graph_index ? " graphics" : "",                                        \
ctx_qf == comp_index  ? " compute" : "",                                         \
ctx_qf == tx_index    ? " transfers" : "",                                       \
ctx_qf == enc_index   ? " encode" : "",                                          \
ctx_qf == dec_index   ? " decode" : "");                                         \
graph_index = (ctx_qf == graph_index) ? -1 : graph_index;                               \
comp_index  = (ctx_qf == comp_index)  ? -1 : comp_index;                                \
tx_index    = (ctx_qf == tx_index)    ? -1 : tx_index;                                  \
enc_index   = (ctx_qf == enc_index)   ? -1 : enc_index;                                 \
dec_index   = (ctx_qf == dec_index)   ? -1 : dec_index;                                 \
p->qfs[p->num_qfs++] = ctx_qf;                                                          \
} while (0)

CHECK_QUEUE("graphics", 0, graph_index, hwctx->queue_family_index,        hwctx->nb_graphics_queues);
CHECK_QUEUE("upload",   1, tx_index,    hwctx->queue_family_tx_index,     hwctx->nb_tx_queues);
CHECK_QUEUE("compute",  1, comp_index,  hwctx->queue_family_comp_index,   hwctx->nb_comp_queues);
CHECK_QUEUE("encode",   0, enc_index,   hwctx->queue_family_encode_index, hwctx->nb_encode_queues);
CHECK_QUEUE("decode",   0, dec_index,   hwctx->queue_family_decode_index, hwctx->nb_decode_queues);



vk->GetPhysicalDeviceMemoryProperties(hwctx->phys_dev, &p->mprops);

return 0;
}