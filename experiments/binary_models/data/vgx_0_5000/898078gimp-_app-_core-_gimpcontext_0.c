gimp_context_deserialize (GimpConfig *config,
GScanner   *scanner,
gint        nest_level,
gpointer    data)
{
GimpContext   *context        = GIMP_CONTEXT (config);
GimpLayerMode  old_paint_mode = context->paint_mode;
gboolean       success;

success = gimp_config_deserialize_properties (config, scanner, nest_level);

if (context->paint_mode != old_paint_mode)
{
if (context->paint_mode == GIMP_LAYER_MODE_OVERLAY_LEGACY)
g_object_set (context,
"paint-mode", GIMP_LAYER_MODE_SOFTLIGHT_LEGACY,
NULL);
}

return success;
}