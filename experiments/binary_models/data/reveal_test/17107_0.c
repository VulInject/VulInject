int vp8_update_reference ( VP8_COMP * cpi , int ref_frame_flags ) {
 if ( ref_frame_flags > 7 ) return - 1 ;
 cpi -> common . refresh_golden_frame = 0 ;
 cpi -> common . refresh_alt_ref_frame = 0 ;
 cpi -> common . refresh_last_frame = 0 ;
 if ( ref_frame_flags & VP8_LAST_FRAME ) cpi -> common . refresh_last_frame = 1 ;
 if ( ref_frame_flags & VP8_GOLD_FRAME ) cpi -> common . refresh_golden_frame = 1 ;
 if ( ref_frame_flags & VP8_ALTR_FRAME ) cpi -> common . refresh_alt_ref_frame = 1 ;
 return 0 ;
 }