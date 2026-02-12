LIBIMOBILEDEVICE_API afc_error_t afc_rename_path(afc_client_t client, const char *from, const char *to)
{
if (!client || !from || !to || !client->afc_packet || !client->parent)
return AFC_E_INVALID_ARG;

uint32_t bytes = 0;
afc_error_t ret = AFC_E_UNKNOWN_ERROR;

size_t from_len = strlen(from);
size_t to_len = strlen(to);

afc_lock(client);

uint32_t data_len = (uint32_t)(from_len+1 + to_len+1);
if (_afc_check_packet_buffer(client, data_len) < 0) {
afc_unlock(client);
debug_info("Failed to realloc packet buffer");
return AFC_E_NO_MEM;
}


memcpy(AFC_PACKET_DATA_PTR, from, from_len+1);
memcpy(AFC_PACKET_DATA_PTR + from_len+1, to, to_len+1);
ret = afc_dispatch_packet(client, AFC_OP_RENAME_PATH, data_len, NULL, 0, &bytes);
if (ret != AFC_E_SUCCESS) {
afc_unlock(client);
return AFC_E_NOT_ENOUGH_DATA;
}

ret = afc_receive_data(client, NULL, &bytes);

afc_unlock(client);

return ret;
}