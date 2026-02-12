static int prepare4(struct rxe_av *av, struct rxe_pkt_info *pkt,
struct sk_buff *skb)
{
struct rxe_qp *qp = pkt->qp;
struct dst_entry *dst;
bool xnet = false;
__be16 df = htons(IP_DF);
struct in_addr *saddr = &av->sgid_addr._sockaddr_in.sin_addr;
struct in_addr *daddr = &av->dgid_addr._sockaddr_in.sin_addr;

dst = rxe_find_route(skb->dev, qp, av);
if (!dst) {
rxe_dbg_qp(qp, "Host not reachable\n");
return -EHOSTUNREACH;
}

prepare_udp_hdr(skb, cpu_to_be16(qp->src_port),
cpu_to_be16(ROCE_V2_UDP_DPORT));

prepare_ipv4_hdr(dst, skb, saddr->s_addr, daddr->s_addr, IPPROTO_UDP,
av->grh.traffic_class, av->grh.hop_limit, df, xnet);

dst_release(dst);
return 0;
}