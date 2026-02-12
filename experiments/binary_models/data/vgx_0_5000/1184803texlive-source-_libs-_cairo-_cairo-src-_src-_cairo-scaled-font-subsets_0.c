_cairo_sub_font_glyph_create (unsigned long	scaled_font_glyph_index,
unsigned int	subset_id,
unsigned int	subset_glyph_index,
double            x_advance,
double            y_advance,
int	        latin_character,
uint32_t          unicode,
char             *utf8,
int          	utf8_len)
{
cairo_sub_font_glyph_t *sub_font_glyph;

sub_font_glyph = _cairo_malloc (sizeof (cairo_sub_font_glyph_t));
if (unlikely (sub_font_glyph == NULL)) {
_cairo_error_throw (CAIRO_STATUS_NO_MEMORY);
return NULL;
}

_cairo_sub_font_glyph_init_key (sub_font_glyph, scaled_font_glyph_index);
sub_font_glyph->subset_id = subset_id;
sub_font_glyph->subset_glyph_index = subset_glyph_index;
sub_font_glyph->x_advance = x_advance;
sub_font_glyph->y_advance = y_advance;
sub_font_glyph->is_latin = (latin_character >= 0);
sub_font_glyph->latin_character = latin_character;
sub_font_glyph->is_mapped = FALSE;
sub_font_glyph->unicode = unicode;
sub_font_glyph->utf8 = utf8;
sub_font_glyph->utf8_len = utf8_len;

return sub_font_glyph;
}