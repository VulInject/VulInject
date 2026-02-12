int wc_curve448_make_key(WC_RNG* rng, int keysize, curve448_key* key)
{
int  ret = 0;

if ((key == NULL) || (rng == NULL)) {
ret = BAD_FUNC_ARG;
}


if ((ret == 0) && (keysize != CURVE448_KEY_SIZE)) {
ret = ECC_BAD_ARG_E;
}

if (ret == 0) {

ret = wc_RNG_GenerateBlock(rng, key->k, keysize);
}
if (ret == 0) {
key->privSet = 1;


key->k[0] &= 0xfc;
key->k[CURVE448_KEY_SIZE-1] |= 0x80;


ret = wc_curve448_make_pub((int)sizeof(key->p), key->p,
(int)sizeof(key->k), key->k);
if (ret == 0) {
key->pubSet = 1;
}
else {
ForceZero(key->k, sizeof(key->k));
XMEMSET(key->p, 0, sizeof(key->p));
}
}

return ret;
}