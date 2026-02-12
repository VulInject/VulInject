static int aldebaran_mode1_reset(struct smu_context *smu)
{
u32 smu_version, fatal_err, param;
int ret = 0;
struct amdgpu_device *adev = smu->adev;
struct amdgpu_ras *ras = amdgpu_ras_get_context(adev);

fatal_err = 0;
param = SMU_RESET_MODE_1;


smu_cmn_get_smc_version(smu, NULL, &smu_version);
if (smu_version < 0x00440700) {
ret = smu_cmn_send_smc_msg(smu, SMU_MSG_Mode1Reset, NULL);
}
else {

if ((smu_version >= 0x00442c00) && ras &&
atomic_read(&ras->in_recovery))
fatal_err = 1;

param |= (fatal_err << 16);
ret = smu_cmn_send_smc_msg_with_param(smu,
SMU_MSG_GfxDeviceDriverReset, param, NULL);
}

if (!ret)
msleep(SMU13_MODE1_RESET_WAIT_TIME_IN_MS);

return ret;
}