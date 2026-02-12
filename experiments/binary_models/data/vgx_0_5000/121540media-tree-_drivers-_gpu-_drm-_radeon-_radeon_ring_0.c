int radeon_ring_alloc(struct radeon_device *rdev, struct radeon_ring *ring, unsigned ndw)
{
int r;


if (ndw > (ring->ring_size / 4))
return -ENOMEM;

radeon_ring_free_size(rdev, ring);
ndw = (ndw + ring->align_mask) & ~ring->align_mask;
while (ndw > (ring->ring_free_dw - 1)) {
radeon_ring_free_size(rdev, ring);
if (ndw < ring->ring_free_dw) {
break;
}
r = radeon_fence_wait_next(rdev, ring->idx);
if (r)
return r;
}
ring->count_dw = ndw;
ring->wptr_old = ring->wptr;
return 0;
}