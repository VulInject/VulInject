static krb5_error_code
make_random_salt(krb5_context context, krb5_keysalt *salt_out)
{
krb5_error_code retval;
unsigned char rndbuf[8];
krb5_data salt, rnd = make_data(rndbuf, sizeof(rndbuf));
unsigned int i;


retval = krb5_c_random_make_octets(context, &rnd);
if (retval)
return retval;
retval = alloc_data(&salt, sizeof(rndbuf) * 2);
if (retval)
return retval;
for (i = 0; i < sizeof(rndbuf); i++) {
salt.data[i * 2] = 0x40 | (rndbuf[i] >> 4);
salt.data[i * 2 + 1] = 0x40 | (rndbuf[i] & 0xf);
}

salt_out->type = KRB5_KDB_SALTTYPE_SPECIAL;
salt_out->data = salt;
return 0;
}