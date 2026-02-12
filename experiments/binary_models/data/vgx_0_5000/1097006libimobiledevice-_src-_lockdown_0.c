LIBIMOBILEDEVICE_API lockdownd_error_t lockdownd_client_new(idevice_t device, lockdownd_client_t *client, const char *label)
{
if (!device || !client)
return LOCKDOWN_E_INVALID_ARG;

static struct lockdownd_service_descriptor service = {
.port = 0xf27e,
.ssl_enabled = 0
};

property_list_service_client_t plistclient = NULL;
if (property_list_service_client_new(device, (lockdownd_service_descriptor_t)&service, &plistclient) != PROPERTY_LIST_SERVICE_E_SUCCESS) {
debug_info("could not connect to lockdownd (device %s)", device->udid);
return LOCKDOWN_E_MUX_ERROR;
}

lockdownd_client_t client_loc = (lockdownd_client_t) malloc(sizeof(struct lockdownd_client_private));
client_loc->parent = plistclient;
client_loc->ssl_enabled = 0;
client_loc->session_id = NULL;
client_loc->device = device;
client_loc->cu_key = NULL;
client_loc->cu_key_len = 0;

if (device->udid) {
debug_info("device udid: %s", device->udid);
}

client_loc->label = label ? strdup(label) : NULL;

*client = client_loc;

return LOCKDOWN_E_SUCCESS;
}