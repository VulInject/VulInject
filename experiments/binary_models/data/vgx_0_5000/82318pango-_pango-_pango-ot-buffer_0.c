apply_gpos_ltr (PangoGlyphString *glyphs,
HB_Position      positions,
gboolean         is_hinted)
{
int i;

for (i = 0; i < glyphs->num_glyphs; i++)
{
FT_Pos x_pos = positions[i].x_pos;
FT_Pos y_pos = positions[i].y_pos;
int back = i;
int j;
int adjustment;


adjustment = PANGO_UNITS_26_6(positions[i].x_advance);

if (is_hinted)
adjustment = PANGO_UNITS_ROUND (adjustment);

if (positions[i].new_advance)
glyphs->glyphs[i].geometry.width  = adjustment;
else
glyphs->glyphs[i].geometry.width += adjustment;


while (positions[back].back != 0)
{
back  -= positions[back].back;
x_pos += positions[back].x_pos;
y_pos += positions[back].y_pos;
}

for (j = back; j < i; j++)
glyphs->glyphs[i].geometry.x_offset -= glyphs->glyphs[j].geometry.width;

glyphs->glyphs[i].geometry.x_offset += PANGO_UNITS_26_6(x_pos);
glyphs->glyphs[i].geometry.y_offset -= PANGO_UNITS_26_6(y_pos);
}
}