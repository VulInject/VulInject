void rv6xx_dpm_debugfs_print_current_performance_level(struct radeon_device *rdev,
struct seq_file *m)
{
struct radeon_ps *rps = rdev->pm.dpm.current_ps;
struct rv6xx_ps *ps = rv6xx_get_ps(rps);
struct rv6xx_pl *pl;
u32 current_index =
(RREG32(TARGET_AND_CURRENT_PROFILE_INDEX) & CURRENT_PROFILE_INDEX_MASK) >>
CURRENT_PROFILE_INDEX_SHIFT;

if (current_index > 2) {
seq_printf(m, "invalid dpm profile %d\n", current_index);
} else {
if (current_index == 0)
pl = &ps->low;
else if (current_index == 1)
pl = &ps->medium;
else 
pl = &ps->high;
seq_printf(m, "uvd    vclk: %d dclk: %d\n", rps->vclk, rps->dclk);
seq_printf(m, "power level %d    sclk: %u mclk: %u vddc: %u\n",
current_index, pl->sclk, pl->mclk, pl->vddc);
}
}