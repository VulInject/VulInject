static bool
viona_ring_map(viona_vring_t *ring, bool defer_dirty)
{
const uint16_t qsz = ring->vr_size;
uintptr_t pa = ring->vr_pa;

ASSERT3U(qsz, !=, 0);
ASSERT3U(qsz, <=, VRING_MAX_LEN);
ASSERT3U(pa, !=, 0);
ASSERT3U(pa & (LEGACY_VQ_ALIGN - 1), ==, 0);
ASSERT3U(LEGACY_VQ_ALIGN, ==, PAGESIZE);
ASSERT(MUTEX_HELD(&ring->vr_lock));
ASSERT3P(ring->vr_map_pages, ==, NULL);

const uint_t npages = LEGACY_VQ_PAGES(qsz);
ring->vr_map_pages = kmem_zalloc(npages * sizeof (void *), KM_SLEEP);

int page_flags = 0;
if (defer_dirty) {

page_flags |= VMPF_DEFER_DIRTY;
}

vmm_page_t *prev = NULL;
for (uint_t i = 0; i < npages; i++, pa += PAGESIZE) {
vmm_page_t *vmp;

vmp = vmm_drv_page_hold_ext(ring->vr_lease, pa,
PROT_READ | PROT_WRITE, page_flags);
if (vmp == NULL) {
viona_ring_unmap(ring);
return (false);
}


if (prev == NULL) {
ring->vr_map_hold = vmp;
} else {
vmm_drv_page_chain(prev, vmp);
}
prev = vmp;
ring->vr_map_pages[i] = vmm_drv_page_writable(vmp);
}

return (true);
}