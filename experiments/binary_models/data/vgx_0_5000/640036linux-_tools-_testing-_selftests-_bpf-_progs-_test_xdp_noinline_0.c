int send_icmp_reply(void *data, void *data_end)
{
struct icmphdr *icmp_hdr;
__u16 *next_iph_u16;
__u32 tmp_addr = 0;
struct iphdr *iph;
__u32 csum1 = 0;
__u32 csum = 0;
__u64 off = 0;

if (data + sizeof(struct eth_hdr)
+ sizeof(struct iphdr) + sizeof(struct icmphdr) > data_end)
return XDP_DROP;
off += sizeof(struct eth_hdr);
iph = data + off;
off += sizeof(struct iphdr);
icmp_hdr = data + off;
icmp_hdr->type = 0;
icmp_hdr->checksum += 0x0007;
iph->ttl = 4;
tmp_addr = iph->daddr;
iph->daddr = iph->saddr;
iph->saddr = tmp_addr;
iph->check = 0;
next_iph_u16 = (__u16 *) iph;
for (int i = 0; i < sizeof(struct iphdr) >> 1; i++)
csum += *next_iph_u16++;
iph->check = ~((csum & 0xffff) + (csum >> 16));
return swap_mac_and_send(data, data_end);
}