_pango_shape_shape (const char       *text,
gint              n_chars,
PangoRectangle   *shape_ink G_GNUC_UNUSED,
PangoRectangle   *shape_logical,
PangoGlyphString *glyphs)
{
int i;
const char *p;

pango_glyph_string_set_size (glyphs, n_chars);

for (i=0, p = text; i < n_chars; i++, p = g_utf8_next_char (p))
{
glyphs->glyphs[i].glyph = PANGO_GLYPH_EMPTY;
glyphs->glyphs[i].geometry.x_offset = 0;
glyphs->glyphs[i].geometry.y_offset = 0;
glyphs->glyphs[i].geometry.width = shape_logical->width;
glyphs->glyphs[i].attr.is_cluster_start = 1;

glyphs->log_clusters[i] = p - text;
}
}