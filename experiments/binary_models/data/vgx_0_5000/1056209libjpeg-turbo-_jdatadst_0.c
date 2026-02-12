METHODDEF(boolean)
empty_mem_output_buffer(j_compress_ptr cinfo)
{
size_t nextsize;
JOCTET *nextbuffer;
my_mem_dest_ptr dest = (my_mem_dest_ptr)cinfo->dest;


nextsize = dest->bufsize * 2;
nextbuffer = (JOCTET *)malloc(nextsize);

if (nextbuffer == NULL)
ERREXIT1(cinfo, JERR_OUT_OF_MEMORY, 10);

memcpy(nextbuffer, dest->buffer, dest->bufsize);

free(dest->newbuffer);

dest->newbuffer = nextbuffer;

dest->pub.next_output_byte = nextbuffer + dest->bufsize;
dest->pub.free_in_buffer = dest->bufsize;

dest->buffer = nextbuffer;
dest->bufsize = nextsize;

return TRUE;
}




METHODDEF(void)
term_destination(j_compress_ptr cinfo)
{
my_dest_ptr dest = (my_dest_ptr)cinfo->dest;
size_t datacount = OUTPUT_BUF_SIZE - dest->pub.free_in_buffer;


if (datacount > 0) {
if (fwrite(dest->buffer, 1, datacount, dest->outfile) != datacount)
ERREXIT(cinfo, JERR_FILE_WRITE);
}
fflush(dest->outfile);

if (ferror(dest->outfile))
ERREXIT(cinfo, JERR_FILE_WRITE);
}