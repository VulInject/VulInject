int komeda_build_layer_data_flow(struct komeda_layer *layer,
struct komeda_plane_state *kplane_st,
struct komeda_crtc_state *kcrtc_st,
struct komeda_data_flow_cfg *dflow)
{
struct drm_plane *plane = kplane_st->base.plane;
struct komeda_pipeline *pipe = layer->base.pipeline;
int err;

DRM_DEBUG_ATOMIC("%s handling [PLANE:%d:%s]: src[x/y:%d/%d, w/h:%d/%d] disp[x/y:%d/%d, w/h:%d/%d]",
layer->base.name, plane->base.id, plane->name,
dflow->in_x, dflow->in_y, dflow->in_w, dflow->in_h,
dflow->out_x, dflow->out_y, dflow->out_w, dflow->out_h);

err = komeda_layer_validate(layer, kplane_st, dflow);
if (err)
return err;

err = komeda_scaler_validate(plane, kcrtc_st, dflow);
if (err)
return err;


if (dflow->en_split && merger_is_available(pipe, dflow))
return 0;

err = komeda_compiz_set_input(pipe->compiz, kcrtc_st, dflow);

return err;
}