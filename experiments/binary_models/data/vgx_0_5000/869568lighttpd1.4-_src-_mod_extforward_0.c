static int mod_extforward_network_read (connection *con,
chunkqueue *cq, off_t max_bytes)
{


union hap_PROXY_hdr hdr;
log_error_st *errh;
const int family = sock_addr_get_family(&con->dst_addr);
int rc = hap_PROXY_recv(con->fd, &hdr, family, SOCK_STREAM);
switch (rc) {
case  2: rc = mod_extforward_hap_PROXY_v2(con, &hdr); break;
case  1: rc = mod_extforward_hap_PROXY_v1(con, &hdr); break;
case  0: return  0; 
case -1: errh = con->srv->errh;
log_perror(errh,__FILE__,__LINE__,"hap-PROXY recv()");
rc = -1; break;
case -2: errh = con->srv->errh;
log_error(errh,__FILE__,__LINE__,
"hap-PROXY proto received invalid/unsupported request");
__attribute_fallthrough__
default: rc = -1; break;
}

handler_ctx *hctx =
con->plugin_ctx[mod_extforward_plugin_data_singleton->id];
con->network_read = hctx->saved_network_read;
hctx->saved_network_read = NULL;
return (0 == rc) ? con->network_read(con, cq, max_bytes) : rc;
}