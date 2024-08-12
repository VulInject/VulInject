void do_get_replace_regex ( struct st_command * command ) {
 char * expr = command -> first_argument ;
 free_replace_regex ( ) ;
 if ( * expr == '$' ) {
 VAR * val = var_get ( expr , NULL , 0 , 1 ) ;
 expr = val ? val -> str_val : NULL ;
 }
 if ( expr && * expr && ! ( glob_replace_regex = init_replace_regex ( expr ) ) ) die ( "Could not init replace_regex" ) ;
 command -> last_argument = command -> end ;
 }