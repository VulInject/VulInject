WOLFSSL_LOCAL int wc_sce_storeKeyCtx(WOLFSSL* ssl, User_SCEPKCbInfo* info)
{
int ret = 0;

WOLFSSL_ENTER("sce_storeKeyCtx");

if (ssl == NULL || info == NULL)
ret = BAD_FUNC_ARG;

if (ret == 0) {
XMEMCPY(info->sce_masterSecret, ssl->arrays->sce_masterSecret,
SCE_TLS_MASTERSECRET_SIZE);
XMEMCPY(info->sce_clientRandom, ssl->arrays->clientRandom, 32);
XMEMCPY(info->sce_serverRandom, ssl->arrays->serverRandom, 32);

info->sce_cipher = (uint8_t)GetSceCipherSuite(ssl->options.cipherSuite0,
ssl->options.cipherSuite);
}
WOLFSSL_LEAVE("sce_storeKeyCtx", ret);
return ret;
}