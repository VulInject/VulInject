int decrypt_message(test_cert_t *o, token_info_t *info, CK_BYTE *enc_message,
CK_ULONG enc_message_length, test_mech_t *mech, unsigned char **dec_message)
{
CK_RV rv;
CK_FUNCTION_LIST_PTR fp = info->function_pointer;
CK_MECHANISM dec_mechanism = { mech->mech, mech->params, mech->params_len };
CK_ULONG dec_message_length = BUFFER_SIZE;

rv = fp->C_DecryptInit(info->session_handle, &dec_mechanism,
o->private_handle);
if (rv == CKR_KEY_TYPE_INCONSISTENT) {
debug_print(" [SKIP %s ] Not allowed to decrypt with this key?", o->id_str);
return 0;
} else if (rv != CKR_OK) {
debug_print("C_DecryptInit: rv = 0x%.8lX\n", rv);
return -1;
}

*dec_message = malloc(dec_message_length);

always_authenticate(o, info);

rv = fp->C_Decrypt(info->session_handle, enc_message,
enc_message_length, *dec_message, &dec_message_length);
if (rv != CKR_OK) {
free(*dec_message);
debug_print("  C_Decrypt: rv = 0x%.8lX\n", rv);
return -1;
}
return (int) dec_message_length;
}