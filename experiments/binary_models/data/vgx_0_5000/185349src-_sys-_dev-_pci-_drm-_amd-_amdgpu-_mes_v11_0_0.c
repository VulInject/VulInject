static int mes_v11_0_kiq_ring_init(struct amdgpu_device *adev)
{
struct amdgpu_ring *ring;

mtx_init(&adev->gfx.kiq.ring_lock, IPL_TTY);

ring = &adev->gfx.kiq.ring;

ring->me = 3;
ring->pipe = 1;
ring->queue = 0;

ring->adev = NULL;
ring->ring_obj = NULL;
ring->use_doorbell = true;
ring->doorbell_index = adev->doorbell_index.mes_ring1 << 1;
ring->eop_gpu_addr = adev->mes.eop_gpu_addr[AMDGPU_MES_KIQ_PIPE];
ring->no_scheduler = true;
snprintf(ring->name, sizeof(ring->name), "mes_kiq_%d.%d.%d",
ring->me, ring->pipe, ring->queue);

return amdgpu_ring_init(adev, ring, 1024, NULL, 0,
AMDGPU_RING_PRIO_DEFAULT, NULL);
}