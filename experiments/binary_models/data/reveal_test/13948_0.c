void * my_str_malloc_mysqld ( size_t size ) {
 return my_malloc ( size , MYF ( MY_FAE ) ) ;
 }