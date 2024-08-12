int write_pair ( PyObject * self , buffer_t buffer , const char * name , Py_ssize_t name_length , PyObject * value , unsigned char check_keys , unsigned char uuid_subtype , unsigned char allow_id ) {
 int type_byte ;
 if ( ! allow_id && strcmp ( name , "_id" ) == 0 ) {
 return 1 ;
 }
 type_byte = buffer_save_space ( buffer , 1 ) ;
 if ( type_byte == - 1 ) {
 PyErr_NoMemory ( ) ;
 return 0 ;
 }
 if ( check_keys && ! check_key_name ( name , name_length ) ) {
 return 0 ;
 }
 if ( ! buffer_write_bytes ( buffer , name , name_length + 1 ) ) {
 return 0 ;
 }
 if ( ! write_element_to_buffer ( self , buffer , type_byte , value , check_keys , uuid_subtype , 1 ) ) {
 return 0 ;
 }
 return 1 ;
 }