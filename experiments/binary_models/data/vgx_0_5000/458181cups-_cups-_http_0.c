static ssize_t				
http_read_buffered(http_t *http,	
char   *buffer,	
size_t length)	
{
ssize_t	bytes;			


DEBUG_printf(("http_read_buffered(http=%p, buffer=%p, length=" CUPS_LLFMT ") used=%d", (void *)http, (void *)buffer, CUPS_LLCAST length, http->used));

if (http->used > 0)
{
if (length > (size_t)http->used)
bytes = (ssize_t)http->used;
else
bytes = (ssize_t)length;

DEBUG_printf(("2http_read: Grabbing %d bytes from input buffer.",
(int)bytes));

memcpy(buffer, http->buffer, (size_t)bytes);
http->used -= (int)bytes;

if (http->used > 0)
memmove(http->buffer, http->buffer + bytes, (size_t)http->used);
}
else
bytes = http_read(http, buffer, length);

return (bytes);
}