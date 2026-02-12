void
graph_segment_list_get(capture_file *cf, struct tcp_graph *tg)
{
GString    *error_string;
tcp_scan_t  ts;

if (!cf || !tg) {
return;
}


ts.direction = COMPARE_ANY_DIR;
ts.tg      = tg;
ts.last    = NULL;
error_string = register_tap_listener("tcp", &ts, "tcp", 0, NULL, tapall_tcpip_packet, NULL, NULL);
if (error_string) {
fprintf(stderr, "wireshark: Couldn't register tcp_graph tap: %s\n",
error_string->str);
g_string_free(error_string, TRUE);
exit(1);   
}
cf_retap_packets(cf);
remove_tap_listener(&ts);
}