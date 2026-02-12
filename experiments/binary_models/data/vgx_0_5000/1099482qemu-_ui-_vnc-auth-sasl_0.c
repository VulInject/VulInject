static int protocol_client_auth_sasl_start_len(VncState *vs, uint8_t *data, size_t len)
{
uint32_t startlen = read_u32(data, 0);

if (startlen > SASL_DATA_MAX_LEN) {
trace_vnc_auth_fail(vs, vs->auth, "SASL start len too large", "");
vnc_client_error(vs);
return -1;
}

if (startlen == 0)
return protocol_client_auth_sasl_start(vs, NULL, 0);

vnc_read_when(vs, protocol_client_auth_sasl_start, startlen);
return 0;
}