int get_ber_identifier ( tvbuff_t * tvb , int offset , gint8 * ber_class , gboolean * pc , gint32 * tag ) {
 guint8 id , t ;
 gint8 tmp_class ;
 gboolean tmp_pc ;
 gint32 tmp_tag ;
 id = tvb_get_guint8 ( tvb , offset ) ;
 offset += 1 ;
 # ifdef DEBUG_BER printf ( "BER ID=%02x" , id ) ;
 # endif tmp_class = ( id >> 6 ) & 0x03 ;
 tmp_pc = ( id >> 5 ) & 0x01 ;
 tmp_tag = id & 0x1F ;
 if ( tmp_tag == 0x1F ) {
 tmp_tag = 0 ;
 while ( tvb_reported_length_remaining ( tvb , offset ) > 0 ) {
 t = tvb_get_guint8 ( tvb , offset ) ;
 # ifdef DEBUG_BER printf ( " %02x" , t ) ;
 # endif offset += 1 ;
 tmp_tag <<= 7 ;
 tmp_tag |= t & 0x7F ;
 if ( ! ( t & 0x80 ) ) break ;
 }
 }
 # ifdef DEBUG_BER printf ( "\n" ) ;
 # endif if ( ber_class ) * ber_class = tmp_class ;
 if ( pc ) * pc = tmp_pc ;
 if ( tag ) * tag = tmp_tag ;
 last_class = tmp_class ;
 last_pc = tmp_pc ;
 last_tag = tmp_tag ;
 return offset ;
 }