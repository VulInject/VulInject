static krb5_error_code 
encrypt_credencpart(krb5_context context, krb5_cred_enc_part *pcredpart, krb5_keyblock *pkeyblock, krb5_enc_data *pencdata)
{
krb5_error_code 	  retval;
krb5_data 		* scratch;


if ((retval = encode_krb5_enc_cred_part(pcredpart, &scratch)))
return retval;


if (pkeyblock == NULL) {
pencdata->ciphertext.data = scratch->data;
pencdata->ciphertext.length = scratch->length;
krb5_xfree(scratch);
return 0;
}


retval = krb5_encrypt_helper(context, pkeyblock,
KRB5_KEYUSAGE_KRB_CRED_ENCPART,
scratch, pencdata);

if (retval) {
memset(pencdata->ciphertext.data, 0, pencdata->ciphertext.length);
free(pencdata->ciphertext.data);
pencdata->ciphertext.length = 0;
pencdata->ciphertext.data = 0;
}

memset(scratch->data, 0, scratch->length); 
krb5_free_data(context, scratch);

return retval;
}