VALUE rb_dlhandle_disable_close ( VALUE self ) {
 struct dl_handle * dlhandle ;
 Data_Get_Struct ( self , struct dl_handle , dlhandle ) ;
 dlhandle -> enable_close = 0 ;
 return Qnil ;
 }