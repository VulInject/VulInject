static int dissect_usb_video_streaming_input_header ( proto_tree * tree , tvbuff_t * tvb , int offset ) {
 guint8 num_formats ;
 guint8 bm_size ;
 static const int * info_bits [ ] = {
 & hf_usb_vid_streaming_info_D [ 0 ] , NULL }
 ;
 static const int * control_bits [ ] = {
 & hf_usb_vid_streaming_control_D [ 0 ] , & hf_usb_vid_streaming_control_D [ 1 ] , & hf_usb_vid_streaming_control_D [ 2 ] , & hf_usb_vid_streaming_control_D [ 3 ] , & hf_usb_vid_streaming_control_D [ 4 ] , & hf_usb_vid_streaming_control_D [ 5 ] , NULL }
 ;
 DISSECTOR_ASSERT ( array_length ( control_bits ) == ( 1 + array_length ( hf_usb_vid_streaming_control_D ) ) ) ;
 num_formats = tvb_get_guint8 ( tvb , offset ) ;
 proto_tree_add_item ( tree , hf_usb_vid_streaming_ifdesc_bNumFormats , tvb , offset , 1 , ENC_LITTLE_ENDIAN ) ;
 proto_tree_add_item ( tree , hf_usb_vid_ifdesc_wTotalLength , tvb , offset + 1 , 2 , ENC_LITTLE_ENDIAN ) ;
 offset += 3 ;
 dissect_usb_endpoint_address ( tree , tvb , offset ) ;
 offset ++ ;
 proto_tree_add_bitmask ( tree , tvb , offset , hf_usb_vid_streaming_bmInfo , ett_streaming_info , info_bits , ENC_NA ) ;
 proto_tree_add_item ( tree , hf_usb_vid_streaming_terminal_link , tvb , offset + 1 , 1 , ENC_LITTLE_ENDIAN ) ;
 proto_tree_add_item ( tree , hf_usb_vid_streaming_still_capture_method , tvb , offset + 2 , 1 , ENC_LITTLE_ENDIAN ) ;
 offset += 3 ;
 proto_tree_add_item ( tree , hf_usb_vid_streaming_trigger_support , tvb , offset , 1 , ENC_NA ) ;
 if ( tvb_get_guint8 ( tvb , offset ) > 0 ) {
 proto_tree_add_item ( tree , hf_usb_vid_streaming_trigger_usage , tvb , offset + 1 , 1 , ENC_LITTLE_ENDIAN ) ;
 }
 else {
 proto_tree_add_uint_format_value ( tree , hf_usb_vid_streaming_trigger_usage , tvb , offset + 1 , 1 , 0 , "Not applicable" ) ;
 }
 offset += 2 ;
 bm_size = tvb_get_guint8 ( tvb , offset ) ;
 proto_tree_add_item ( tree , hf_usb_vid_bControlSize , tvb , offset , 1 , ENC_LITTLE_ENDIAN ) ;
 ++ offset ;
 if ( bm_size > 0 ) {
 guint8 i ;
 for ( i = 0 ;
 i < num_formats ;
 ++ i ) {
 proto_tree_add_bitmask_len ( tree , tvb , offset , bm_size , hf_usb_vid_bmControl , ett_streaming_controls , control_bits , & ei_usb_vid_bitmask_len , ENC_LITTLE_ENDIAN ) ;
 offset += bm_size ;
 }
 }
 return offset ;
 }