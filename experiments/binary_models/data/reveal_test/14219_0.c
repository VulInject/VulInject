static gboolean is_last_sysex_packet_in_tvb ( tvbuff_t * tvb , gint offset ) {
 gboolean last = TRUE ;
 gint length = tvb_reported_length ( tvb ) ;
 offset += 4 ;
 while ( offset < length ) {
 guint8 code = tvb_get_guint8 ( tvb , offset ) ;
 code &= 0x0F ;
 if ( is_sysex_code ( code ) ) {
 last = FALSE ;
 break ;
 }
 offset += 4 ;
 }
 return last ;
 }