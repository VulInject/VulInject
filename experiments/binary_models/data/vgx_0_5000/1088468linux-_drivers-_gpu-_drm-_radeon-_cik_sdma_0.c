uint32_t cik_sdma_get_rptr(struct radeon_device *rdev,
struct radeon_ring *ring)
{
u32 rptr, reg;

if (rdev->wb.enabled) {
rptr = rdev->wb.wb[ring->rptr_offs/4];
} else {
if (ring->idx == R600_RING_TYPE_DMA_INDEX)
reg = SDMA0_GFX_RB_RPTR + SDMA0_REGISTER_OFFSET;
else
reg = SDMA0_GFX_RB_RPTR + SDMA1_REGISTER_OFFSET;

rptr = RREG32(reg);
}

return (rptr & 0x3fffc) >> 2;
}