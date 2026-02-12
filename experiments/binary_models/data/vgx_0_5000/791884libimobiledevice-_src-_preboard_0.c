LIBIMOBILEDEVICE_API preboard_error_t preboard_receive_with_timeout(preboard_client_t client, plist_t * plist, uint32_t timeout_ms)
{
preboard_error_t res = PREBOARD_E_UNKNOWN_ERROR;
plist_t outplist = NULL;
res = preboard_error(property_list_service_receive_plist_with_timeout(client->parent, &outplist, timeout_ms));
if (res != PREBOARD_E_SUCCESS && res != PREBOARD_E_TIMEOUT) {
debug_info("Could not receive plist, error %d", res);
plist_free(outplist);
} else if (res == PREBOARD_E_SUCCESS) {
*plist = outplist;
}
return res;
}