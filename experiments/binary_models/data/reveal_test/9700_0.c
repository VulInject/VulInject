static VALUE cState_space ( VALUE self ) {
 GET_STATE ( self ) ;
 return state -> space ? rb_str_new ( state -> space , state -> space_len ) : rb_str_new2 ( "" ) ;
 }