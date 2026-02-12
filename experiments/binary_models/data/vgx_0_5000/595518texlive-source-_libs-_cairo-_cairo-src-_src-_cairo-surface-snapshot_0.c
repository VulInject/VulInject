_cairo_surface_snapshot_acquire_source_image (void                    *abstract_surface,
cairo_image_surface_t  **image_out,
void                   **extra_out)
{
cairo_surface_snapshot_t *surface = abstract_surface;
struct snapshot_extra *extra;
cairo_status_t status;

extra = _cairo_malloc (sizeof (*extra));
if (unlikely (extra == NULL)) {
*extra_out = NULL;
return _cairo_error (CAIRO_STATUS_NO_MEMORY);
}

extra->target = _cairo_surface_snapshot_get_target (&surface->base);
status =  _cairo_surface_acquire_source_image (extra->target, image_out, &extra->extra);
if (unlikely (status)) {
cairo_surface_destroy (extra->target);
free (extra);
extra = NULL;
}

*extra_out = extra;
return status;
}