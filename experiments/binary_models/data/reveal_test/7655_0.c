int sort_ft_buf_flush ( MI_SORT_PARAM * sort_param ) {
 SORT_INFO * sort_info = sort_param -> sort_info ;
 SORT_KEY_BLOCKS * key_block = sort_info -> key_block ;
 MYISAM_SHARE * share = sort_info -> info -> s ;
 uint val_off , val_len ;
 int error ;
 SORT_FT_BUF * ft_buf = sort_info -> ft_buf ;
 uchar * from , * to ;
 val_len = share -> ft2_keyinfo . keylength ;
 get_key_full_length_rdonly ( val_off , ft_buf -> lastkey ) ;
 to = ft_buf -> lastkey + val_off ;
 if ( ft_buf -> buf ) {
 error = sort_insert_key ( sort_param , key_block , ft_buf -> lastkey , HA_OFFSET_ERROR ) ;
 for ( from = to + val_len ;
 ! error && from < ft_buf -> buf ;
 from += val_len ) {
 memcpy ( to , from , val_len ) ;
 error = sort_insert_key ( sort_param , key_block , ft_buf -> lastkey , HA_OFFSET_ERROR ) ;
 }
 return error ;
 }
 error = flush_pending_blocks ( sort_param ) ;
 ft_intXstore ( ft_buf -> lastkey + val_off , - ft_buf -> count ) ;
 _mi_dpointer ( sort_info -> info , ft_buf -> lastkey + val_off + HA_FT_WLEN , share -> state . key_root [ sort_param -> key ] ) ;
 sort_info -> key_block = sort_info -> key_block_end - sort_info -> param -> sort_key_blocks ;
 sort_param -> keyinfo = share -> keyinfo + sort_param -> key ;
 share -> state . key_root [ sort_param -> key ] = HA_OFFSET_ERROR ;
 return error ? error : sort_insert_key ( sort_param , sort_info -> key_block , ft_buf -> lastkey , HA_OFFSET_ERROR ) ;
 }