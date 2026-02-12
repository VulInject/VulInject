mp_setfont (const char *font_name, double pt_size)
{
const char     *name = font_name;
struct mp_font *font;
int             subfont_id = -1;
fontmap_rec    *mrec;

font = CURRENT_FONT();

mrec = pdf_lookup_fontmap_record(font_name);
if (mrec && mrec->charmap.sfd_name && mrec->charmap.subfont_id) {
subfont_id = sfd_load_record(mrec->charmap.sfd_name, mrec->charmap.subfont_id);
}


if (mrec && mrec->map_name) {
name = mrec->map_name;
} else {
name = font_name;
}

if (font->font_name)
RELEASE(font->font_name);
font->font_name  = NEW(strlen(font_name) + 1, char);
strcpy(font->font_name, font_name);
font->subfont_id = subfont_id;
font->pt_size    = pt_size;
font->tfm_id     = tfm_open(font_name, 0); 
font->font_id    = pdf_dev_locate_font(name,
(spt_t) (pt_size * dev_unit_dviunit()));

if (font->font_id < 0) {
ERROR("MPOST: No physical font assigned for \"%s\".", font_name);
return 1;
}

return  0;
}