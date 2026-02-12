int omap_overlay_assign(struct drm_atomic_state *s, struct drm_plane *plane,
u32 caps, u32 fourcc, struct omap_hw_overlay **overlay,
struct omap_hw_overlay **r_overlay)
{

struct omap_global_state *state = omap_get_global_state(s);
struct drm_plane **overlay_map = state->hwoverlay_to_plane;
struct omap_hw_overlay *ovl, *r_ovl;

ovl = omap_plane_find_free_overlay(s->dev, overlay_map, caps, fourcc);
if (!ovl)
return -ENOMEM;

overlay_map[ovl->idx] = plane;
*overlay = ovl;

if (r_overlay) {
r_ovl = omap_plane_find_free_overlay(s->dev, overlay_map,
caps, fourcc);
if (!r_ovl) {
overlay_map[ovl->idx] = NULL;
*overlay = NULL;
return -ENOMEM;
}

overlay_map[r_ovl->idx] = plane;
*r_overlay = r_ovl;
}

DBG("%s: assign to plane %s caps %x", ovl->name, plane->name, caps);

if (r_overlay) {
DBG("%s: assign to right of plane %s caps %x",
r_ovl->name, plane->name, caps);
}

return 0;
}