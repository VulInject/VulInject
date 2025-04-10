int xmlShellSave ( xmlShellCtxtPtr ctxt , char * filename , xmlNodePtr node ATTRIBUTE_UNUSED , xmlNodePtr node2 ATTRIBUTE_UNUSED ) { if ( ( ctxt == NULL ) || ( ctxt -> doc == NULL ) ) { return ( - 1 ) ; } if ( ( filename == NULL ) || ( filename [ 0 ] == 0 ) ) { filename = ctxt -> filename ; } if ( access ( ( char * ) filename , W_OK ) ) { xmlGenericError ( xmlGenericErrorContext , "Cannot save to %s\n" , filename ) ; return ( - 1 ) ; } switch ( ctxt -> doc -> type ) { case XML_DOCUMENT_NODE : if ( xmlSaveFile ( ( char * ) filename , ctxt -> doc ) < 0 ) { xmlGenericError ( xmlGenericErrorContext , "Failed to save to %s\n" , filename ) ; } break ; case XML_HTML_DOCUMENT_NODE : if ( htmlSaveFile ( ( char * ) filename , ctxt -> doc ) < 0 ) { xmlGenericError ( xmlGenericErrorContext , "Failed to save to %s\n" , filename ) ; } if ( xmlSaveFile ( ( char * ) filename , ctxt -> doc ) < 0 ) { xmlGenericError ( xmlGenericErrorContext , "Failed to save to %s\n" , filename ) ; } break ; default : xmlGenericError ( xmlGenericErrorContext , "To save to subparts of a document use the 'write' command\n" ) ; return ( - 1 ) ; } return ( 0 ) ; } 