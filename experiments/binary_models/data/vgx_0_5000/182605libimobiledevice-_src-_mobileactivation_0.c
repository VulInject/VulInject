LIBIMOBILEDEVICE_API mobileactivation_error_t mobileactivation_get_activation_state(mobileactivation_client_t client, plist_t *state)
{
if (!client || !state)
return MOBILEACTIVATION_E_INVALID_ARG;

plist_t result = NULL;
mobileactivation_error_t ret = mobileactivation_send_command(client, "GetActivationStateRequest", NULL, &result);
if (ret == MOBILEACTIVATION_E_SUCCESS) {
plist_t node = plist_dict_get_item(result, "Value");
if (!node) {
debug_info("ERROR: GetActivationStateRequest command returned success but has no value in reply");
ret = MOBILEACTIVATION_E_UNKNOWN_ERROR;
} else {
*state = plist_copy(node);
}
}
plist_free(result);
result = NULL;

return ret;
}