static int wolfSSL_BIO_BASE64_read(WOLFSSL_BIO* bio, void* buf, int len)
{
word32 frmtSz = len;

WOLFSSL_ENTER("wolfSSL_BIO_BASE64_read");

if (Base64_Decode((const byte*)buf, (word32)len, (byte*)buf, &frmtSz) !=0) {
WOLFSSL_MSG("Err doing base64 decode");
return WOLFSSL_FATAL_ERROR;
}

(void)bio;
return (int)frmtSz;
}