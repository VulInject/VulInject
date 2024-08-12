static void descript ( MI_CHECK * param , register MI_INFO * info , char * name ) {
 uint key , keyseg_nr , field , start ;
 reg3 MI_KEYDEF * keyinfo ;
 reg2 HA_KEYSEG * keyseg ;
 reg4 const char * text ;
 char buff [ 160 ] , length [ 10 ] , * pos , * end ;
 enum en_fieldtype type ;
 MYISAM_SHARE * share = info -> s ;
 char llbuff [ 22 ] , llbuff2 [ 22 ] ;
 DBUG_ENTER ( "describe" ) ;
 printf ( "\nMyISAM file: %s\n" , name ) ;
 fputs ( "Record format: " , stdout ) ;
 if ( share -> options & HA_OPTION_COMPRESS_RECORD ) puts ( "Compressed" ) ;
 else if ( share -> options & HA_OPTION_PACK_RECORD ) puts ( "Packed" ) ;
 else puts ( "Fixed length" ) ;
 printf ( "Character set: %s (%d)\n" , get_charset_name ( share -> state . header . language ) , share -> state . header . language ) ;
 if ( param -> testflag & T_VERBOSE ) {
 printf ( "File-version: %d\n" , ( int ) share -> state . header . file_version [ 3 ] ) ;
 if ( share -> state . create_time ) {
 get_date ( buff , 1 , share -> state . create_time ) ;
 printf ( "Creation time: %s\n" , buff ) ;
 }
 if ( share -> state . check_time ) {
 get_date ( buff , 1 , share -> state . check_time ) ;
 printf ( "Recover time: %s\n" , buff ) ;
 }
 pos = buff ;
 if ( share -> state . changed & STATE_CRASHED ) strmov ( buff , "crashed" ) ;
 else {
 if ( share -> state . open_count ) pos = strmov ( pos , "open," ) ;
 if ( share -> state . changed & STATE_CHANGED ) pos = strmov ( pos , "changed," ) ;
 else pos = strmov ( pos , "checked," ) ;
 if ( ! ( share -> state . changed & STATE_NOT_ANALYZED ) ) pos = strmov ( pos , "analyzed," ) ;
 if ( ! ( share -> state . changed & STATE_NOT_OPTIMIZED_KEYS ) ) pos = strmov ( pos , "optimized keys," ) ;
 if ( ! ( share -> state . changed & STATE_NOT_SORTED_PAGES ) ) pos = strmov ( pos , "sorted index pages," ) ;
 pos [ - 1 ] = 0 ;
 }
 printf ( "Status: %s\n" , buff ) ;
 if ( share -> base . auto_key ) {
 printf ( "Auto increment key: %13d Last value: %13s\n" , share -> base . auto_key , llstr ( share -> state . auto_increment , llbuff ) ) ;
 }
 if ( share -> options & ( HA_OPTION_CHECKSUM | HA_OPTION_COMPRESS_RECORD ) ) printf ( "Checksum: %23s\n" , llstr ( info -> state -> checksum , llbuff ) ) ;
 if ( share -> options & HA_OPTION_DELAY_KEY_WRITE ) printf ( "Keys are only flushed at close\n" ) ;
 }
 printf ( "Data records: %13s Deleted blocks: %13s\n" , llstr ( info -> state -> records , llbuff ) , llstr ( info -> state -> del , llbuff2 ) ) ;
 if ( param -> testflag & T_SILENT ) DBUG_VOID_RETURN ;
 if ( param -> testflag & T_VERBOSE ) {
 # ifdef USE_RELOC printf ( "Init-relocation: %13s\n" , llstr ( share -> base . reloc , llbuff ) ) ;
 # endif printf ( "Datafile parts: %13s Deleted data: %13s\n" , llstr ( share -> state . split , llbuff ) , llstr ( info -> state -> empty , llbuff2 ) ) ;
 printf ( "Datafile pointer (bytes):%9d Keyfile pointer (bytes):%9d\n" , share -> rec_reflength , share -> base . key_reflength ) ;
 printf ( "Datafile length: %13s Keyfile length: %13s\n" , llstr ( info -> state -> data_file_length , llbuff ) , llstr ( info -> state -> key_file_length , llbuff2 ) ) ;
 if ( info -> s -> base . reloc == 1L && info -> s -> base . records == 1L ) puts ( "This is a one-record table" ) ;
 else {
 if ( share -> base . max_data_file_length != HA_OFFSET_ERROR || share -> base . max_key_file_length != HA_OFFSET_ERROR ) printf ( "Max datafile length: %13s Max keyfile length: %13s\n" , llstr ( share -> base . max_data_file_length - 1 , llbuff ) , ullstr ( share -> base . max_key_file_length - 1 , llbuff2 ) ) ;
 }
 }
 printf ( "Recordlength: %13d\n" , ( int ) share -> base . pack_reclength ) ;
 if ( ! mi_is_all_keys_active ( share -> state . key_map , share -> base . keys ) ) {
 longlong2str ( share -> state . key_map , buff , 2 ) ;
 printf ( "Using only keys '%s' of %d possibly keys\n" , buff , share -> base . keys ) ;
 }
 puts ( "\ntable description:" ) ;
 printf ( "Key Start Len Index Type" ) ;
 if ( param -> testflag & T_VERBOSE ) printf ( " Rec/key Root Blocksize" ) ;
 ( void ) putchar ( '\n' ) ;
 for ( key = keyseg_nr = 0 , keyinfo = & share -> keyinfo [ 0 ] ;
 key < share -> base . keys ;
 key ++ , keyinfo ++ ) {
 keyseg = keyinfo -> seg ;
 if ( keyinfo -> flag & HA_NOSAME ) text = "unique " ;
 else if ( keyinfo -> flag & HA_FULLTEXT ) text = "fulltext " ;
 else text = "multip." ;
 pos = buff ;
 if ( keyseg -> flag & HA_REVERSE_SORT ) * pos ++ = '-' ;
 pos = strmov ( pos , type_names [ keyseg -> type ] ) ;
 * pos ++ = ' ' ;
 * pos = 0 ;
 if ( keyinfo -> flag & HA_PACK_KEY ) pos = strmov ( pos , prefix_packed_txt ) ;
 if ( keyinfo -> flag & HA_BINARY_PACK_KEY ) pos = strmov ( pos , bin_packed_txt ) ;
 if ( keyseg -> flag & HA_SPACE_PACK ) pos = strmov ( pos , diff_txt ) ;
 if ( keyseg -> flag & HA_BLOB_PART ) pos = strmov ( pos , blob_txt ) ;
 if ( keyseg -> flag & HA_NULL_PART ) pos = strmov ( pos , null_txt ) ;
 * pos = 0 ;
 printf ( "%-4d%-6ld%-3d %-8s%-21s" , key + 1 , ( long ) keyseg -> start + 1 , keyseg -> length , text , buff ) ;
 if ( share -> state . key_root [ key ] != HA_OFFSET_ERROR ) llstr ( share -> state . key_root [ key ] , buff ) ;
 else buff [ 0 ] = 0 ;
 if ( param -> testflag & T_VERBOSE ) printf ( "%11lu %12s %10d" , share -> state . rec_per_key_part [ keyseg_nr ++ ] , buff , keyinfo -> block_length ) ;
 ( void ) putchar ( '\n' ) ;
 while ( ( ++ keyseg ) -> type != HA_KEYTYPE_END ) {
 pos = buff ;
 if ( keyseg -> flag & HA_REVERSE_SORT ) * pos ++ = '-' ;
 pos = strmov ( pos , type_names [ keyseg -> type ] ) ;
 * pos ++ = ' ' ;
 if ( keyseg -> flag & HA_SPACE_PACK ) pos = strmov ( pos , diff_txt ) ;
 if ( keyseg -> flag & HA_BLOB_PART ) pos = strmov ( pos , blob_txt ) ;
 if ( keyseg -> flag & HA_NULL_PART ) pos = strmov ( pos , null_txt ) ;
 * pos = 0 ;
 printf ( " %-6ld%-3d %-21s" , ( long ) keyseg -> start + 1 , keyseg -> length , buff ) ;
 if ( param -> testflag & T_VERBOSE ) printf ( "%11lu" , share -> state . rec_per_key_part [ keyseg_nr ++ ] ) ;
 ( void ) putchar ( '\n' ) ;
 }
 keyseg ++ ;
 }
 if ( share -> state . header . uniques ) {
 MI_UNIQUEDEF * uniqueinfo ;
 puts ( "\nUnique Key Start Len Nullpos Nullbit Type" ) ;
 for ( key = 0 , uniqueinfo = & share -> uniqueinfo [ 0 ] ;
 key < share -> state . header . uniques ;
 key ++ , uniqueinfo ++ ) {
 my_bool new_row = 0 ;
 char null_bit [ 8 ] , null_pos [ 8 ] ;
 printf ( "%-8d%-5d" , key + 1 , uniqueinfo -> key + 1 ) ;
 for ( keyseg = uniqueinfo -> seg ;
 keyseg -> type != HA_KEYTYPE_END ;
 keyseg ++ ) {
 if ( new_row ) fputs ( " " , stdout ) ;
 null_bit [ 0 ] = null_pos [ 0 ] = 0 ;
 if ( keyseg -> null_bit ) {
 sprintf ( null_bit , "%d" , keyseg -> null_bit ) ;
 sprintf ( null_pos , "%ld" , ( long ) keyseg -> null_pos + 1 ) ;
 }
 printf ( "%-7ld%-5d%-9s%-10s%-30s\n" , ( long ) keyseg -> start + 1 , keyseg -> length , null_pos , null_bit , type_names [ keyseg -> type ] ) ;
 new_row = 1 ;
 }
 }
 }
 if ( param -> verbose > 1 ) {
 char null_bit [ 8 ] , null_pos [ 8 ] ;
 printf ( "\nField Start Length Nullpos Nullbit Type" ) ;
 if ( share -> options & HA_OPTION_COMPRESS_RECORD ) printf ( " Huff tree Bits" ) ;
 ( void ) putchar ( '\n' ) ;
 start = 1 ;
 for ( field = 0 ;
 field < share -> base . fields ;
 field ++ ) {
 if ( share -> options & HA_OPTION_COMPRESS_RECORD ) type = share -> rec [ field ] . base_type ;
 else type = ( enum en_fieldtype ) share -> rec [ field ] . type ;
 end = strmov ( buff , field_pack [ type ] ) ;
 if ( share -> options & HA_OPTION_COMPRESS_RECORD ) {
 if ( share -> rec [ field ] . pack_type & PACK_TYPE_SELECTED ) end = strmov ( end , ", not_always" ) ;
 if ( share -> rec [ field ] . pack_type & PACK_TYPE_SPACE_FIELDS ) end = strmov ( end , ", no empty" ) ;
 if ( share -> rec [ field ] . pack_type & PACK_TYPE_ZERO_FILL ) {
 sprintf ( end , ", zerofill(%d)" , share -> rec [ field ] . space_length_bits ) ;
 end = strend ( end ) ;
 }
 }
 if ( buff [ 0 ] == ',' ) strmov ( buff , buff + 2 ) ;
 int10_to_str ( ( long ) share -> rec [ field ] . length , length , 10 ) ;
 null_bit [ 0 ] = null_pos [ 0 ] = 0 ;
 if ( share -> rec [ field ] . null_bit ) {
 sprintf ( null_bit , "%d" , share -> rec [ field ] . null_bit ) ;
 sprintf ( null_pos , "%d" , share -> rec [ field ] . null_pos + 1 ) ;
 }
 printf ( "%-6d%-6d%-7s%-8s%-8s%-35s" , field + 1 , start , length , null_pos , null_bit , buff ) ;
 if ( share -> options & HA_OPTION_COMPRESS_RECORD ) {
 if ( share -> rec [ field ] . huff_tree ) printf ( "%3d %2d" , ( uint ) ( share -> rec [ field ] . huff_tree - share -> decode_trees ) + 1 , share -> rec [ field ] . huff_tree -> quick_table_bits ) ;
 }
 ( void ) putchar ( '\n' ) ;
 start += share -> rec [ field ] . length ;
 }
 }
 DBUG_VOID_RETURN ;
 }