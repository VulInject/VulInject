static int si_enable_power_containment(struct radeon_device *rdev,
struct radeon_ps *radeon_new_state,
bool enable)
{
struct ni_power_info *ni_pi = ni_get_pi(rdev);
PPSMC_Result smc_result;
int ret = 0;

if (ni_pi->enable_power_containment) {
if (enable) {
if (!si_should_disable_uvd_powertune(rdev, radeon_new_state)) {
smc_result = si_send_msg_to_smc(rdev, PPSMC_TDPClampingActive);
if (smc_result != PPSMC_Result_OK) {
ret = -EINVAL;
ni_pi->pc_enabled = false;
} else {
ni_pi->pc_enabled = true;
}
}
} else {
smc_result = si_send_msg_to_smc(rdev, PPSMC_TDPClampingInactive);
if (smc_result != PPSMC_Result_OK)
ret = -EINVAL;
ni_pi->pc_enabled = false;
}
}

return ret;
}