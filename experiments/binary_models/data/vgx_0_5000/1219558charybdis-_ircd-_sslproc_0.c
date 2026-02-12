static void
ssl_process_cipher_string(ssl_ctl_t *ctl, ssl_ctl_buf_t *ctl_buf)
{
struct Client *client_p;
const char *cstring;
uint32_t fd;

if(ctl_buf->buflen < 6)
return;         

fd = buf_to_uint32(&ctl_buf->buf[1]);
cstring = (const char *)&ctl_buf->buf[5];

if(EmptyString(cstring))
return;

client_p = find_cli_connid_hash(fd);
if(client_p != NULL && client_p->localClient != NULL)
{
rb_free(client_p->localClient->cipher_string);
client_p->localClient->cipher_string = rb_strdup(cstring);
}
}