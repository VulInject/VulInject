static enum pp_smu_status pp_nv_get_uclk_dpm_states(struct pp_smu *pp,
unsigned int *clock_values_in_khz, unsigned int *num_states)
{
const struct dc_context *ctx = pp->dm;
struct amdgpu_device *adev = ctx->driver_context;
int ret = 0;

ret = amdgpu_dpm_get_uclk_dpm_states(adev,
clock_values_in_khz,
num_states);
if (ret == -EOPNOTSUPP)
return PP_SMU_RESULT_UNSUPPORTED;
else if (ret)
return PP_SMU_RESULT_FAIL;

return PP_SMU_RESULT_OK;
}