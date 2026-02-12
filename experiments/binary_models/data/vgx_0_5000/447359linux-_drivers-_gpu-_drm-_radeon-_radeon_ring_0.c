void radeon_ring_free_size(struct radeon_device *rdev, struct radeon_ring *ring)
{
uint32_t rptr = radeon_ring_get_rptr(rdev, ring);


ring->ring_free_dw = rptr + (ring->ring_size / 4);
ring->ring_free_dw -= ring->wptr;
ring->ring_free_dw &= ring->ptr_mask;
if (!ring->ring_free_dw) {

ring->ring_free_dw = ring->ring_size / 4;

radeon_ring_lockup_update(rdev, ring);
}
}