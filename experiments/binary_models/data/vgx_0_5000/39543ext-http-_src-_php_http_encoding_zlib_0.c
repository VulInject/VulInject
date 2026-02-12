ZEND_RESULT_CODE php_http_encoding_inflate(const char *data, size_t data_len, char **decoded, size_t *decoded_len)
{
z_stream Z;
int status, wbits = PHP_HTTP_WINDOW_BITS_ANY;

memset(&Z, 0, sizeof(z_stream));

retry_raw_inflate:
status = inflateInit2(&Z, wbits);
if (EXPECTED(Z_OK == status)) {
Z.next_in = (Bytef *) data;
Z.avail_in = data_len + 1; 

switch (status = php_http_inflate_rounds(&Z, Z_NO_FLUSH, decoded, decoded_len)) {
case Z_STREAM_END:
inflateEnd(&Z);
return SUCCESS;

case Z_OK:
status = Z_DATA_ERROR;
break;

case Z_DATA_ERROR:

if (PHP_HTTP_WINDOW_BITS_ANY == wbits) {
inflateEnd(&Z);
wbits = PHP_HTTP_WINDOW_BITS_RAW;
goto retry_raw_inflate;
}
break;
}
inflateEnd(&Z);

if (*decoded_len && *decoded) {
efree(*decoded);
}
}

php_error_docref(NULL, E_WARNING, "Could not inflate data: %s", zError(status));
return FAILURE;
}