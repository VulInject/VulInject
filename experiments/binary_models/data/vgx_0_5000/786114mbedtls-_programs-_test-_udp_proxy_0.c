static int dispatch_data(mbedtls_net_context *ctx,
const unsigned char *data,
size_t len)
{
int ret;
ctx_buffer *buf = NULL;
if (opt.pack > 0) {
if (outbuf[0].ctx == ctx) {
buf = &outbuf[0];
} else if (outbuf[1].ctx == ctx) {
buf = &outbuf[1];
}

if (buf == NULL) {
return -1;
}

return ctx_buffer_append(buf, data, len);
}

ret = mbedtls_net_send(ctx, data, len);
if (ret < 0) {
mbedtls_printf("net_send returned -%#04x\n", (unsigned int) -ret);
}
return ret;
}

typedef struct {
mbedtls_net_context *dst;
const char *way;
const char *type;
unsigned len;
unsigned char buf[MAX_MSG_SIZE];
} packet;