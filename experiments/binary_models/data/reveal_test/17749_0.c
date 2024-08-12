int setup_interp_filter_search_mask ( VP9_COMP * cpi ) {
 INTERP_FILTER ifilter ;
 int ref_total [ MAX_REF_FRAMES ] = {
 0 }
 ;
 MV_REFERENCE_FRAME ref ;
 int mask = 0 ;
 if ( cpi -> common . last_frame_type == KEY_FRAME || cpi -> refresh_alt_ref_frame ) return mask ;
 for ( ref = LAST_FRAME ;
 ref <= ALTREF_FRAME ;
 ++ ref ) for ( ifilter = EIGHTTAP ;
 ifilter <= EIGHTTAP_SHARP ;
 ++ ifilter ) ref_total [ ref ] += cpi -> interp_filter_selected [ ref ] [ ifilter ] ;
 for ( ifilter = EIGHTTAP ;
 ifilter <= EIGHTTAP_SHARP ;
 ++ ifilter ) {
 if ( ( ref_total [ LAST_FRAME ] && cpi -> interp_filter_selected [ LAST_FRAME ] [ ifilter ] == 0 ) && ( ref_total [ GOLDEN_FRAME ] == 0 || cpi -> interp_filter_selected [ GOLDEN_FRAME ] [ ifilter ] * 50 < ref_total [ GOLDEN_FRAME ] ) && ( ref_total [ ALTREF_FRAME ] == 0 || cpi -> interp_filter_selected [ ALTREF_FRAME ] [ ifilter ] * 50 < ref_total [ ALTREF_FRAME ] ) ) mask |= 1 << ifilter ;
 }
 return mask ;
 }