static int apple_dart_hw_reset(struct apple_dart *dart)
{
u32 config;
struct apple_dart_stream_map stream_map;
int i;

config = readl(dart->regs + dart->hw->lock);
if (config & dart->hw->lock_bit) {
dev_err(dart->dev, "DART is locked down until reboot: %08x\n",
config);
return -EINVAL;
}

stream_map.dart = dart;
bitmap_zero(stream_map.sidmap, DART_MAX_STREAMS);
bitmap_set(stream_map.sidmap, 0, dart->num_streams);
apple_dart_hw_disable_dma(&stream_map);
apple_dart_hw_clear_all_ttbrs(&stream_map);


for (i = 0; i < BITS_TO_U32(dart->num_streams); i++)
writel(U32_MAX, dart->regs + dart->hw->enable_streams + 4 * i);


writel(readl(dart->regs + dart->hw->error), dart->regs + dart->hw->error);

if (dart->hw->type == DART_T8110)
writel(0,  dart->regs + DART_T8110_ERROR_MASK);

return dart->hw->invalidate_tlb(&stream_map);
}