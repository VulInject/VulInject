static void
amdgpu_atombios_encoder_setup_dac(struct drm_encoder *encoder, int action)
{
struct drm_device *dev = encoder->dev;
struct amdgpu_device *adev = drm_to_adev(dev);
struct amdgpu_encoder *amdgpu_encoder = to_amdgpu_encoder(encoder);
DAC_ENCODER_CONTROL_PS_ALLOCATION args;
int index = 0;

memset(&args, 0, sizeof(args));

switch (amdgpu_encoder->encoder_id) {
case ENCODER_OBJECT_ID_INTERNAL_DAC1:
case ENCODER_OBJECT_ID_INTERNAL_KLDSCP_DAC1:
index = GetIndexIntoMasterTable(COMMAND, DAC1EncoderControl);
break;
case ENCODER_OBJECT_ID_INTERNAL_DAC2:
case ENCODER_OBJECT_ID_INTERNAL_KLDSCP_DAC2:
index = GetIndexIntoMasterTable(COMMAND, DAC2EncoderControl);
break;
}

args.ucAction = action;
args.ucDacStandard = ATOM_DAC1_PS2;
args.usPixelClock = cpu_to_le16(amdgpu_encoder->pixel_clock / 10);

amdgpu_atom_execute_table(adev->mode_info.atom_context, index, (uint32_t *)&args);

}