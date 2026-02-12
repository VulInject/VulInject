static ssize_t
short_write_callback(struct archive *a, void *client_data, const void *buffer, size_t length)
{
(void)a;

struct checker *checker = client_data;
size_t to_write = length < 100 ? length : 100;
size_t new_len = checker->shortbuf_len + to_write;
char *new_buf = realloc(checker->shortbuf, new_len);
assert(new_buf != NULL);

checker->shortbuf = new_buf;
memcpy(checker->shortbuf + checker->shortbuf_len, buffer, to_write);
checker->shortbuf_len = new_len;

return to_write;
}