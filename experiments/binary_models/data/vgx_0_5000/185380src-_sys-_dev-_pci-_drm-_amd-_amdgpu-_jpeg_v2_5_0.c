static int jpeg_v2_5_process_interrupt(struct amdgpu_device *adev,
struct amdgpu_irq_src *source,
struct amdgpu_iv_entry *entry)
{
uint32_t ip_instance;

switch (entry->client_id) {
case SOC15_IH_CLIENTID_VCN:
ip_instance = 0;
break;
case SOC15_IH_CLIENTID_VCN1:
ip_instance = 1;
break;
default:
DRM_ERROR("Unhandled client id: %d\n", entry->client_id);
return 0;
}

DRM_DEBUG("IH: JPEG TRAP\n");

switch (entry->src_id) {
case VCN_2_0__SRCID__JPEG_DECODE:
amdgpu_fence_process(&adev->jpeg.inst[ip_instance].ring_dec);
break;
case VCN_2_6__SRCID_DJPEG0_POISON:
case VCN_2_6__SRCID_EJPEG0_POISON:
amdgpu_jpeg_process_poison_irq(adev, source, entry);
break;
default:
DRM_ERROR("Unhandled interrupt: %d %d\n",
entry->src_id, entry->src_data[0]);
break;
}

return 0;
}