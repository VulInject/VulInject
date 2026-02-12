METHODDEF(void)
process_data_simple_main(j_decompress_ptr cinfo, _JSAMPARRAY output_buf,
JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)
{
my_main_ptr main_ptr = (my_main_ptr)cinfo->main;
JDIMENSION rowgroups_avail;


if (!main_ptr->buffer_full) {
if (!(*cinfo->coef->_decompress_data) (cinfo, main_ptr->buffer))
return;                   
main_ptr->buffer_full = TRUE;       
}


rowgroups_avail = (JDIMENSION)cinfo->_min_DCT_scaled_size;



(*cinfo->post->_post_process_data) (cinfo, main_ptr->buffer,
&main_ptr->rowgroup_ctr, rowgroups_avail,
output_buf, out_row_ctr, out_rows_avail);


if (main_ptr->rowgroup_ctr >= rowgroups_avail) {
main_ptr->buffer_full = FALSE;
main_ptr->rowgroup_ctr = 0;
}
}