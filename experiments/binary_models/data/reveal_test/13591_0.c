static char * make_next_duplicate_name ( const char * base , const char * suffix , int count , int max_length ) {
 const char * format ;
 char * result ;
 int unshortened_length ;
 gboolean use_count ;
 if ( count < 1 ) {
 g_warning ( "bad count %d in get_duplicate_name" , count ) ;
 count = 1 ;
 }
 if ( count <= 2 ) {
 switch ( count ) {
 default : {
 g_assert_not_reached ( ) ;
 }
 case 1 : {
 format = FIRST_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 case 2 : {
 format = SECOND_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 }
 use_count = FALSE ;
 }
 else {
 switch ( count % 100 ) {
 case 11 : {
 format = X11TH_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 case 12 : {
 format = X12TH_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 case 13 : {
 format = X13TH_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 default : {
 format = NULL ;
 }
 break ;
 }
 if ( format == NULL ) {
 switch ( count % 10 ) {
 case 1 : {
 format = ST_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 case 2 : {
 format = ND_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 case 3 : {
 format = RD_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 default : {
 format = TH_COPY_DUPLICATE_FORMAT ;
 }
 break ;
 }
 }
 use_count = TRUE ;
 }
 # pragma GCC diagnostic push # pragma GCC diagnostic ignored "-Wformat-nonliteral" if ( use_count ) {
 result = g_strdup_printf ( format , base , count , suffix ) ;
 }
 else {
 result = g_strdup_printf ( format , base , suffix ) ;
 }
 if ( max_length > 0 && ( unshortened_length = strlen ( result ) ) > max_length ) {
 char * new_base ;
 new_base = shorten_utf8_string ( base , unshortened_length - max_length ) ;
 if ( new_base ) {
 g_free ( result ) ;
 if ( use_count ) {
 result = g_strdup_printf ( format , new_base , count , suffix ) ;
 }
 else {
 result = g_strdup_printf ( format , new_base , suffix ) ;
 }
 g_assert ( strlen ( result ) <= max_length ) ;
 g_free ( new_base ) ;
 }
 }
 # pragma GCC diagnostic pop return result ;
 }