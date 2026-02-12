int apr_base64_encode( char *encoded, const char *input, int length )
{
if ( ! length )
{
encoded[0] = 0;
return 1; 
}

BIO *b64 = BIO_new(BIO_f_base64());
BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);
BIO *bmem = BIO_new(BIO_s_mem());
b64 = BIO_push(b64, bmem);

BIO_write(b64, input, length);
BIO_flush(b64);

BUF_MEM *bptr;
BIO_get_mem_ptr(b64, &bptr);
memcpy(encoded, bptr->data, bptr->length);
encoded[bptr->length] = 0;
int ret = bptr->length+1;
BIO_free_all(b64);

return ret; 
}