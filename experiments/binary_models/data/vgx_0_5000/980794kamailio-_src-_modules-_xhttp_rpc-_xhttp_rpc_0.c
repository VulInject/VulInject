static int rpc_struct_printf(struct rpc_data_struct* rpc_s, char* member_name, char* fmt, ...)
{
va_list ap;
char buf[PRINT_VALUE_BUF_LEN];
int len;
str _name,_body;
rpc_ctx_t *ctx = rpc_s->ctx;

if (!ctx) {
LM_ERR("Invalid context\n");
return -1;
}

va_start(ap, fmt);
len=vsnprintf(buf, PRINT_VALUE_BUF_LEN, fmt, ap);
va_end(ap);
if ((len<0) || (len>PRINT_VALUE_BUF_LEN)){
LM_ERR("buffer size exceeded [%d]\n", PRINT_VALUE_BUF_LEN);
return -1;
}

_name.s = member_name;
_name.len = strlen(member_name);
_body.s = buf;
_body.len = len;
if (0!=xhttp_rpc_build_content(ctx, &_body, &_name)) return -1;

return 0;
}