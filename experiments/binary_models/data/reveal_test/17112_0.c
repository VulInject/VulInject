int vp8_update_entropy ( VP8_COMP * cpi , int update ) {
 VP8_COMMON * cm = & cpi -> common ;
 cm -> refresh_entropy_probs = update ;
 return 0 ;
 }