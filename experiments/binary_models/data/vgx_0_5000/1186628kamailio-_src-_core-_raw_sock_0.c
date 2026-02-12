inline static int mk_ip_hdr(struct ip* iph, struct in_addr* from,
struct in_addr* to, int payload_len, unsigned char proto)
{
iph->ip_hl = sizeof(struct ip)/4;
iph->ip_v = 4;
iph->ip_tos = tos;

iph->ip_len = RAW_IPHDR_IP_LEN(payload_len + sizeof(struct ip));
iph->ip_id = 0; 
iph->ip_off = 0; 
iph->ip_ttl = cfg_get(core, core_cfg, udp4_raw_ttl);
iph->ip_p = proto;
iph->ip_src = *from;
iph->ip_dst = *to;
iph->ip_sum = 0;

return 0;
}