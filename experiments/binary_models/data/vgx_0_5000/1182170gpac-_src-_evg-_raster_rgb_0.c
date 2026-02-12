void evg_grey_fill_var(s32 y, s32 count, EVG_Span *spans, GF_EVGSurface *surf, EVGRasterCtx *rctx)
{
u8 *dst = surf->pixels + y * surf->pitch_y;
s32 i;

for (i=0; i<count; i++) {
u8 spanalpha, col_a;
s32 x;
u32 len;
u32 *col;
len = spans[i].len;
col = surf->fill_run(surf->sten, rctx, &spans[i], y);
spanalpha = spans[i].coverage;
x = surf->pitch_x * spans[i].x;
while (len--) {
col_a = GF_COL_A(*col);
if (col_a) {
if ((spanalpha!=0xFF) || (col_a != 0xFF)) {
overmask_grey(*col, dst + x, spanalpha, surf->grey_type);
} else {
u8 c;

if (surf->grey_type==0) c = GF_COL_R(*col);
else if (surf->grey_type==1) c = GF_COL_G(*col);
else c = GF_COL_B(*col);

*(dst + x) = c;
}
}
col++;
x += surf->pitch_x;
}
}
}