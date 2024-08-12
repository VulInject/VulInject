static int get_arf_src_index ( VP9_COMP * cpi ) {
 RATE_CONTROL * const rc = & cpi -> rc ;
 int arf_src_index = 0 ;
 if ( is_altref_enabled ( cpi ) ) {
 if ( cpi -> oxcf . pass == 2 ) {
 const GF_GROUP * const gf_group = & cpi -> twopass . gf_group ;
 if ( gf_group -> update_type [ gf_group -> index ] == ARF_UPDATE ) {
 arf_src_index = gf_group -> arf_src_offset [ gf_group -> index ] ;
 }
 }
 else if ( rc -> source_alt_ref_pending ) {
 arf_src_index = rc -> frames_till_gf_update_due ;
 }
 }
 return arf_src_index ;
 }