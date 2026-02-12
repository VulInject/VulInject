get_keys_sample (gcry_sexp_t *pkey, gcry_sexp_t *skey, int secret_variant)
{
gcry_sexp_t pub_key, sec_key;
int rc;
static const char *secret;


switch (secret_variant)
{
case 0: secret = sample_private_key_1; break;
case 1: secret = sample_private_key_1_1; break;
case 2: secret = sample_private_key_1_2; break;
default: die ("BUG\n");
}

rc = gcry_sexp_sscan (&pub_key, NULL, sample_public_key_1,
strlen (sample_public_key_1));
if (!rc)
rc = gcry_sexp_sscan (&sec_key, NULL, secret, strlen (secret));
if (rc)
die ("converting sample keys failed: %s\n", gcry_strerror (rc));

*pkey = pub_key;
*skey = sec_key;
}