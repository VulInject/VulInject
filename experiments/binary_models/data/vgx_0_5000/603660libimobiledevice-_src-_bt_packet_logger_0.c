LIBIMOBILEDEVICE_API bt_packet_logger_error_t bt_packet_logger_start_capture(bt_packet_logger_client_t client, bt_packet_logger_receive_cb_t callback, void* user_data)
{
if (!client || !callback)
return BT_PACKET_LOGGER_E_INVALID_ARG;

bt_packet_logger_error_t res = BT_PACKET_LOGGER_E_UNKNOWN_ERROR;

if (client->worker) {
debug_info("Another syslog capture thread appears to be running already.");
return res;
}


struct bt_packet_logger_worker_thread *btwt = (struct bt_packet_logger_worker_thread*)malloc(sizeof(struct bt_packet_logger_worker_thread));
if (btwt) {
btwt->client = client;
btwt->cbfunc = callback;
btwt->user_data = user_data;

if (thread_new(&client->worker, bt_packet_logger_worker, btwt) == 0) {
res = BT_PACKET_LOGGER_E_SUCCESS;
}
}

return res;
}