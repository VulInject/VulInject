static VALUE cState_check_circular_p ( VALUE self ) {
 GET_STATE ( self ) ;
 return state -> max_nesting ? Qtrue : Qfalse ;
 }