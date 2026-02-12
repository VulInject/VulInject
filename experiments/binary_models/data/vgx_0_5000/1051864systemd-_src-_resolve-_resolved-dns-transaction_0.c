static void dns_transaction_close_connection(
DnsTransaction *t,
bool use_graveyard) { 
int r;

assert(t);

if (t->stream) {

LIST_REMOVE(transactions_by_stream, t->stream->transactions, t);


dns_packet_unref(ordered_set_remove(t->stream->write_queue, t->sent));

t->stream = dns_stream_unref(t->stream);
}

t->dns_udp_event_source = sd_event_source_disable_unref(t->dns_udp_event_source);



if (use_graveyard && t->dns_udp_fd >= 0 && t->sent && !t->received) {
r = manager_add_socket_to_graveyard(t->scope->manager, t->dns_udp_fd);
if (r < 0)
log_debug_errno(r, "Failed to add UDP socket to graveyard, closing immediately: %m");
else
TAKE_FD(t->dns_udp_fd);
}

t->dns_udp_fd = safe_close(t->dns_udp_fd);
}