static int _omapfb_set_color_key(struct omap_overlay_manager *mgr,
struct omapfb_color_key *ck)
{
struct omap_overlay_manager_info info;
enum omap_dss_trans_key_type kt;
int r;

mgr->get_manager_info(mgr, &info);

if (ck->key_type == OMAPFB_COLOR_KEY_DISABLED) {
info.trans_enabled = false;
omapfb_color_keys[mgr->id] = *ck;

r = mgr->set_manager_info(mgr, &info);
if (r)
return r;

r = mgr->apply(mgr);

return r;
}

switch (ck->key_type) {
case OMAPFB_COLOR_KEY_GFX_DST:
kt = OMAP_DSS_COLOR_KEY_GFX_DST;
break;
case OMAPFB_COLOR_KEY_VID_SRC:
kt = OMAP_DSS_COLOR_KEY_VID_SRC;
break;
default:
return -EINVAL;
}

info.default_color = ck->background;
info.trans_key = ck->trans_key;
info.trans_key_type = kt;
info.trans_enabled = true;

omapfb_color_keys[mgr->id] = *ck;

r = mgr->set_manager_info(mgr, &info);
if (r)
return r;

r = mgr->apply(mgr);

return r;
}