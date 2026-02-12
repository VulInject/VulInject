int external_server_plug_init(const sasl_utils_t *utils,
int max_version,
int *out_version,
sasl_server_plug_t **pluglist,
int *plugcount)
{
if (!out_version || !pluglist || !plugcount)
return SASL_BADPARAM;

if (max_version != SASL_SERVER_PLUG_VERSION) {
utils->log(utils->conn, SASL_LOG_ERR, "EXTERNAL version mismatch");
SETERROR( utils, "EXTERNAL version mismatch" );
return SASL_BADVERS;
}

*out_version = SASL_SERVER_PLUG_VERSION;
*pluglist = external_server_plugins;
*plugcount = 1;
return SASL_OK;
}



typedef struct client_context
{
char *out_buf;
unsigned out_buf_len;
size_t out_buf_len;
void *h;
} client_context_t;