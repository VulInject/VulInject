setup_glyph_mapper (struct glyph_mapper *gm, sfnt *sfont)
{
gm->sfont     = sfont;
gm->nametogid = tt_read_post_table(sfont);
gm->codetogid = tt_cmap_read(sfont, TT_WIN, TT_WIN_UCS4);
if (!gm->codetogid)
gm->codetogid = tt_cmap_read(sfont, TT_WIN, TT_WIN_UNICODE);

if (!gm->nametogid && !gm->codetogid)
return -1;

gm->gsub = otl_gsub_new();

return 0;
}