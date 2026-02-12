void radeon_ring_fini(struct radeon_device *rdev, struct radeon_ring *ring)
{
int r;
struct radeon_bo *ring_obj;

mutex_lock(&rdev->ring_lock);
ring_obj = ring->ring_obj;
ring->ready = false;
ring->ring = NULL;
ring->ring_obj = NULL;
mutex_unlock(&rdev->ring_lock);

if (ring_obj) {
r = radeon_bo_reserve(ring_obj, false);
if (likely(r == 0)) {
radeon_bo_kunmap(ring_obj);
radeon_bo_unpin(ring_obj);
radeon_bo_unreserve(ring_obj);
}
radeon_bo_unref(&ring_obj);
}
}