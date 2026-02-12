static void TeX_readHeightDepth(FILE *ttf,struct ttfinfo *info,uint32 base) {
int i,gcnt;

fseek(ttf,base,SEEK_SET);
if ( getushort(ttf)!=0 )	
return;
gcnt = getushort(ttf);
for ( i=0; i<gcnt && i<info->glyph_cnt; ++i ) {
int h, d;
h = getushort(ttf);
d = getushort(ttf);
if ( info->chars[i]!=NULL ) {
info->chars[i]->tex_height = h;
info->chars[i]->tex_depth = d;
}
}
}