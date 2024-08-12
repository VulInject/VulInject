static void dissect_usb_vid_control_value ( proto_tree * tree , tvbuff_t * tvb , int offset , guint8 request ) {
 gint value_size ;
 const char * fallback_name ;
 int hf ;
 switch ( request ) {
 case USB_SETUP_GET_DEF : hf = hf_usb_vid_control_default ;
 fallback_name = "Default Value" ;
 break ;
 case USB_SETUP_GET_MIN : case CONTROL_CHANGE_MIN : hf = hf_usb_vid_control_min ;
 fallback_name = "Min Value" ;
 break ;
 case USB_SETUP_GET_MAX : case CONTROL_CHANGE_MAX : hf = hf_usb_vid_control_max ;
 fallback_name = "Max Value" ;
 break ;
 case USB_SETUP_GET_RES : hf = hf_usb_vid_control_res ;
 fallback_name = "Resolution" ;
 break ;
 case USB_SETUP_GET_CUR : case USB_SETUP_SET_CUR : case CONTROL_CHANGE_VALUE : hf = hf_usb_vid_control_cur ;
 fallback_name = "Current Value" ;
 break ;
 default : hf = - 1 ;
 fallback_name = "Value" ;
 break ;
 }
 value_size = tvb_reported_length_remaining ( tvb , offset ) ;
 if ( hf != - 1 ) {
 header_field_info * hfinfo ;
 hfinfo = proto_registrar_get_nth ( hf ) ;
 DISSECTOR_ASSERT ( IS_FT_INT ( hfinfo -> type ) || IS_FT_UINT ( hfinfo -> type ) ) ;
 }
 if ( ( hf != - 1 ) && ( value_size <= 4 ) ) {
 proto_tree_add_item ( tree , hf , tvb , offset , value_size , ENC_LITTLE_ENDIAN ) ;
 }
 else {
 proto_tree_add_bytes_format ( tree , hf_usb_vid_control_value , tvb , offset , value_size , NULL , "%s" , fallback_name ) ;
 }
 }