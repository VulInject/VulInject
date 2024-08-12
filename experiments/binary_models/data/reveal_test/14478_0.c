static void print_field_types ( MYSQL_RES * result ) {
 MYSQL_FIELD * field ;
 uint i = 0 ;
 while ( ( field = mysql_fetch_field ( result ) ) ) {
 tee_fprintf ( PAGER , "Field %3u: `%s`\n" "Catalog: `%s`\n" "Database: `%s`\n" "Table: `%s`\n" "Org_table: `%s`\n" "Type: %s\n" "Collation: %s (%u)\n" "Length: %lu\n" "Max_length: %lu\n" "Decimals: %u\n" "Flags: %s\n\n" , ++ i , field -> name , field -> catalog , field -> db , field -> table , field -> org_table , fieldtype2str ( field -> type ) , get_charset_name ( field -> charsetnr ) , field -> charsetnr , field -> length , field -> max_length , field -> decimals , fieldflags2str ( field -> flags ) ) ;
 }
 tee_puts ( "" , PAGER ) ;
 }