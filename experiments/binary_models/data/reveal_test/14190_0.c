static int dissect_usb_vid_descriptor ( tvbuff_t * tvb , packet_info * pinfo , proto_tree * tree , void * data ) {
 int offset = 0 ;
 guint8 descriptor_len ;
 guint8 descriptor_type ;
 gint bytes_available ;
 usb_conv_info_t * usb_conv_info = ( usb_conv_info_t * ) data ;
 tvbuff_t * desc_tvb ;
 descriptor_len = tvb_get_guint8 ( tvb , offset ) ;
 descriptor_type = tvb_get_guint8 ( tvb , offset + 1 ) ;
 bytes_available = tvb_captured_length_remaining ( tvb , offset ) ;
 desc_tvb = tvb_new_subset ( tvb , 0 , bytes_available , descriptor_len ) ;
 if ( descriptor_type == CS_ENDPOINT ) {
 offset = dissect_usb_video_endpoint_descriptor ( tree , desc_tvb , descriptor_len ) ;
 }
 else if ( descriptor_type == CS_INTERFACE ) {
 if ( usb_conv_info && usb_conv_info -> interfaceSubclass == SC_VIDEOCONTROL ) {
 offset = dissect_usb_video_control_interface_descriptor ( tree , desc_tvb , descriptor_len , pinfo , usb_conv_info ) ;
 }
 else if ( usb_conv_info && usb_conv_info -> interfaceSubclass == SC_VIDEOSTREAMING ) {
 offset = dissect_usb_video_streaming_interface_descriptor ( tree , desc_tvb , descriptor_len ) ;
 }
 }
 return offset ;
 }