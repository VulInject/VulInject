attr_val * create_attr_rangeval ( int attr , int first , int last ) {
 attr_val * my_val ;
 my_val = emalloc_zero ( sizeof ( * my_val ) ) ;
 my_val -> attr = attr ;
 my_val -> value . r . first = first ;
 my_val -> value . r . last = last ;
 my_val -> type = T_Intrange ;
 return my_val ;
 }