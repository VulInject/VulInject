int vp8_set_reference ( VP8_COMP * cpi , enum vpx_ref_frame_type ref_frame_flag , YV12_BUFFER_CONFIG * sd ) {
 VP8_COMMON * cm = & cpi -> common ;
 int ref_fb_idx ;
 if ( ref_frame_flag == VP8_LAST_FRAME ) ref_fb_idx = cm -> lst_fb_idx ;
 else if ( ref_frame_flag == VP8_GOLD_FRAME ) ref_fb_idx = cm -> gld_fb_idx ;
 else if ( ref_frame_flag == VP8_ALTR_FRAME ) ref_fb_idx = cm -> alt_fb_idx ;
 else return - 1 ;
 vp8_yv12_copy_frame ( sd , & cm -> yv12_fb [ ref_fb_idx ] ) ;
 return 0 ;
 }