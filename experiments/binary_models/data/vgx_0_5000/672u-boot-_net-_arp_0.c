void arp_raw_request(struct in_addr source_ip, const uchar *target_ethaddr,
struct in_addr target_ip)
{
uchar *pkt;
struct arp_hdr *arp;
int eth_hdr_size;

debug_cond(DEBUG_DEV_PKT, "ARP broadcast %d\n", arp_wait_try);

pkt = arp_tx_packet;

eth_hdr_size = net_set_ether(pkt, net_bcast_ethaddr, PROT_ARP);
pkt += eth_hdr_size;

arp = (struct arp_hdr *)pkt;

arp->ar_hrd = htons(ARP_ETHER);
arp->ar_pro = htons(PROT_IP);
arp->ar_hln = ARP_HLEN;
arp->ar_pln = ARP_PLEN;
arp->ar_op = htons(ARPOP_REQUEST);

memcpy(&arp->ar_sha, net_ethaddr, ARP_HLEN);	
net_write_ip(&arp->ar_spa, source_ip);		
memcpy(&arp->ar_tha, target_ethaddr, ARP_HLEN);	
net_write_ip(&arp->ar_tpa, target_ip);		

net_send_packet(arp_tx_packet, eth_hdr_size + ARP_HDR_SIZE);
}