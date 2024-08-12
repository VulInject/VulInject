static int parse_vType ( tvbuff_t * tvb , int offset , guint16 * vtype ) {
 guint16 tmp_vtype = tvb_get_letohs ( tvb , offset ) ;
 guint16 modifier = tmp_vtype & 0xFF00 ;
 switch ( tmp_vtype & 0xFF ) {
 case VT_EMPTY : * vtype = VT_EMPTY ;
 break ;
 case VT_NULL : * vtype = VT_NULL ;
 break ;
 case VT_I2 : * vtype = VT_I2 ;
 break ;
 case VT_I4 : * vtype = VT_I4 ;
 break ;
 case VT_R4 : * vtype = VT_R4 ;
 break ;
 case VT_R8 : * vtype = VT_R8 ;
 break ;
 case VT_CY : * vtype = VT_CY ;
 break ;
 case VT_DATE : * vtype = VT_DATE ;
 break ;
 case VT_BSTR : * vtype = VT_BSTR ;
 break ;
 case VT_ERROR : * vtype = VT_ERROR ;
 break ;
 case VT_BOOL : * vtype = VT_BOOL ;
 break ;
 case VT_VARIANT : * vtype = VT_VARIANT ;
 break ;
 case VT_DECIMAL : * vtype = VT_DECIMAL ;
 break ;
 case VT_I1 : * vtype = VT_I1 ;
 break ;
 case VT_UI1 : * vtype = VT_UI1 ;
 break ;
 case VT_UI2 : * vtype = VT_UI2 ;
 break ;
 case VT_UI4 : * vtype = VT_UI4 ;
 break ;
 case VT_I8 : * vtype = VT_I8 ;
 break ;
 case VT_UI8 : * vtype = VT_UI8 ;
 break ;
 case VT_INT : * vtype = VT_INT ;
 break ;
 case VT_UINT : * vtype = VT_UINT ;
 break ;
 case VT_LPSTR : * vtype = VT_LPSTR ;
 break ;
 case VT_LPWSTR : * vtype = VT_LPWSTR ;
 break ;
 case VT_COMPRESSED_LPWSTR : * vtype = VT_COMPRESSED_LPWSTR ;
 break ;
 case VT_FILETIME : * vtype = VT_FILETIME ;
 break ;
 case VT_BLOB : * vtype = VT_BLOB ;
 break ;
 case VT_BLOB_OBJECT : * vtype = VT_BLOB_OBJECT ;
 break ;
 case VT_CLSID : * vtype = VT_CLSID ;
 break ;
 default : DISSECTOR_ASSERT ( FALSE ) ;
 break ;
 }
 if ( modifier ) {
 switch ( modifier ) {
 case VT_VECTOR : * vtype |= VT_VECTOR ;
 break ;
 case VT_ARRAY : * vtype |= VT_ARRAY ;
 break ;
 default : DISSECTOR_ASSERT ( FALSE ) ;
 break ;
 }
 }
 return offset + 2 ;
 }