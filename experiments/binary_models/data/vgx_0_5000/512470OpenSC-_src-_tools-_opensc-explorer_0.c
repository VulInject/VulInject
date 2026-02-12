static int read_and_print_binary_file(sc_file_t *file)
{
u8 *buf;
size_t size = (file->size > 0) ? file->size : SC_MAX_EXT_APDU_RESP_SIZE;
int r, ret = -1;

buf = calloc(size, 1);
if (buf == NULL)
return -1;

r = sc_lock(card);
if (r == SC_SUCCESS)
r = sc_read_binary(card, 0, buf, size, 0);
sc_unlock(card);
if (r < 0) {
check_ret(r, SC_AC_OP_READ, "Read failed", file);
goto err;
}

util_hex_dump_asc(stdout, buf, r, 0);

ret = 0;

err:
free(buf);
return ret;
}