void dt_buffered_destroy ( dtrace_hdl_t * dtp ) { free ( dtp -> dt_buffered_buf ) ; dtp -> dt_buffered_offs = 0 ; dtp -> dt_buffered_size = 0 ; } 