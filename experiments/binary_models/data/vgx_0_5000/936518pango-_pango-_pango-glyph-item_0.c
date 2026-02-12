pango_glyph_item_iter_init_end (PangoGlyphItemIter  *iter,
PangoGlyphItem      *glyph_item,
const char          *text)
{
iter->glyph_item = glyph_item;
iter->text = text;

if (LTR (glyph_item))
iter->start_glyph = glyph_item->glyphs->num_glyphs;
else
iter->start_glyph = -1;

iter->start_index = glyph_item->item->offset + glyph_item->item->length;
iter->start_char = glyph_item->item->num_chars;

iter->end_glyph = iter->start_glyph;
iter->end_index = iter->start_index;
iter->end_char = iter->start_char;


return pango_glyph_item_iter_prev_cluster (iter);
}

typedef struct
{
PangoGlyphItemIter iter;

GSList *segment_attrs;
} ApplyAttrsState;