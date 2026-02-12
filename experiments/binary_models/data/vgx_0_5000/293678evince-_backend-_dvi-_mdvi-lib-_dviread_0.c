static DviFontRef *define_font(DviContext *dvi, int op)
{
Int32	arg;
Int32	scale;
Int32	dsize;
Int32	checksum;
int	hdpi;
int	vdpi;
int	n;
char	*name;
DviFontRef *ref;

arg = dugetn(dvi, op - DVI_FNT_DEF1 + 1);
checksum = duget4(dvi);
scale = duget4(dvi);
dsize = duget4(dvi);
hdpi = FROUND(dvi->params.mag * dvi->params.dpi * scale / dsize);
vdpi = FROUND(dvi->params.mag * dvi->params.vdpi * scale / dsize);
n = duget1(dvi) + duget1(dvi);
name = mdvi_malloc(n + 1);
dread(dvi, name, n);
name[n] = 0;
DEBUG((DBG_FONTS, "requesting font %d = `%s' at %.1fpt (%dx%d dpi)\n",
arg, name, (double)scale / (dvi->params.tfm_conv * 0x100000),
hdpi, vdpi));
ref = font_reference(&dvi->params, arg, name, checksum, hdpi, vdpi, scale);
if(ref == NULL) {
mdvi_error(_("could not load font `%s'\n"), name);
mdvi_free(name);
return NULL;
}
mdvi_free(name);
return ref;
}