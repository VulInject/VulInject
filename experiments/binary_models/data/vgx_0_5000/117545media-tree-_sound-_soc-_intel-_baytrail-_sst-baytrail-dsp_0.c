static int sst_byt_init(struct sst_dsp *sst, struct sst_pdata *pdata)
{
const struct sst_adsp_memregion *region;
struct device *dev;
int ret = -ENODEV, i, j, region_count;
u32 offset, size;

dev = sst->dev;

switch (sst->id) {
case SST_DEV_ID_BYT:
region = byt_region;
region_count = ARRAY_SIZE(byt_region);
sst->addr.iram_offset = SST_BYT_IRAM_OFFSET;
sst->addr.dram_offset = SST_BYT_DRAM_OFFSET;
sst->addr.shim_offset = SST_BYT_SHIM_OFFSET;
break;
default:
dev_err(dev, "failed to get mem resources\n");
return ret;
}

ret = sst_byt_resource_map(sst, pdata);
if (ret < 0) {
dev_err(dev, "failed to map resources\n");
return ret;
}

ret = dma_coerce_mask_and_coherent(sst->dma_dev, DMA_BIT_MASK(32));
if (ret)
return ret;


sst_dsp_shim_update_bits64(sst, SST_IMRX, 0x3, 0x0);
sst_dsp_shim_update_bits64(sst, SST_IMRD, 0x3, 0x0);


for (i = 0; i < region_count; i++) {
offset = region[i].start;
size = (region[i].end - region[i].start) / region[i].blocks;


for (j = 0; j < region[i].blocks; j++) {
sst_mem_block_register(sst, offset, size,
region[i].type, NULL, j, sst);
offset += size;
}
}

return 0;
}