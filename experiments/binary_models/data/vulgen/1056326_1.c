static void ident_lookup_failed ( Client * client ) { ircstats . is_abad ++ ; ClearIdentLookupSent ( client ) ; ClearIdentLookup ( client ) ; if ( should_show_connect_info ( client ) ) { sendto_one ( client , NULL , ":%s %s" , me . name , REPORT_FAIL_ID ) ; } } 