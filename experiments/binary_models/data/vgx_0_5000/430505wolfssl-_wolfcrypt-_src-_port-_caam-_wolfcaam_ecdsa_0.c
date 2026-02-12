int wc_CAAM_EccSign(const byte* in, int inlen, byte* out, word32* outlen,
WC_RNG *rng, ecc_key *key, int devId)
{
const ecc_set_type* dp;
word32 args[4] = {0};
CAAM_BUFFER buf[9]  = {0};
int ret, keySz;
word32 ecdsel = 0;
byte r[MAX_ECC_BYTES] = {0};
byte s[MAX_ECC_BYTES] = {0};
word32 idx = 0;
byte pk[MAX_ECC_BYTES + WC_CAAM_MAC_SZ] = {0};

if (devId == WOLFSSL_CAAM_DEVID) {
return wc_CAAM_DevEccSign(in, inlen, out, outlen, rng, key);
}

(void)rng;
if (key->dp != NULL) {
dp = key->dp;
}
else {
dp = wc_ecc_get_curve_params(key->idx);
}

if (dp->id != ECC_SECP256R1 && dp->id != ECC_SECP384R1) {
WOLFSSL_MSG("Limiting CAAM to P256/P384 for now");
return CRYPTOCB_UNAVAILABLE;
}


ecdsel = GetECDSEL(dp->id, CAAM_ECDSA_PD);
if (ecdsel == 0) {
WOLFSSL_MSG("Unsupported curve type");
return BAD_FUNC_ARG;
}

keySz  = wc_ecc_size(key);


if (key->blackKey == CAAM_BLACK_KEY_SM) {
buf[idx].TheAddress = (CAAM_ADDRESS)key->blackKey;
args[0] = CAAM_BLACK_KEY_SM; 
buf[idx].Length = keySz;
}
else {
if (key->blackKey == CAAM_BLACK_KEY_CCM) {
if (mp_to_unsigned_bin_len(&key->k, pk, keySz + WC_CAAM_MAC_SZ)
!= MP_OKAY) {
return MP_TO_E;
}
buf[idx].Length = keySz + WC_CAAM_MAC_SZ;
}
else {
if (mp_to_unsigned_bin_len(&key->k, pk, keySz) != MP_OKAY) {
return MP_TO_E;
}
buf[idx].Length = keySz;
}
buf[idx].TheAddress = (CAAM_ADDRESS)pk;
args[0] = key->blackKey; 
}
idx++;


buf[idx].TheAddress = (CAAM_ADDRESS)in;
buf[idx].Length = inlen;
idx++;


buf[idx].TheAddress = (CAAM_ADDRESS)r;
buf[idx].Length = keySz;
idx++;


buf[idx].TheAddress = (CAAM_ADDRESS)s;
buf[idx].Length = keySz;
idx++;

args[1] = ecdsel;
args[2] = inlen;
args[3] = keySz;

ret = wc_caamAddAndWait(buf, idx, args, CAAM_ECDSA_SIGN);
if (ret != 0)
return -1;


{
mp_int mpr, mps;

mp_init(&mpr);
mp_init(&mps);

mp_read_unsigned_bin(&mpr, r, keySz);
mp_read_unsigned_bin(&mps, s, keySz);

ret = StoreECC_DSA_Sig(out, outlen, &mpr, &mps);
mp_free(&mpr);
mp_free(&mps);
if (ret != 0) {
WOLFSSL_MSG("Issue converting to signature");
return -1;
}
}

(void)devId;
return MP_OKAY;
}