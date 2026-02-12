render_isolated_tone (PangoFont *font, gunichar tone, PangoGlyphString *glyphs,
int *n_glyphs, int cluster_offset)
{

int index = find_char (font, 0x25cc);	
if (!index)
index = find_char (font, 0x25cb);   
if (!index)
index = find_char (font, ' ');      
if (!index)				
index = find_char (font, PANGO_GET_UNKNOWN_GLYPH (0));


pango_glyph_string_set_size (glyphs, *n_glyphs + 1);
set_glyph (font, glyphs, *n_glyphs, cluster_offset, index);
(*n_glyphs)++;


render_tone(font, tone, glyphs, n_glyphs, cluster_offset);
}