static void
circuit_send_stream_xoff(edge_connection_t *stream)
{
xoff_cell_t xoff;
uint8_t payload[CELL_PAYLOAD_SIZE];
ssize_t xoff_size;

memset(&xoff, 0, sizeof(xoff));
memset(payload, 0, sizeof(payload));

xoff_cell_set_version(&xoff, 0);

if ((xoff_size = xoff_cell_encode(payload, CELL_PAYLOAD_SIZE, &xoff)) < 0) {
log_warn(LD_BUG, "Failed to encode xon cell");
return;
}

if (connection_edge_send_command(stream, RELAY_COMMAND_XOFF,
(char*)payload, (size_t)xoff_size) == 0) {
stream->xoff_sent = true;
cc_stats_flow_num_xoff_sent++;


if (TO_CONN(stream)->type == CONN_TYPE_AP) {
control_event_stream_status(TO_ENTRY_CONN(TO_CONN(stream)),
STREAM_EVENT_XOFF_SENT,
0);
}
}
}