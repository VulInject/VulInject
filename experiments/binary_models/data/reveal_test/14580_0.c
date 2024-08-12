static int kwajd_read_headers ( struct mspack_system * sys , struct mspack_file * fh , struct mskwajd_header * hdr ) {
 unsigned char buf [ 16 ] ;
 int i ;
 if ( sys -> read ( fh , & buf [ 0 ] , kwajh_SIZEOF ) != kwajh_SIZEOF ) {
 return MSPACK_ERR_READ ;
 }
 if ( ( ( unsigned int ) EndGetI32 ( & buf [ kwajh_Signature1 ] ) != 0x4A41574B ) || ( ( unsigned int ) EndGetI32 ( & buf [ kwajh_Signature2 ] ) != 0xD127F088 ) ) {
 return MSPACK_ERR_SIGNATURE ;
 }
 hdr -> comp_type = EndGetI16 ( & buf [ kwajh_CompMethod ] ) ;
 hdr -> data_offset = EndGetI16 ( & buf [ kwajh_DataOffset ] ) ;
 hdr -> headers = EndGetI16 ( & buf [ kwajh_Flags ] ) ;
 hdr -> length = 0 ;
 hdr -> filename = NULL ;
 hdr -> extra = NULL ;
 hdr -> extra_length = 0 ;
 if ( hdr -> headers & MSKWAJ_HDR_HASLENGTH ) {
 if ( sys -> read ( fh , & buf [ 0 ] , 4 ) != 4 ) return MSPACK_ERR_READ ;
 hdr -> length = EndGetI32 ( & buf [ 0 ] ) ;
 }
 if ( hdr -> headers & MSKWAJ_HDR_HASUNKNOWN1 ) {
 if ( sys -> read ( fh , & buf [ 0 ] , 2 ) != 2 ) return MSPACK_ERR_READ ;
 }
 if ( hdr -> headers & MSKWAJ_HDR_HASUNKNOWN2 ) {
 if ( sys -> read ( fh , & buf [ 0 ] , 2 ) != 2 ) return MSPACK_ERR_READ ;
 i = EndGetI16 ( & buf [ 0 ] ) ;
 if ( sys -> seek ( fh , ( off_t ) i , MSPACK_SYS_SEEK_CUR ) ) return MSPACK_ERR_SEEK ;
 }
 if ( hdr -> headers & ( MSKWAJ_HDR_HASFILENAME | MSKWAJ_HDR_HASFILEEXT ) ) {
 int len ;
 char * fn = ( char * ) sys -> alloc ( sys , ( size_t ) 13 ) ;
 if ( ! ( hdr -> filename = fn ) ) return MSPACK_ERR_NOMEMORY ;
 if ( hdr -> headers & MSKWAJ_HDR_HASFILENAME ) {
 if ( ( len = sys -> read ( fh , & buf [ 0 ] , 9 ) ) < 2 ) return MSPACK_ERR_READ ;
 for ( i = 0 ;
 i < len ;
 i ++ ) if ( ! ( * fn ++ = buf [ i ] ) ) break ;
 if ( i == 9 && buf [ 8 ] != '\0' ) return MSPACK_ERR_DATAFORMAT ;
 if ( sys -> seek ( fh , ( off_t ) ( i + 1 - len ) , MSPACK_SYS_SEEK_CUR ) ) return MSPACK_ERR_SEEK ;
 fn -- ;
 }
 if ( hdr -> headers & MSKWAJ_HDR_HASFILEEXT ) {
 * fn ++ = '.' ;
 if ( ( len = sys -> read ( fh , & buf [ 0 ] , 4 ) ) < 2 ) return MSPACK_ERR_READ ;
 for ( i = 0 ;
 i < len ;
 i ++ ) if ( ! ( * fn ++ = buf [ i ] ) ) break ;
 if ( i == 4 && buf [ 3 ] != '\0' ) return MSPACK_ERR_DATAFORMAT ;
 if ( sys -> seek ( fh , ( off_t ) ( i + 1 - len ) , MSPACK_SYS_SEEK_CUR ) ) return MSPACK_ERR_SEEK ;
 fn -- ;
 }
 * fn = '\0' ;
 }
 if ( hdr -> headers & MSKWAJ_HDR_HASEXTRATEXT ) {
 if ( sys -> read ( fh , & buf [ 0 ] , 2 ) != 2 ) return MSPACK_ERR_READ ;
 i = EndGetI16 ( & buf [ 0 ] ) ;
 hdr -> extra = ( char * ) sys -> alloc ( sys , ( size_t ) i + 1 ) ;
 if ( ! hdr -> extra ) return MSPACK_ERR_NOMEMORY ;
 if ( sys -> read ( fh , hdr -> extra , i ) != i ) return MSPACK_ERR_READ ;
 hdr -> extra [ i ] = '\0' ;
 hdr -> extra_length = i ;
 }
 return MSPACK_ERR_OK ;
 }