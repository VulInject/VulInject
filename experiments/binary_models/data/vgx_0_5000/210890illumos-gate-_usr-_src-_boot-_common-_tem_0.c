static void
tem_prom_scroll_up(struct tem_vt_state *tem, int nrows)
{
struct vis_conscopy	ma;
int	ncols, width;


ma.s_row = nrows * tems.ts_font.vf_height;
ma.e_row = tems.ts_p_dimension.height - 1;
ma.t_row = 0;

ma.s_col = 0;
ma.e_col = tems.ts_p_dimension.width - 1;
ma.t_col = 0;

tems_copy(&ma);


width = tems.ts_font.vf_width;
ncols = (tems.ts_p_dimension.width + (width - 1)) / width;

tem_pix_cls_range(tem, 0, nrows, tems.ts_p_offset.y,
0, ncols, 0, true);
}