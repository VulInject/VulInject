int chc_register(int cipher)
{
int err, kl, idx;

if ((err = cipher_is_valid(cipher)) != CRYPT_OK) {
return err;
}


kl = cipher_descriptor[cipher].block_length;


if (kl <= 8) {
return CRYPT_INVALID_CIPHER;
}


if ((err = cipher_descriptor[cipher].keysize(&kl)) != CRYPT_OK) {
return err;
}

if (kl != cipher_descriptor[cipher].block_length) {
return CRYPT_INVALID_CIPHER;
}


if ((err = hash_is_valid(idx = find_hash("chc_hash"))) != CRYPT_OK) {
return err;
}


hash_descriptor[idx].hashsize  =
hash_descriptor[idx].blocksize = cipher_descriptor[cipher].block_length;


cipher_idx       = cipher;
cipher_blocksize = cipher_descriptor[cipher].block_length;
return CRYPT_OK;
}