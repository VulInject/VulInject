static void dce_v11_0_afmt_enable(struct drm_encoder *encoder, bool enable)
{
struct drm_device *dev = encoder->dev;
struct amdgpu_device *adev = dev->dev_private;
struct amdgpu_encoder *amdgpu_encoder = to_amdgpu_encoder(encoder);
struct amdgpu_encoder_atom_dig *dig = amdgpu_encoder->enc_priv;

if (!dig || !dig->afmt)
return;


if (enable && dig->afmt->enabled)
return;
if (!enable && !dig->afmt->enabled)
return;

if (!enable && dig->afmt->pin) {
dce_v11_0_audio_enable(adev, dig->afmt->pin, false);
dig->afmt->pin = NULL;
}

dig->afmt->enabled = enable;

DRM_DEBUG("%sabling AFMT interface @ 0x%04X for encoder 0x%x\n",
enable ? "En" : "Dis", dig->afmt->offset, amdgpu_encoder->encoder_id);
}