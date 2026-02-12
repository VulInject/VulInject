GLOBAL(void)
jpeg_mem_src(j_decompress_ptr cinfo, const unsigned char *inbuffer,
unsigned long insize)
{
struct jpeg_source_mgr *src;

if (inbuffer == NULL || insize == 0)  
ERREXIT(cinfo, JERR_INPUT_EMPTY);


if (cinfo->src == NULL) {     
cinfo->src = (struct jpeg_source_mgr *)
(*cinfo->mem->alloc_small) ((j_common_ptr)cinfo, JPOOL_PERMANENT,
sizeof(struct jpeg_source_mgr));
} else if (cinfo->src->init_source != init_mem_source) {

ERREXIT(cinfo, JERR_BUFFER_SIZE);
}

src = cinfo->src;
src->init_source = init_mem_source;
src->fill_input_buffer = fill_mem_input_buffer;
src->skip_input_data = skip_input_data;
src->resync_to_restart = jpeg_resync_to_restart; 
src->term_source = term_source;
src->bytes_in_buffer = (size_t)insize;
src->next_input_byte = (const JOCTET *)inbuffer;
}