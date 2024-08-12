static int is_known_bootstrap_register ( guint64 addr , u3v_conv_info_t * u3v_conv_info ) {
 const gchar * address_string = NULL ;
 guint32 offset_address ;
 if ( addr < 0x10000 ) {
 offset_address = ( guint32 ) addr ;
 address_string = try_val_to_str ( offset_address , bootstrap_register_names_abrm ) ;
 }
 if ( u3v_conv_info -> sbrm_addr != 0 && ( addr >= u3v_conv_info -> sbrm_addr ) ) {
 offset_address = ( guint32 ) ( addr - u3v_conv_info -> sbrm_addr ) ;
 address_string = try_val_to_str ( offset_address , bootstrap_register_names_sbrm ) ;
 }
 if ( u3v_conv_info -> sirm_addr != 0 && ( addr >= u3v_conv_info -> sirm_addr ) ) {
 offset_address = ( guint32 ) ( addr - u3v_conv_info -> sirm_addr ) ;
 address_string = try_val_to_str ( offset_address , bootstrap_register_names_sirm ) ;
 }
 if ( u3v_conv_info -> eirm_addr != 0 && ( addr >= u3v_conv_info -> eirm_addr ) ) {
 offset_address = ( guint32 ) ( addr - u3v_conv_info -> eirm_addr ) ;
 address_string = try_val_to_str ( offset_address , bootstrap_register_names_eirm ) ;
 }
 return address_string != NULL ;
 }