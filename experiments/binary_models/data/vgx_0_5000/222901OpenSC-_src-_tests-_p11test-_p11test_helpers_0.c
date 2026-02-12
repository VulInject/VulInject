int user_login_setup(void **state)
{
token_info_t *info = (token_info_t *) *state;
CK_FUNCTION_LIST_PTR function_pointer = info->function_pointer;
CK_RV rv;

if (prepare_token(info)) {
fail_msg("Could not prepare token.\n");
exit(1);
}

debug_print("Logging in to the token!");
rv = function_pointer->C_Login(info->session_handle, CKU_USER,
token.pin, token.pin_length);

if (rv != CKR_OK) {
fail_msg("Could not login to token with user PIN '%s'\n", token.pin);
exit(1);
}

return 0;
}