static void mdp5_plane_cleanup_fb(struct drm_plane *plane,
struct drm_plane_state *old_state)
{
struct mdp5_kms *mdp5_kms = get_kms(plane);
struct msm_kms *kms = &mdp5_kms->base.base;
struct drm_framebuffer *fb = old_state->fb;
bool needed_dirtyfb = to_mdp5_plane_state(old_state)->needs_dirtyfb;

if (!fb)
return;

DBG("%s: cleanup: FB[%u]", plane->name, fb->base.id);
msm_framebuffer_cleanup(fb, kms->aspace, needed_dirtyfb);
}