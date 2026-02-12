pango_x_font_map_list_families (PangoFontMap           *fontmap,
PangoFontFamily      ***families,
int                    *n_families)
{
GSList *family_list = NULL;
GSList *tmp_list;
PangoXFontMap *xfontmap = (PangoXFontMap *)fontmap;

if (!n_families)
return;

g_hash_table_foreach (xfontmap->families, list_families_foreach, &family_list);

*n_families = g_slist_length (family_list);

if (families)
{
int i = 0;

*families = g_new (PangoFontFamily *, *n_families);

tmp_list = family_list;
while (tmp_list)
{
(*families)[i] = tmp_list->data;
i++;
tmp_list = tmp_list->next;
}
}

g_slist_free (family_list);
}