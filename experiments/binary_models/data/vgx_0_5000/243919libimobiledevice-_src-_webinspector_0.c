LIBIMOBILEDEVICE_API webinspector_error_t webinspector_client_new(idevice_t device, lockdownd_service_descriptor_t service, webinspector_client_t * client)
{
*client = NULL;

if (!device || !service || service->port == 0 || !client || *client) {
debug_info("Incorrect parameter passed to webinspector_client_new.");
return WEBINSPECTOR_E_INVALID_ARG;
}

debug_info("Creating webinspector_client, port = %d.", service->port);

property_list_service_client_t plclient = NULL;
webinspector_error_t ret = webinspector_error(property_list_service_client_new(device, service, &plclient));
if (ret != WEBINSPECTOR_E_SUCCESS) {
debug_info("Creating a property list client failed. Error: %i", ret);
return ret;
}

webinspector_client_t client_loc = (webinspector_client_t) malloc(sizeof(struct webinspector_client_private));
client_loc->parent = plclient;

*client = client_loc;

debug_info("webinspector_client successfully created.");
return 0;
}