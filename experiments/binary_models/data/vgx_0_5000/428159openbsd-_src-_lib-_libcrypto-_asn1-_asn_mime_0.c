int
i2d_ASN1_bio_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
const ASN1_ITEM *it)
{

if (flags & SMIME_STREAM) {
BIO *bio, *tbio;
bio = BIO_new_NDEF(out, val, it);
if (!bio) {
ASN1error(ERR_R_MALLOC_FAILURE);
return 0;
}
SMIME_crlf_copy(in, bio, flags);
(void)BIO_flush(bio);

do {
tbio = BIO_pop(bio);
BIO_free(bio);
bio = tbio;
} while (bio != out);
}

else
ASN1_item_i2d_bio(it, out, val);
return 1;
}