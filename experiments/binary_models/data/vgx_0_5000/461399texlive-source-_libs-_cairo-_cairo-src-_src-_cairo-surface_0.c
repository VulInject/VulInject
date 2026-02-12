composite_one_color_glyph (cairo_surface_t       *surface,
cairo_operator_t       op,
const cairo_pattern_t *source,
const cairo_clip_t    *clip,
cairo_glyph_t         *glyph,
cairo_scaled_glyph_t  *scaled_glyph)
{
cairo_int_status_t status;
cairo_image_surface_t *glyph_surface;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

status = CAIRO_INT_STATUS_SUCCESS;

glyph_surface = scaled_glyph->color_surface;

if (glyph_surface->width && glyph_surface->height) {
int x, y;


x = _cairo_lround (glyph->x - glyph_surface->base.device_transform.x0);
y = _cairo_lround (glyph->y - glyph_surface->base.device_transform.y0);

pattern = cairo_pattern_create_for_surface ((cairo_surface_t *)glyph_surface);
cairo_matrix_init_translate (&matrix, - x, - y);
cairo_pattern_set_matrix (pattern, &matrix);
if (op == CAIRO_OPERATOR_SOURCE || op == CAIRO_OPERATOR_CLEAR)
status = surface->backend->mask (surface, op, pattern, pattern, clip);
else
status = surface->backend->paint (surface, op, pattern, clip);
cairo_pattern_destroy (pattern);
}

return status;
}