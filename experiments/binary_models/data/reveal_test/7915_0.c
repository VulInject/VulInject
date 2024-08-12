static char * cover_definer_clause ( const char * stmt_str , size_t stmt_length , const char * definer_version_str , uint definer_version_length , const char * stmt_version_str , uint stmt_version_length , const char * keyword_str , uint keyword_length ) {
 char * definer_begin = my_case_str ( stmt_str , stmt_length , C_STRING_WITH_LEN ( " DEFINER" ) ) ;
 char * definer_end = NULL ;
 char * query_str = NULL ;
 char * query_ptr ;
 if ( ! definer_begin ) return NULL ;
 definer_end = my_case_str ( definer_begin , strlen ( definer_begin ) , keyword_str , keyword_length ) ;
 if ( ! definer_end ) return NULL ;
 query_str = alloc_query_str ( stmt_length + 23 ) ;
 query_ptr = strnmov ( query_str , stmt_str , definer_begin - stmt_str ) ;
 query_ptr = strnmov ( query_ptr , C_STRING_WITH_LEN ( "*/ /*!" ) ) ;
 query_ptr = strnmov ( query_ptr , definer_version_str , definer_version_length ) ;
 query_ptr = strnmov ( query_ptr , definer_begin , definer_end - definer_begin ) ;
 query_ptr = strnmov ( query_ptr , C_STRING_WITH_LEN ( "*/ /*!" ) ) ;
 query_ptr = strnmov ( query_ptr , stmt_version_str , stmt_version_length ) ;
 query_ptr = strxmov ( query_ptr , definer_end , NullS ) ;
 return query_str ;
 }