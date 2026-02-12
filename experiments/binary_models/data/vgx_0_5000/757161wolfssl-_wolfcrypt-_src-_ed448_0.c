int wc_ed448_make_key(WC_RNG* rng, int keySz, ed448_key* key)
{
int ret = 0;

if ((rng == NULL) || (key == NULL)) {
ret = BAD_FUNC_ARG;
}


if ((ret == 0) && (keySz != ED448_KEY_SIZE)) {
ret = BAD_FUNC_ARG;
}

if (ret == 0) {
key->pubKeySet = 0;
key->privKeySet = 0;

ret = wc_RNG_GenerateBlock(rng, key->k, ED448_KEY_SIZE);
}
if (ret == 0) {
key->privKeySet = 1;
ret = wc_ed448_make_public(key, key->p, ED448_PUB_KEY_SIZE);
if (ret != 0) {
key->privKeySet = 0;
ForceZero(key->k, ED448_KEY_SIZE);
}
}
if (ret == 0) {

XMEMMOVE(key->k + ED448_KEY_SIZE, key->p, ED448_PUB_KEY_SIZE);
}

return ret;
}