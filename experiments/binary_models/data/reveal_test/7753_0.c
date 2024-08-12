static PyObject * elements_to_dict ( PyObject * self , const char * string , int max , PyObject * as_class , unsigned char tz_aware , unsigned char uuid_subtype ) {
 int position = 0 ;
 PyObject * dict = PyObject_CallObject ( as_class , NULL ) ;
 if ( ! dict ) {
 return NULL ;
 }
 while ( position < max ) {
 PyObject * name ;
 PyObject * value ;
 int type = ( int ) string [ position ++ ] ;
 int name_length = strlen ( string + position ) ;
 if ( position + name_length >= max ) {
 PyObject * InvalidBSON = _error ( "InvalidBSON" ) ;
 PyErr_SetNone ( InvalidBSON ) ;
 Py_DECREF ( InvalidBSON ) ;
 Py_DECREF ( dict ) ;
 return NULL ;
 }
 name = PyUnicode_DecodeUTF8 ( string + position , name_length , "strict" ) ;
 if ( ! name ) {
 Py_DECREF ( dict ) ;
 return NULL ;
 }
 position += name_length + 1 ;
 value = get_value ( self , string , & position , type , max - position , as_class , tz_aware , uuid_subtype ) ;
 if ( ! value ) {
 Py_DECREF ( name ) ;
 Py_DECREF ( dict ) ;
 return NULL ;
 }
 PyObject_SetItem ( dict , name , value ) ;
 Py_DECREF ( name ) ;
 Py_DECREF ( value ) ;
 }
 return dict ;
 }