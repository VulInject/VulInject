static int check_sha(void)
{
CRYPT_SHA_CTX mcSha;
Sha           defSha;
int           ret = 0;
byte          mcDigest[CRYPT_SHA_DIGEST_SIZE];
byte          defDigest[SHA_DIGEST_SIZE];

CRYPT_SHA_Initialize(&mcSha);
ret = wc_InitSha(&defSha);
if (ret != 0) {
printf("sha init default failed\n");
return -1;
}

CRYPT_SHA_DataAdd(&mcSha, ourData, OUR_DATA_SIZE);
wc_ShaUpdate(&defSha, ourData, OUR_DATA_SIZE);

CRYPT_SHA_Finalize(&mcSha, mcDigest);
wc_ShaFinal(&defSha, defDigest);

if (memcmp(mcDigest, defDigest, CRYPT_SHA_DIGEST_SIZE) != 0) {
printf("sha final memcmp failed\n");
return -1;
}
printf("sha         mcapi test passed\n");

return 0;
}