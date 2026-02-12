static void fill_picture_parameters(const AVCodecContext *avctx, AVDXVAContext *ctx, const HEVCContext *h,
DXVA_PicParams_HEVC *pp)
{
const HEVCFrame *current_picture = h->ref;
const HEVCSPS *sps = h->ps.sps;
const HEVCPPS *pps = h->ps.pps;
int i, j;

memset(pp, 0, sizeof(*pp));

pp->PicWidthInMinCbsY  = sps->min_cb_width;
pp->PicHeightInMinCbsY = sps->min_cb_height;

pp->wFormatAndSequenceInfoFlags = (sps->chroma_format_idc             <<  0) |
(sps->separate_colour_plane_flag    <<  2) |
((sps->bit_depth - 8)               <<  3) |
((sps->bit_depth - 8)               <<  6) |
((sps->log2_max_poc_lsb - 4)        <<  9) |
(0                                  << 13) |
(0                                  << 14) |
(0                                  << 15);

fill_picture_entry(&pp->CurrPic, ff_dxva2_get_surface_index(avctx, ctx, current_picture->frame), 0);

pp->sps_max_dec_pic_buffering_minus1         = sps->temporal_layer[sps->max_sub_layers - 1].max_dec_pic_buffering - 1;
pp->log2_min_luma_coding_block_size_minus3   = sps->log2_min_cb_size - 3;
pp->log2_diff_max_min_luma_coding_block_size = sps->log2_diff_max_min_coding_block_size;
pp->log2_min_transform_block_size_minus2     = sps->log2_min_tb_size - 2;
pp->log2_diff_max_min_transform_block_size   = sps->log2_max_trafo_size  - sps->log2_min_tb_size;
pp->max_transform_hierarchy_depth_inter      = sps->max_transform_hierarchy_depth_inter;
pp->max_transform_hierarchy_depth_intra      = sps->max_transform_hierarchy_depth_intra;
pp->num_short_term_ref_pic_sets              = sps->nb_st_rps;
pp->num_long_term_ref_pics_sps               = sps->num_long_term_ref_pics_sps;

pp->num_ref_idx_l0_default_active_minus1     = pps->num_ref_idx_l0_default_active - 1;
pp->num_ref_idx_l1_default_active_minus1     = pps->num_ref_idx_l1_default_active - 1;
pp->init_qp_minus26                          = pps->pic_init_qp_minus26;

if (h->sh.short_term_ref_pic_set_sps_flag == 0 && h->sh.short_term_rps) {
pp->ucNumDeltaPocsOfRefRpsIdx            = h->sh.short_term_rps->rps_idx_num_delta_pocs;
pp->wNumBitsForShortTermRPSInSlice       = h->sh.short_term_ref_pic_set_size;
}

pp->dwCodingParamToolFlags = (sps->scaling_list_enable_flag                  <<  0) |
(sps->amp_enabled_flag                          <<  1) |
(sps->sao_enabled                               <<  2) |
(sps->pcm_enabled_flag                          <<  3) |
((sps->pcm_enabled_flag ? (sps->pcm.bit_depth - 1) : 0)            <<  4) |
((sps->pcm_enabled_flag ? (sps->pcm.bit_depth_chroma - 1) : 0)     <<  8) |
((sps->pcm_enabled_flag ? (sps->pcm.log2_min_pcm_cb_size - 3) : 0) << 12) |
((sps->pcm_enabled_flag ? (sps->pcm.log2_max_pcm_cb_size - sps->pcm.log2_min_pcm_cb_size) : 0) << 14) |
(sps->pcm.loop_filter_disable_flag              << 16) |
(sps->long_term_ref_pics_present_flag           << 17) |
(sps->sps_temporal_mvp_enabled_flag             << 18) |
(sps->sps_strong_intra_smoothing_enable_flag    << 19) |
(pps->dependent_slice_segments_enabled_flag     << 20) |
(pps->output_flag_present_flag                  << 21) |
(pps->num_extra_slice_header_bits               << 22) |
(pps->sign_data_hiding_flag                     << 25) |
(pps->cabac_init_present_flag                   << 26) |
(0                                              << 27);

pp->dwCodingSettingPicturePropertyFlags = (pps->constrained_intra_pred_flag                   <<  0) |
(pps->transform_skip_enabled_flag                   <<  1) |
(pps->cu_qp_delta_enabled_flag                      <<  2) |
(pps->pic_slice_level_chroma_qp_offsets_present_flag <<  3) |
(pps->weighted_pred_flag                            <<  4) |
(pps->weighted_bipred_flag                          <<  5) |
(pps->transquant_bypass_enable_flag                 <<  6) |
(pps->tiles_enabled_flag                            <<  7) |
(pps->entropy_coding_sync_enabled_flag              <<  8) |
(pps->uniform_spacing_flag                          <<  9) |
((pps->tiles_enabled_flag ? pps->loop_filter_across_tiles_enabled_flag : 0) << 10) |
(pps->seq_loop_filter_across_slices_enabled_flag    << 11) |
(pps->deblocking_filter_override_enabled_flag       << 12) |
(pps->disable_dbf                                   << 13) |
(pps->lists_modification_present_flag               << 14) |
(pps->slice_header_extension_present_flag           << 15) |
(IS_IRAP(h)                                         << 16) |
(IS_IDR(h)                                          << 17) |

(IS_IRAP(h)                                         << 18) |
(0                                                  << 19);
pp->pps_cb_qp_offset            = pps->cb_qp_offset;
pp->pps_cr_qp_offset            = pps->cr_qp_offset;
if (pps->tiles_enabled_flag) {
pp->num_tile_columns_minus1 = pps->num_tile_columns - 1;
pp->num_tile_rows_minus1    = pps->num_tile_rows - 1;

if (!pps->uniform_spacing_flag) {
for (i = 0; i < pps->num_tile_columns; i++)
pp->column_width_minus1[i] = pps->column_width[i] - 1;

for (i = 0; i < pps->num_tile_rows; i++)
pp->row_height_minus1[i] = pps->row_height[i] - 1;
}
}

pp->diff_cu_qp_delta_depth           = pps->diff_cu_qp_delta_depth;
pp->pps_beta_offset_div2             = pps->beta_offset / 2;
pp->pps_tc_offset_div2               = pps->tc_offset / 2;
pp->log2_parallel_merge_level_minus2 = pps->log2_parallel_merge_level - 2;
pp->CurrPicOrderCntVal               = h->poc;


for (i = 0, j = 0; i < FF_ARRAY_ELEMS(pp->RefPicList); i++) {
const HEVCFrame *frame = NULL;
while (!frame && j < FF_ARRAY_ELEMS(h->DPB)) {
if (&h->DPB[j] != current_picture && (h->DPB[j].flags & (HEVC_FRAME_FLAG_LONG_REF | HEVC_FRAME_FLAG_SHORT_REF)))
frame = &h->DPB[j];
j++;
}

if (frame) {
fill_picture_entry(&pp->RefPicList[i], ff_dxva2_get_surface_index(avctx, ctx, frame->frame), !!(frame->flags & HEVC_FRAME_FLAG_LONG_REF));
pp->PicOrderCntValList[i] = frame->poc;
} else {
pp->RefPicList[i].bPicEntry = 0xff;
pp->PicOrderCntValList[i]   = 0;
}
}

const RefPicList *rpl = &h->rps[ref_idx]; \
for (i = 0, j = 0; i < FF_ARRAY_ELEMS(pp->ref_list); i++) { \
const HEVCFrame *frame = NULL; \
while (!frame && j < rpl->nb_refs) \
frame = rpl->ref[j++]; \
if (frame && frame->flags & (HEVC_FRAME_FLAG_LONG_REF | HEVC_FRAME_FLAG_SHORT_REF)) \
pp->ref_list[i] = get_refpic_index(pp, ff_dxva2_get_surface_index(avctx, ctx, frame->frame)); \
else \
pp->ref_list[i] = 0xff; \
} \
}


DO_REF_LIST(ST_CURR_BEF, RefPicSetStCurrBefore);
DO_REF_LIST(ST_CURR_AFT, RefPicSetStCurrAfter);
DO_REF_LIST(LT_CURR, RefPicSetLtCurr);

pp->StatusReportFeedbackNumber = 1 + DXVA_CONTEXT_REPORT_ID(avctx, ctx)++;
}