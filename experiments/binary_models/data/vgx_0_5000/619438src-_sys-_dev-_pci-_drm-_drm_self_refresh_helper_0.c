void drm_self_refresh_helper_alter_state(struct drm_atomic_state *state)
{
struct drm_crtc *crtc;
struct drm_crtc_state *crtc_state;
int i;

if (state->async_update || !state->allow_modeset) {
for_each_old_crtc_in_state(state, crtc, crtc_state, i) {
if (crtc_state->self_refresh_active) {
state->async_update = false;
state->allow_modeset = true;
break;
}
}
}

for_each_new_crtc_in_state(state, crtc, crtc_state, i) {
struct drm_self_refresh_data *sr_data;
unsigned int delay;


if (crtc_state->self_refresh_active)
continue;

sr_data = crtc->self_refresh_data;
if (!sr_data)
continue;

mutex_lock(&sr_data->avg_mutex);
delay = (ewma_psr_time_read(&sr_data->entry_avg_ms) +
ewma_psr_time_read(&sr_data->exit_avg_ms)) * 2;
mutex_unlock(&sr_data->avg_mutex);

mod_delayed_work(system_wq, &sr_data->entry_work,
msecs_to_jiffies(delay));
}
}