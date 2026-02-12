static enum AVColorPrimaries libjxl_get_primaries(void *avctx, const JxlColorEncoding *jxl_color)
{
AVColorPrimariesDesc desc;
enum AVColorPrimaries prim;


desc.prim.r.x = av_d2q(jxl_color->primaries_red_xy[0], 300000);
desc.prim.r.y = av_d2q(jxl_color->primaries_red_xy[1], 300000);
desc.prim.g.x = av_d2q(jxl_color->primaries_green_xy[0], 300000);
desc.prim.g.y = av_d2q(jxl_color->primaries_green_xy[1], 300000);
desc.prim.b.x = av_d2q(jxl_color->primaries_blue_xy[0], 300000);
desc.prim.b.y = av_d2q(jxl_color->primaries_blue_xy[1], 300000);
desc.wp.x = av_d2q(jxl_color->white_point_xy[0], 300000);
desc.wp.y = av_d2q(jxl_color->white_point_xy[1], 300000);

prim = av_csp_primaries_id_from_desc(&desc);
if (prim == AVCOL_PRI_UNSPECIFIED) {


desc.wp = av_csp_primaries_desc_from_id(AVCOL_PRI_BT709)->wp;
av_log(avctx, AV_LOG_WARNING, "Changing unknown white point to D65\n");
prim = av_csp_primaries_id_from_desc(&desc);
}

return prim;
}