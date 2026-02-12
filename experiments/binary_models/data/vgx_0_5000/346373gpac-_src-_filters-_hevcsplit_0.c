static void hevcsplit_rewrite_pps_no_grid(GF_HEVCSplitCtx *ctx, char *in_PPS, u32 in_PPS_length, char **out_PPS, u32 *out_PPS_length)
{
u32 i, out_size_no_epb;
u8 cu_qp_delta_enabled_flag, tiles_enabled_flag, loop_filter_across_slices_enabled_flag;

gf_bs_reassign_buffer(ctx->bs_nal_in, in_PPS, in_PPS_length);
gf_bs_enable_emulation_byte_removal(ctx->bs_nal_in, GF_TRUE);


if (!ctx->bs_nal_out) ctx->bs_nal_out = gf_bs_new(NULL, 0, GF_BITSTREAM_WRITE);
else gf_bs_reassign_buffer(ctx->bs_nal_out, ctx->output_no_epb, ctx->output_no_epb_alloc);


gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 16), 16);
gf_bs_write_ue(ctx->bs_nal_out, gf_bs_read_ue(ctx->bs_nal_in)); 
gf_bs_write_ue(ctx->bs_nal_out, gf_bs_read_ue(ctx->bs_nal_in)); 
gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 7), 7); 
gf_bs_write_ue(ctx->bs_nal_out, gf_bs_read_ue(ctx->bs_nal_in)); 
gf_bs_write_ue(ctx->bs_nal_out, gf_bs_read_ue(ctx->bs_nal_in)); 
gf_bs_write_se(ctx->bs_nal_out, gf_bs_read_se(ctx->bs_nal_in)); 
gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 2), 2); 
cu_qp_delta_enabled_flag = gf_bs_read_int(ctx->bs_nal_in, 1); 
gf_bs_write_int(ctx->bs_nal_out, cu_qp_delta_enabled_flag, 1); 
if (cu_qp_delta_enabled_flag)
gf_bs_write_ue(ctx->bs_nal_out, gf_bs_read_ue(ctx->bs_nal_in)); 
gf_bs_write_se(ctx->bs_nal_out, gf_bs_read_se(ctx->bs_nal_in)); 
gf_bs_write_se(ctx->bs_nal_out, gf_bs_read_se(ctx->bs_nal_in)); 
gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 4), 4); 

tiles_enabled_flag = gf_bs_read_int(ctx->bs_nal_in, 1); 
gf_bs_write_int(ctx->bs_nal_out, 0, 1); 

gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 1), 1); 


if (tiles_enabled_flag) {
u32 num_tile_columns_minus1 = gf_bs_read_ue(ctx->bs_nal_in);
u32 num_tile_rows_minus1 = gf_bs_read_ue(ctx->bs_nal_in);
u8 uniform_spacing_flag = gf_bs_read_int(ctx->bs_nal_in, 1);

if (!uniform_spacing_flag) {
for (i = 0; i < num_tile_columns_minus1; i++)
gf_bs_read_ue(ctx->bs_nal_in);
for (i = 0; i < num_tile_rows_minus1; i++)
gf_bs_read_ue(ctx->bs_nal_in);
}
gf_bs_read_int(ctx->bs_nal_in, 1);
}

loop_filter_across_slices_enabled_flag = gf_bs_read_int(ctx->bs_nal_in, 1);
gf_bs_write_int(ctx->bs_nal_out, loop_filter_across_slices_enabled_flag, 1);


while (gf_bs_get_bit_position(ctx->bs_nal_in) != 8) {
gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_int(ctx->bs_nal_in, 1), 1);
}


while (gf_bs_get_size(ctx->bs_nal_in) != gf_bs_get_position(ctx->bs_nal_in)) {
gf_bs_write_int(ctx->bs_nal_out, gf_bs_read_u8(ctx->bs_nal_in), 8); 
}


gf_bs_align(ctx->bs_nal_out);

gf_bs_get_content_no_truncate(ctx->bs_nal_out, &ctx->output_no_epb, &out_size_no_epb, &ctx->output_no_epb_alloc);

*out_PPS_length = out_size_no_epb + gf_media_nalu_emulation_bytes_add_count(ctx->output_no_epb, out_size_no_epb);
*out_PPS = gf_malloc(*out_PPS_length);
gf_media_nalu_add_emulation_bytes(ctx->output_no_epb, *out_PPS, out_size_no_epb);
}