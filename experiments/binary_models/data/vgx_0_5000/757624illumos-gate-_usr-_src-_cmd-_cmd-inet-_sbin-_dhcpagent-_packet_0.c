boolean_t
send_pkt_v6(dhcp_smach_t *dsmp, dhcp_pkt_t *dpkt, in6_addr_t dest,
stop_func_t *stop, uint_t irt, uint_t mrt)
{
dsmp->dsm_packet_sent = 0;

(void) memset(&dsmp->dsm_send_dest.v6, 0,
sizeof (dsmp->dsm_send_dest.v6));
dsmp->dsm_send_dest.v6.sin6_addr	= dest;
dsmp->dsm_send_dest.v6.sin6_family	= AF_INET6;
dsmp->dsm_send_dest.v6.sin6_port	= htons(IPPORT_DHCPV6S);
dsmp->dsm_send_stop_func		= stop;



assert(dpkt == &dsmp->dsm_send_pkt);



free_pkt_list(&dsmp->dsm_recv_pkt_list);

if (stop == NULL) {
dsmp->dsm_send_timeout = 0;	
} else {
dsmp->dsm_send_timeout = irt;
dsmp->dsm_send_tcenter = mrt;

next_retransmission(dsmp, B_TRUE,
pkt_send_type(dpkt) == DHCPV6_MSG_SOLICIT);
}

return (send_pkt_internal(dsmp));
}