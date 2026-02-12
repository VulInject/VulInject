void hidma_ll_set_transfer_params(struct hidma_lldev *lldev, u32 tre_ch,
dma_addr_t src, dma_addr_t dest, u32 len,
u32 flags)
{
struct hidma_tre *tre;
u32 *tre_local;

if (tre_ch >= lldev->nr_tres) {
dev_err(lldev->dev, "invalid TRE number in transfer params:%d",
tre_ch);
return;
}

tre = &lldev->trepool[tre_ch];
if (atomic_read(&tre->allocated) != true) {
dev_err(lldev->dev, "trying to set params on an unused TRE:%d",
tre_ch);
return;
}

tre_local = &tre->tre_local[0];
tre_local[HIDMA_TRE_LEN_IDX] = len;
tre_local[HIDMA_TRE_SRC_LOW_IDX] = lower_32_bits(src);
tre_local[HIDMA_TRE_SRC_HI_IDX] = upper_32_bits(src);
tre_local[HIDMA_TRE_DEST_LOW_IDX] = lower_32_bits(dest);
tre_local[HIDMA_TRE_DEST_HI_IDX] = upper_32_bits(dest);
tre->int_flags = flags;
}