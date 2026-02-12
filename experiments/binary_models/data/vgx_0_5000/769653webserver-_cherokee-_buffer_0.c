cherokee_buffer_encode_sha512_digest (cherokee_buffer_t *buf)
{
int           i;
unsigned char digest[SHA512_DIGEST_LENGTH];
CHEROKEE_SHA512_CTX    sha512;

cherokee_SHA512_Init   (&sha512);
cherokee_SHA512_Update (&sha512, (unsigned char*) buf->buf, buf->len);
cherokee_SHA512_Final  (&sha512, digest);

cherokee_buffer_ensure_size (buf, (2 * SHA512_DIGEST_LENGTH)+1);

for (i = 0; i < SHA512_DIGEST_LENGTH; ++i) {
int tmp;

tmp = ((digest[i] >> 4) & 0xf);
buf->buf[i*2] = TO_HEX(tmp);

tmp = (digest[i] & 0xf);
buf->buf[(i*2)+1] = TO_HEX(tmp);
}

buf->buf[2 * SHA512_DIGEST_LENGTH] = '\0';
buf->len = 2 * SHA512_DIGEST_LENGTH;

return ret_ok;
}