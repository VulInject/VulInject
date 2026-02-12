_vg_surface_mask (void                   *abstract_surface,
cairo_operator_t        op,
const cairo_pattern_t  *source,
const cairo_pattern_t  *mask,
const cairo_clip_t     *clip)
{
cairo_vg_surface_t *surface = abstract_surface;
cairo_status_t status;

if (! _vg_is_supported_operator (op))
return CAIRO_INT_STATUS_UNSUPPORTED;


if (mask->type == CAIRO_PATTERN_TYPE_SOLID) {
cairo_solid_pattern_t *solid = (cairo_solid_pattern_t *) mask;
cairo_vg_context_t *context = _vg_context_lock (surface->context);
double alpha = context->alpha;

context->alpha = solid->color.alpha;
status = _vg_surface_paint (abstract_surface, op, source, clip);
context->alpha = alpha;

_vg_context_unlock (context);

return status;
}

return CAIRO_INT_STATUS_UNSUPPORTED;
}