static VALUE cState_allow_nan_p ( VALUE self ) {
 GET_STATE ( self ) ;
 return state -> allow_nan ? Qtrue : Qfalse ;
 }