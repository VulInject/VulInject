static VALUE cState_generate ( VALUE self , VALUE obj ) {
 VALUE result = cState_partial_generate ( self , obj ) ;
 GET_STATE ( self ) ;
 ( void ) state ;
 return result ;
 }