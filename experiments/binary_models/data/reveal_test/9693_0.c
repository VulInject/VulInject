static VALUE cState_buffer_initial_length_set ( VALUE self , VALUE buffer_initial_length ) {
 long initial_length ;
 GET_STATE ( self ) ;
 Check_Type ( buffer_initial_length , T_FIXNUM ) ;
 initial_length = FIX2LONG ( buffer_initial_length ) ;
 if ( initial_length > 0 ) {
 state -> buffer_initial_length = initial_length ;
 }
 return Qnil ;
 }