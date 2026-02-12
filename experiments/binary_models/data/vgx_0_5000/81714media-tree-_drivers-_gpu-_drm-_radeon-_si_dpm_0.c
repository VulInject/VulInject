static int si_populate_ulv_state(struct radeon_device *rdev,
SISLANDS_SMC_SWSTATE *state)
{
struct evergreen_power_info *eg_pi = evergreen_get_pi(rdev);
struct si_power_info *si_pi = si_get_pi(rdev);
struct si_ulv_param *ulv = &si_pi->ulv;
u32 sclk_in_sr = 1350; 
int ret;

ret = si_convert_power_level_to_smc(rdev, &ulv->pl,
&state->levels[0]);
if (!ret) {
if (eg_pi->sclk_deep_sleep) {
if (sclk_in_sr <= SCLK_MIN_DEEPSLEEP_FREQ)
state->levels[0].stateFlags |= PPSMC_STATEFLAG_DEEPSLEEP_BYPASS;
else
state->levels[0].stateFlags |= PPSMC_STATEFLAG_DEEPSLEEP_THROTTLE;
}
if (ulv->one_pcie_lane_in_ulv)
state->flags |= PPSMC_SWSTATE_FLAG_PCIE_X1;
state->levels[0].arbRefreshState = (u8)(SISLANDS_ULV_STATE_ARB_INDEX);
state->levels[0].ACIndex = 1;
state->levels[0].std_vddc = state->levels[0].vddc;
state->levelCount = 1;

state->flags |= PPSMC_SWSTATE_FLAG_DC;
}

return ret;
}