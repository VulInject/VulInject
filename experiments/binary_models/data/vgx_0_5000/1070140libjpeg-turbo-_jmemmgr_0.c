METHODDEF(jvirt_sarray_ptr)
request_virt_sarray(j_common_ptr cinfo, int pool_id, boolean pre_zero,
JDIMENSION samplesperrow, JDIMENSION numrows,
JDIMENSION maxaccess)

{
my_mem_ptr mem = (my_mem_ptr)cinfo->mem;
jvirt_sarray_ptr result;


if (pool_id != JPOOL_IMAGE)
ERREXIT1(cinfo, JERR_BAD_POOL_ID, pool_id); 


result = (jvirt_sarray_ptr)alloc_small(cinfo, pool_id,
sizeof(struct jvirt_sarray_control));

result->mem_buffer = NULL;    
result->rows_in_array = numrows;
result->samplesperrow = samplesperrow;
result->maxaccess = maxaccess;
result->pre_zero = pre_zero;
result->b_s_open = FALSE;     
result->next = mem->virt_sarray_list; 
mem->virt_sarray_list = result;

return result;
}