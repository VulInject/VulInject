enum mgos_init_result mgos_debug_udp_init(const char *dst) {
uint32_t ip1, ip2, ip3, ip4, port;
if (sscanf(dst, "%u.%u.%u.%u:%u", &ip1, &ip2, &ip3, &ip4, &port) != 5) {
LOG(LL_ERROR, ("Invalid address"));
return MGOS_INIT_DEBUG_INIT_FAILED;
}
IP_ADDR4(&s_dst, ip1, ip2, ip3, ip4);
s_port = port;
struct udp_pcb *upcb = udp_new();
if (upcb == NULL || udp_bind(upcb, IP_ADDR_ANY, 0 ) != ERR_OK) {
return MGOS_INIT_DEBUG_INIT_FAILED;
}
if (s_upcb != NULL) udp_remove(s_upcb);
s_upcb = upcb;
LOG(LL_INFO, ("UDP log set up to %s", dst));
return MGOS_INIT_OK;
}