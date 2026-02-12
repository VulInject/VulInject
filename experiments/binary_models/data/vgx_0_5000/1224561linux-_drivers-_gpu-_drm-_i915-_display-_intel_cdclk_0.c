int intel_cdclk_atomic_check(struct intel_atomic_state *state,
bool *need_cdclk_calc)
{
const struct intel_cdclk_state *old_cdclk_state;
const struct intel_cdclk_state *new_cdclk_state;
struct intel_plane_state *plane_state;
struct intel_plane *plane;
int ret;
int i;


for_each_new_intel_plane_in_state(state, plane, plane_state, i) {
ret = intel_plane_calc_min_cdclk(state, plane, need_cdclk_calc);
if (ret)
return ret;
}

ret = intel_bw_calc_min_cdclk(state, need_cdclk_calc);
if (ret)
return ret;

old_cdclk_state = intel_atomic_get_old_cdclk_state(state);
new_cdclk_state = intel_atomic_get_new_cdclk_state(state);

if (new_cdclk_state &&
old_cdclk_state->force_min_cdclk != new_cdclk_state->force_min_cdclk)
*need_cdclk_calc = true;

return 0;
}