static void dissect_u3v_write_mem_cmd ( proto_tree * u3v_telegram_tree , tvbuff_t * tvb , packet_info * pinfo , gint startoffset , gint length , u3v_conv_info_t * u3v_conv_info , gencp_transaction_t * gencp_trans ) {
 const gchar * address_string = NULL ;
 gboolean is_custom_register = FALSE ;
 guint64 addr = 0 ;
 guint byte_count = 0 ;
 proto_item * item = NULL ;
 guint offset = startoffset + 8 ;
 addr = tvb_get_letoh64 ( tvb , startoffset ) ;
 byte_count = length - 8 ;
 address_string = get_register_name_from_address ( addr , & is_custom_register , u3v_conv_info ) ;
 gencp_trans -> address = addr ;
 gencp_trans -> count = byte_count ;
 col_append_fstr ( pinfo -> cinfo , COL_INFO , "%s: %d bytes" , address_string , byte_count ) ;
 item = proto_tree_add_item ( u3v_telegram_tree , hf_u3v_scd_writemem_cmd , tvb , startoffset , length , ENC_NA ) ;
 u3v_telegram_tree = proto_item_add_subtree ( item , ett_u3v_payload_cmd ) ;
 if ( is_known_bootstrap_register ( addr , u3v_conv_info ) ) {
 item = proto_tree_add_uint64 ( u3v_telegram_tree , hf_u3v_address , tvb , startoffset , 8 , addr ) ;
 proto_item_append_text ( item , " %s" , address_string ) ;
 dissect_u3v_register ( addr , u3v_telegram_tree , tvb , offset , byte_count , u3v_conv_info ) ;
 }
 else {
 proto_tree_add_item ( u3v_telegram_tree , hf_u3v_custom_memory_addr , tvb , startoffset , 8 , ENC_LITTLE_ENDIAN ) ;
 proto_tree_add_item ( u3v_telegram_tree , hf_u3v_custom_memory_data , tvb , startoffset + 8 , byte_count , ENC_NA ) ;
 }
 }