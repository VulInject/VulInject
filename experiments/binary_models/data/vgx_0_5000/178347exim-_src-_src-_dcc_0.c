






int dcc_ok = 0;
int dcc_rc = 0;



static int flushbuffer
(int socket, gstring *buffer)
{
int rsp;

rsp = write(socket, buffer->s, buffer->ptr);
DEBUG(D_acl)
debug_printf("DCC: flushbuffer(): Result of the write() = %d\n", rsp);
if(rsp < 0)
{
DEBUG(D_acl)
debug_printf("DCC: flushbuffer(): Error writing buffer to socket: %s\n", strerror(errno));
return errno;
}
DEBUG(D_acl)
debug_printf("DCC: flushbuffer(): Wrote buffer to socket:\n%.*s\n", buffer->ptr, buffer->s);
return 0;
}