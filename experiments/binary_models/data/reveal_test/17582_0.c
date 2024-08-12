static size_t read_uncompressed_header ( VP9Decoder * pbi , struct vp9_read_bit_buffer * rb ) {
 VP9_COMMON * const cm = & pbi -> common ;
 size_t sz ;
 int i ;
 cm -> last_frame_type = cm -> frame_type ;
 if ( vp9_rb_read_literal ( rb , 2 ) != VP9_FRAME_MARKER ) vpx_internal_error ( & cm -> error , VPX_CODEC_UNSUP_BITSTREAM , "Invalid frame marker" ) ;
 cm -> profile = vp9_read_profile ( rb ) ;
 if ( cm -> profile >= MAX_PROFILES ) vpx_internal_error ( & cm -> error , VPX_CODEC_UNSUP_BITSTREAM , "Unsupported bitstream profile" ) ;
 cm -> show_existing_frame = vp9_rb_read_bit ( rb ) ;
 if ( cm -> show_existing_frame ) {
 const int frame_to_show = cm -> ref_frame_map [ vp9_rb_read_literal ( rb , 3 ) ] ;
 if ( frame_to_show < 0 || cm -> frame_bufs [ frame_to_show ] . ref_count < 1 ) vpx_internal_error ( & cm -> error , VPX_CODEC_UNSUP_BITSTREAM , "Buffer %d does not contain a decoded frame" , frame_to_show ) ;
 ref_cnt_fb ( cm -> frame_bufs , & cm -> new_fb_idx , frame_to_show ) ;
 pbi -> refresh_frame_flags = 0 ;
 cm -> lf . filter_level = 0 ;
 cm -> show_frame = 1 ;
 return 0 ;
 }
 cm -> frame_type = ( FRAME_TYPE ) vp9_rb_read_bit ( rb ) ;
 cm -> show_frame = vp9_rb_read_bit ( rb ) ;
 cm -> error_resilient_mode = vp9_rb_read_bit ( rb ) ;
 if ( cm -> frame_type == KEY_FRAME ) {
 if ( ! vp9_read_sync_code ( rb ) ) vpx_internal_error ( & cm -> error , VPX_CODEC_UNSUP_BITSTREAM , "Invalid frame sync code" ) ;
 read_bitdepth_colorspace_sampling ( cm , rb ) ;
 pbi -> refresh_frame_flags = ( 1 << REF_FRAMES ) - 1 ;
 for ( i = 0 ;
 i < REFS_PER_FRAME ;
 ++ i ) {
 cm -> frame_refs [ i ] . idx = - 1 ;
 cm -> frame_refs [ i ] . buf = NULL ;
 }
 setup_frame_size ( cm , rb ) ;
 pbi -> need_resync = 0 ;
 }
 else {
 cm -> intra_only = cm -> show_frame ? 0 : vp9_rb_read_bit ( rb ) ;
 cm -> reset_frame_context = cm -> error_resilient_mode ? : vp9_rb_read_literal ( rb , 2 ) ;
 if ( cm -> intra_only ) {
 if ( ! vp9_read_sync_code ( rb ) ) vpx_internal_error ( & cm -> error , VPX_CODEC_UNSUP_BITSTREAM , "Invalid frame sync code" ) ;
 if ( cm -> profile > PROFILE_0 ) {
 read_bitdepth_colorspace_sampling ( cm , rb ) ;
 }
 else {
 cm -> color_space = BT_601 ;
 cm -> subsampling_y = cm -> subsampling_x = 1 ;
 }
 pbi -> refresh_frame_flags = vp9_rb_read_literal ( rb , REF_FRAMES ) ;
 setup_frame_size ( cm , rb ) ;
 pbi -> need_resync = 0 ;
 }
 else {
 pbi -> refresh_frame_flags = vp9_rb_read_literal ( rb , REF_FRAMES ) ;
 for ( i = 0 ;
 i < REFS_PER_FRAME ;
 ++ i ) {
 const int ref = vp9_rb_read_literal ( rb , REF_FRAMES_LOG2 ) ;
 const int idx = cm -> ref_frame_map [ ref ] ;
 RefBuffer * const ref_frame = & cm -> frame_refs [ i ] ;
 ref_frame -> idx = idx ;
 ref_frame -> buf = & cm -> frame_bufs [ idx ] . buf ;
 cm -> ref_frame_sign_bias [ LAST_FRAME + i ] = vp9_rb_read_bit ( rb ) ;
 }
 setup_frame_size_with_refs ( cm , rb ) ;
 cm -> allow_high_precision_mv = vp9_rb_read_bit ( rb ) ;
 cm -> interp_filter = read_interp_filter ( rb ) ;
 for ( i = 0 ;
 i < REFS_PER_FRAME ;
 ++ i ) {
 RefBuffer * const ref_buf = & cm -> frame_refs [ i ] ;
 # if CONFIG_VP9_HIGHBITDEPTH vp9_setup_scale_factors_for_frame ( & ref_buf -> sf , ref_buf -> buf -> y_crop_width , ref_buf -> buf -> y_crop_height , cm -> width , cm -> height , cm -> use_highbitdepth ) ;
 # else vp9_setup_scale_factors_for_frame ( & ref_buf -> sf , ref_buf -> buf -> y_crop_width , ref_buf -> buf -> y_crop_height , cm -> width , cm -> height ) ;
 # endif if ( vp9_is_scaled ( & ref_buf -> sf ) ) vp9_extend_frame_borders ( ref_buf -> buf ) ;
 }
 }
 }
 if ( pbi -> need_resync ) {
 vpx_internal_error ( & cm -> error , VPX_CODEC_CORRUPT_FRAME , "Keyframe / intra-only frame required to reset decoder" " state" ) ;
 }
 if ( ! cm -> error_resilient_mode ) {
 cm -> refresh_frame_context = vp9_rb_read_bit ( rb ) ;
 cm -> frame_parallel_decoding_mode = vp9_rb_read_bit ( rb ) ;
 }
 else {
 cm -> refresh_frame_context = 0 ;
 cm -> frame_parallel_decoding_mode = 1 ;
 }
 cm -> frame_context_idx = vp9_rb_read_literal ( rb , FRAME_CONTEXTS_LOG2 ) ;
 if ( frame_is_intra_only ( cm ) || cm -> error_resilient_mode ) vp9_setup_past_independence ( cm ) ;
 setup_loopfilter ( & cm -> lf , rb ) ;
 setup_quantization ( cm , & pbi -> mb , rb ) ;
 setup_segmentation ( & cm -> seg , rb ) ;
 setup_tile_info ( cm , rb ) ;
 sz = vp9_rb_read_literal ( rb , 16 ) ;
 if ( sz == 0 ) vpx_internal_error ( & cm -> error , VPX_CODEC_CORRUPT_FRAME , "Invalid header size" ) ;
 return sz ;
 }