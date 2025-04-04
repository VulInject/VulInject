int PS_ExpectTokenType ( script_t * script , int type , int subtype , token_t * token ) { char str [ MAX_TOKEN ] ; if ( ! PS_ReadToken ( script , token ) ) { ScriptError ( script , "couldn't read expected token" ) ; return 0 ; } if ( token -> type != type ) { strcpy ( str , "" ) ; if ( type == TT_STRING ) { strcpy ( str , "string" ) ; } if ( type == TT_LITERAL ) { strcpy ( str , "literal" ) ; } if ( type == TT_NUMBER ) { strcpy ( str , "number" ) ; } if ( type == TT_NAME ) { strcpy ( str , "name" ) ; } if ( type == TT_PUNCTUATION ) { strcpy ( str , "punctuation" ) ; } ScriptError ( script , "expected a %s, found %s" , str , token -> string ) ; return 0 ; } if ( token -> type == TT_NUMBER ) { if ( ( token -> subtype & subtype ) != subtype ) { strcpy ( str , "" ) ; if ( subtype & TT_DECIMAL ) { strcpy ( str , "decimal" ) ; } if ( subtype & TT_HEX ) { strcpy ( str , "hex" ) ; } if ( subtype & TT_OCTAL ) { strcpy ( str , "octal" ) ; } if ( subtype & TT_BINARY ) { strcpy ( str , "binary" ) ; } if ( subtype & TT_LONG ) { strcat ( str , " long" ) ; } if ( subtype & TT_UNSIGNED ) { strcat ( str , " unsigned" ) ; } if ( subtype & TT_FLOAT ) { strcat ( str , " float" ) ; } if ( subtype & TT_INTEGER ) { strcat ( str , " integer" ) ; } ScriptError ( script , "expected %s, found %s" , str , token -> string ) ; return 0 ; } } if ( token -> type == TT_PUNCTUATION ) { if ( subtype < 0 ) { ScriptError ( script , "BUG: wrong punctuation subtype" ) ; return 0 ; } } return 1 ; } 