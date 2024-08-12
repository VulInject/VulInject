static char * date_time_from_opaque ( tvbuff_t * tvb , guint32 offset , guint32 data_len ) {
 char * str ;
 switch ( data_len ) {
 case 4 : str = wmem_strdup_printf ( wmem_packet_scope ( ) , "%%DateTime: " "%02x%02x-%02x-%02xT00:00:00Z" , tvb_get_guint8 ( tvb , offset ) , tvb_get_guint8 ( tvb , offset + 1 ) , tvb_get_guint8 ( tvb , offset + 2 ) , tvb_get_guint8 ( tvb , offset + 3 ) ) ;
 break ;
 case 5 : str = wmem_strdup_printf ( wmem_packet_scope ( ) , "%%DateTime: " "%02x%02x-%02x-%02xT%02x:00:00Z" , tvb_get_guint8 ( tvb , offset ) , tvb_get_guint8 ( tvb , offset + 1 ) , tvb_get_guint8 ( tvb , offset + 2 ) , tvb_get_guint8 ( tvb , offset + 3 ) , tvb_get_guint8 ( tvb , offset + 4 ) ) ;
 break ;
 case 6 : str = wmem_strdup_printf ( wmem_packet_scope ( ) , "%%DateTime: " "%02x%02x-%02x-%02xT%02x:%02x:00Z" , tvb_get_guint8 ( tvb , offset ) , tvb_get_guint8 ( tvb , offset + 1 ) , tvb_get_guint8 ( tvb , offset + 2 ) , tvb_get_guint8 ( tvb , offset + 3 ) , tvb_get_guint8 ( tvb , offset + 4 ) , tvb_get_guint8 ( tvb , offset + 5 ) ) ;
 break ;
 case 7 : str = wmem_strdup_printf ( wmem_packet_scope ( ) , "%%DateTime: " "%02x%02x-%02x-%02xT%02x:%02x:%02xZ" , tvb_get_guint8 ( tvb , offset ) , tvb_get_guint8 ( tvb , offset + 1 ) , tvb_get_guint8 ( tvb , offset + 2 ) , tvb_get_guint8 ( tvb , offset + 3 ) , tvb_get_guint8 ( tvb , offset + 4 ) , tvb_get_guint8 ( tvb , offset + 5 ) , tvb_get_guint8 ( tvb , offset + 6 ) ) ;
 break ;
 default : str = wmem_strdup_printf ( wmem_packet_scope ( ) , "<Error: invalid binary %%DateTime " "(%d bytes of opaque data)>" , data_len ) ;
 break ;
 }
 return str ;
 }