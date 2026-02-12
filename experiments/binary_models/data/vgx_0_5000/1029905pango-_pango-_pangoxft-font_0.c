get_glyph_extents_xft (PangoFcFont      *fcfont,
PangoGlyph        glyph,
PangoRectangle   *ink_rect,
PangoRectangle   *logical_rect)
{
XftFont *xft_font = xft_font_get_font ((PangoFont *)fcfont);
XGlyphInfo extents;
Display *display;
FT_UInt ft_glyph = glyph;

_pango_xft_font_map_get_info (fcfont->fontmap, &display, NULL);

XftGlyphExtents (display, xft_font, &ft_glyph, 1, &extents);

if (ink_rect)
{
ink_rect->x = - extents.x * PANGO_SCALE; 
ink_rect->y = - extents.y * PANGO_SCALE; 
ink_rect->width = extents.width * PANGO_SCALE;
ink_rect->height = extents.height * PANGO_SCALE;
}

if (logical_rect)
{
logical_rect->x = 0;
logical_rect->y = - xft_font->ascent * PANGO_SCALE;
logical_rect->width = extents.xOff * PANGO_SCALE;
logical_rect->height = (xft_font->ascent + xft_font->descent) * PANGO_SCALE;
}
}

typedef struct
{
PangoRectangle ink_rect;
PangoRectangle logical_rect;
} Extents;