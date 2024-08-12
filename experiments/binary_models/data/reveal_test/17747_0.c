int vp9_set_reference_enc ( VP9_COMP * cpi , VP9_REFFRAME ref_frame_flag , YV12_BUFFER_CONFIG * sd ) {
 YV12_BUFFER_CONFIG * cfg = get_vp9_ref_frame_buffer ( cpi , ref_frame_flag ) ;
 if ( cfg ) {
 vp8_yv12_copy_frame ( sd , cfg ) ;
 return 0 ;
 }
 else {
 return - 1 ;
 }
 }