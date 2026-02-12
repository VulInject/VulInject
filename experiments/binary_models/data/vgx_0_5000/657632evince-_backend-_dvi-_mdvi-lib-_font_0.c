
void	font_reset_font_glyphs(DviDevice *dev, DviFont *font, int what)
{
int	i;
DviFontChar *ch;

if(what & MDVI_FONTSEL_GLYPH)
what |= MDVI_FONTSEL_BITMAP|MDVI_FONTSEL_GREY;	
if(font->subfonts) {
DviFontRef *ref;

for(ref = font->subfonts; ref; ref = ref->next)
font_reset_font_glyphs(dev, ref->ref, what);
}
if(font->in) {
DEBUG((DBG_FILES, "close(%s)\n", font->filename));
fclose(font->in);
font->in = NULL;
}
if(font->finfo->getglyph == NULL)
return;
DEBUG((DBG_FONTS, "resetting glyphs in font `%s'\n", font->fontname));
for(ch = font->chars, i = font->loc; i <= font->hic; ch++, i++) {
if(glyph_present(ch))
font_reset_one_glyph(dev, ch, what);
}
if((what & MDVI_FONTSEL_GLYPH) && font->finfo->reset)
font->finfo->reset(font);
}	