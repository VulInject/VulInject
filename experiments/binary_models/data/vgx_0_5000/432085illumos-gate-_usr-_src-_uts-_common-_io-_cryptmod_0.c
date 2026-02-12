static int
aes_cbc_cts_encrypt(struct tmodinfo *tmi, uchar_t *plain, size_t length)
{
int result = CRYPTO_SUCCESS;
unsigned char tmp[DEFAULT_AES_BLOCKLEN];
unsigned char tmp2[DEFAULT_AES_BLOCKLEN];
unsigned char tmp3[DEFAULT_AES_BLOCKLEN];
int nblocks = 0, blockno;
crypto_data_t ct, pt;
crypto_mechanism_t mech;

mech.cm_type = tmi->enc_data.mech_type;
if (tmi->enc_data.ivlen > 0 && tmi->enc_data.ivec != NULL) {
bcopy(tmi->enc_data.ivec, tmp, DEFAULT_AES_BLOCKLEN);
} else {
bzero(tmp, sizeof (tmp));
}
mech.cm_param = NULL;
mech.cm_param_len = 0;

nblocks = (length + DEFAULT_AES_BLOCKLEN - 1) / DEFAULT_AES_BLOCKLEN;

bzero(&ct, sizeof (crypto_data_t));
bzero(&pt, sizeof (crypto_data_t));

if (nblocks == 1) {
pt.cd_format = CRYPTO_DATA_RAW;
pt.cd_length = length;
pt.cd_raw.iov_base = (char *)plain;
pt.cd_raw.iov_len = length;

result = crypto_encrypt(&mech, &pt,
&tmi->enc_data.d_encr_key, NULL, NULL, NULL);

if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt failed: %0x", result);
}
} else {
size_t nleft;

ct.cd_format = CRYPTO_DATA_RAW;
ct.cd_offset = 0;
ct.cd_length = DEFAULT_AES_BLOCKLEN;

pt.cd_format = CRYPTO_DATA_RAW;
pt.cd_offset = 0;
pt.cd_length = DEFAULT_AES_BLOCKLEN;

result = crypto_encrypt_init(&mech,
&tmi->enc_data.d_encr_key,
tmi->enc_data.enc_tmpl,
&tmi->enc_data.ctx, NULL);

if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt_init failed: %0x", result);
goto cleanup;
}

for (blockno = 0; blockno < nblocks - 2; blockno++) {
xorblock(tmp, plain + blockno * DEFAULT_AES_BLOCKLEN);

pt.cd_raw.iov_base = (char *)tmp;
pt.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;

ct.cd_raw.iov_base = (char *)plain +
blockno * DEFAULT_AES_BLOCKLEN;
ct.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;

result = crypto_encrypt_update(tmi->enc_data.ctx,
&pt, &ct, NULL);

if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt_update failed: %0x",
result);
goto cleanup;
}


bcopy(plain + blockno * DEFAULT_AES_BLOCKLEN,
tmp, DEFAULT_AES_BLOCKLEN);
}

xorblock(tmp, plain + (nblocks - 2) * DEFAULT_AES_BLOCKLEN);

pt.cd_raw.iov_base = (char *)tmp;
pt.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;

ct.cd_raw.iov_base = (char *)tmp2;
ct.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;


result = crypto_encrypt_update(tmi->enc_data.ctx,
&pt, &ct, NULL);
if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt_update(2) failed: %0x",
result);
goto cleanup;
}
nleft = length - (nblocks - 1) * DEFAULT_AES_BLOCKLEN;

bzero(tmp3, sizeof (tmp3));

bcopy(plain + (nblocks - 1) * DEFAULT_AES_BLOCKLEN, tmp3,
nleft);


bcopy(tmp2, plain + (nblocks - 1) * DEFAULT_AES_BLOCKLEN,
nleft);

bcopy(tmp2, tmp, DEFAULT_AES_BLOCKLEN);

xorblock(tmp, tmp3);

pt.cd_raw.iov_base = (char *)tmp;
pt.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;

ct.cd_raw.iov_base = (char *)tmp2;
ct.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;


result = crypto_encrypt_update(tmi->enc_data.ctx,
&pt, &ct, NULL);

if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt_update(3) failed: %0x",
result);
goto cleanup;
}

bcopy(tmp2, plain + (nblocks - 2) * DEFAULT_AES_BLOCKLEN,
DEFAULT_AES_BLOCKLEN);


ct.cd_raw.iov_base = (char *)tmp2;
ct.cd_raw.iov_len = DEFAULT_AES_BLOCKLEN;


result = crypto_encrypt_final(tmi->enc_data.ctx, &ct, NULL);
if (result != CRYPTO_SUCCESS) {
cmn_err(CE_WARN, "aes_cbc_cts_encrypt: "
"crypto_encrypt_final(3) failed: %0x",
result);
}
tmi->enc_data.ctx = NULL;
}
cleanup:
bzero(tmp, sizeof (tmp));
bzero(tmp2, sizeof (tmp));
bzero(tmp3, sizeof (tmp));
bzero(tmi->enc_data.block, tmi->enc_data.blocklen);
return (result);
}