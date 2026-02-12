static ssize_t gskit_send(struct Curl_cfilter *cf, struct Curl_easy *data,
const void *mem, size_t len, CURLcode *curlcode)
{
struct connectdata *conn = cf->conn;
struct ssl_connect_data *connssl = cf->ctx;
CURLcode cc = CURLE_SEND_ERROR;
int written;

DEBUGASSERT(BACKEND);

if(pipe_ssloverssl(cf, SOS_WRITE) >= 0) {
cc = gskit_status(data,
gsk_secure_soc_write(BACKEND->handle,
(char *) mem, (int) len, &written),
"gsk_secure_soc_write()", CURLE_SEND_ERROR);
if(cc == CURLE_OK)
if(pipe_ssloverssl(cf, SOS_WRITE) < 0)
cc = CURLE_SEND_ERROR;
}
if(cc != CURLE_OK) {
*curlcode = cc;
written = -1;
}
return (ssize_t) written; 
}