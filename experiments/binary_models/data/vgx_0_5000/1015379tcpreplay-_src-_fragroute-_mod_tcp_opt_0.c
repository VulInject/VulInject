int
tcp_opt_apply(void *d, struct pktq *pktq)
{
struct tcp_opt *opt = (struct tcp_opt *)d;
struct pkt *pkt;

TAILQ_FOREACH(pkt, pktq, pkt_next) {
size_t len;
uint16_t eth_type = htons(pkt->pkt_eth->eth_type);

len = inet_add_option(eth_type, pkt->pkt_ip,
sizeof(pkt->pkt_data) - ETH_HDR_LEN,
IP_PROTO_TCP, opt, opt->opt_len);

if (len > 0) {
pkt->pkt_end += len;
pkt_decorate(pkt);
inet_checksum(eth_type, pkt->pkt_ip, pkt->pkt_end - pkt->pkt_eth_data);
}
}
return (0);
}

struct mod mod_tcp_opt = {
"tcp_opt",                    
"tcp_opt mss|wscale <size>|raw <byte stream>",            
tcp_opt_open,                    
tcp_opt_apply,                    
tcp_opt_close                    
};