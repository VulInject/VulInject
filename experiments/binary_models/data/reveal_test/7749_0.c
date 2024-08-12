static int write_element_to_buffer ( PyObject * self , buffer_t buffer , int type_byte , PyObject * value , unsigned char check_keys , unsigned char uuid_subtype , unsigned char first_attempt ) {
 int result ;
 if ( Py_EnterRecursiveCall ( " while encoding an object to BSON " ) ) return 0 ;
 result = _write_element_to_buffer ( self , buffer , type_byte , value , check_keys , uuid_subtype , first_attempt ) ;
 Py_LeaveRecursiveCall ( ) ;
 return result ;
 }