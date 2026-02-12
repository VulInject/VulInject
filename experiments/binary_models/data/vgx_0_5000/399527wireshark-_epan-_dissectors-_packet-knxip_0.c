static proto_item* knxip_tree_add_data( proto_tree* tree, tvbuff_t* tvb, gint offset, gint length, column_info* cinfo, proto_item* item,
const gchar* name, const gchar* text1, const gchar* text2 )
{
proto_item* new_item = proto_tree_add_bytes_format( tree, hf_bytes, tvb, offset, length, NULL, "%s: $", name );
if( text1 ) col_append_str( cinfo, COL_INFO, text1 );
if( text2 ) proto_item_append_text( item, "%s", text2 );

while( length > 0 )
{
guint8 value = tvb_get_guint8( tvb, offset );
if( text1 ) col_append_fstr( cinfo, COL_INFO, "%02X", value );
if( text2 ) proto_item_append_text( item, "%02X", value );
proto_item_append_text( new_item, " %02X", value );
offset++;
length--;
}

return new_item;
}