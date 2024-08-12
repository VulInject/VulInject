static PyObject * _cbson_decode_all ( PyObject * self , PyObject * args ) {
 unsigned int size ;
 Py_ssize_t total_size ;
 const char * string ;
 PyObject * bson ;
 PyObject * dict ;
 PyObject * result ;
 PyObject * as_class = ( PyObject * ) & PyDict_Type ;
 unsigned char tz_aware = 1 ;
 unsigned char uuid_subtype = 3 ;
 if ( ! PyArg_ParseTuple ( args , "O|Obb" , & bson , & as_class , & tz_aware , & uuid_subtype ) ) {
 return NULL ;
 }
 # if PY_MAJOR_VERSION >= 3 if ( ! PyBytes_Check ( bson ) ) {
 PyErr_SetString ( PyExc_TypeError , "argument to decode_all must be a bytes object" ) ;
 # else if ( ! PyString_Check ( bson ) ) {
 PyErr_SetString ( PyExc_TypeError , "argument to decode_all must be a string" ) ;
 # endif return NULL ;
 }
 # if PY_MAJOR_VERSION >= 3 total_size = PyBytes_Size ( bson ) ;
 string = PyBytes_AsString ( bson ) ;
 # else total_size = PyString_Size ( bson ) ;
 string = PyString_AsString ( bson ) ;
 # endif if ( ! string ) {
 return NULL ;
 }
 result = PyList_New ( 0 ) ;
 while ( total_size > 0 ) {
 if ( total_size < 5 ) {
 PyObject * InvalidBSON = _error ( "InvalidBSON" ) ;
 PyErr_SetString ( InvalidBSON , "not enough data for a BSON document" ) ;
 Py_DECREF ( InvalidBSON ) ;
 Py_DECREF ( result ) ;
 return NULL ;
 }
 memcpy ( & size , string , 4 ) ;
 if ( total_size < size ) {
 PyObject * InvalidBSON = _error ( "InvalidBSON" ) ;
 PyErr_SetString ( InvalidBSON , "objsize too large" ) ;
 Py_DECREF ( InvalidBSON ) ;
 Py_DECREF ( result ) ;
 return NULL ;
 }
 if ( string [ size - 1 ] ) {
 PyObject * InvalidBSON = _error ( "InvalidBSON" ) ;
 PyErr_SetString ( InvalidBSON , "bad eoo" ) ;
 Py_DECREF ( InvalidBSON ) ;
 Py_DECREF ( result ) ;
 return NULL ;
 }
 dict = elements_to_dict ( self , string + 4 , size - 5 , as_class , tz_aware , uuid_subtype ) ;
 if ( ! dict ) {
 Py_DECREF ( result ) ;
 return NULL ;
 }
 PyList_Append ( result , dict ) ;
 Py_DECREF ( dict ) ;
 string += size ;
 total_size -= size ;
 }
 return result ;
 }