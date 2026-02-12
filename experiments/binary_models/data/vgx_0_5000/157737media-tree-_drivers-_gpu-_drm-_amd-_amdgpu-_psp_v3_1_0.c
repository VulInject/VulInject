int psp_v3_1_ring_init(struct psp_context *psp, enum psp_ring_type ring_type)
{
int ret = 0;
struct psp_ring *ring;
struct amdgpu_device *adev = psp->adev;

ring = &psp->km_ring;

ring->ring_type = ring_type;


ring->ring_size = 0x1000;
ret = amdgpu_bo_create_kernel(adev, ring->ring_size, PAGE_SIZE,
AMDGPU_GEM_DOMAIN_VRAM,
&adev->firmware.rbuf,
&ring->ring_mem_mc_addr,
(void **)&ring->ring_mem);
if (ret) {
ring->ring_size = 0;
return ret;
}

return 0;
}