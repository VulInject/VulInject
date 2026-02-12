ST_FUNC bool tcc_open_bf(TCCState *s1, const char *filename, int initlen) {
int buflen = initlen? initlen: IO_BUF_SIZE;

BufferedFile *bf = malloc (sizeof (BufferedFile) + buflen);
if (!bf) {
R_LOG_ERROR ("too large buflen");
return false;
}
bf->buf_ptr = bf->buffer;
bf->buf_end = bf->buffer + initlen;
bf->buf_end[0] = CH_EOB;
r_str_ncpy (bf->filename, filename, sizeof (bf->filename));
normalize_slashes (bf->filename);
bf->line_num = 1;
bf->ifndef_macro = 0;
bf->ifdef_stack_ptr = s1->ifdef_stack_ptr;
bf->fd = -1;
bf->prev = s1->file;
s1->file = bf;
return true;
}