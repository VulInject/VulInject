pbl_node_t * pbl_create_enum_value_node ( pbl_file_descriptor_t * file , int lineno , const char * name , int number ) { pbl_enum_value_descriptor_t * node = g_malloc0 ( sizeof ( pbl_enum_value_descriptor_t ) ) ; pbl_init_node ( & node -> basic_info , file , lineno , PBL_ENUM_VALUE , name ) ; node -> number = number ; return ( pbl_node_t * ) node ; } 