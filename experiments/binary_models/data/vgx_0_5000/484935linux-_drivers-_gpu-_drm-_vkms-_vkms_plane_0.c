static void vkms_plane_reset(struct drm_plane *plane)
{
struct vkms_plane_state *vkms_state;

if (plane->state) {
vkms_plane_destroy_state(plane, plane->state);
plane->state = NULL; 
}

vkms_state = kzalloc(sizeof(*vkms_state), GFP_KERNEL);
if (!vkms_state) {
DRM_ERROR("Cannot allocate vkms_plane_state\n");
return;
}

__drm_gem_reset_shadow_plane(plane, &vkms_state->base);
}