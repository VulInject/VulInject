
int	sel_font(DviContext *dvi, int opcode)
{
DviFontRef *ref;
int	ndx;

ndx = opcode - DVI_FNT_NUM0;
if(dvi->depth)
ref = font_find_flat(dvi, ndx);
else
ref = dvi->findref(dvi, ndx);
if(ref == NULL) {
dvierr(dvi, _("font %d is not defined\n"),
opcode - DVI_FNT_NUM0);
return -1;
}
SHOWCMD((dvi, "fntnum", opcode - DVI_FNT_NUM0,
"current font is %s\n",
ref->ref->fontname));
dvi->currfont = ref;
return 0;
}