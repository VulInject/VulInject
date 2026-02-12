void ssi_ivgen_fini(struct ssi_drvdata *drvdata)
{
struct ssi_ivgen_ctx *ivgen_ctx = drvdata->ivgen_handle;
struct device *device = &(drvdata->plat_dev->dev);

if (ivgen_ctx == NULL)
return;

if (ivgen_ctx->pool_meta != NULL) {
memset(ivgen_ctx->pool_meta, 0, SSI_IVPOOL_META_SIZE);
SSI_RESTORE_DMA_ADDR_TO_48BIT(ivgen_ctx->pool_meta_dma);
dma_free_coherent(device, SSI_IVPOOL_META_SIZE,
ivgen_ctx->pool_meta, ivgen_ctx->pool_meta_dma);
}

ivgen_ctx->pool = NULL_SRAM_ADDR;


kfree(ivgen_ctx);
}