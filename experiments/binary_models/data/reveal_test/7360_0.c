void free_sets ( REP_SETS * sets ) {
 my_free ( sets -> set_buffer ) ;
 my_free ( sets -> bit_buffer ) ;
 return ;
 }