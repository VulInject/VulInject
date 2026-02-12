void sctp_packet_init(struct sctp_packet *packet,
struct sctp_transport *transport,
__u16 sport, __u16 dport)
{
struct sctp_association *asoc = transport->asoc;
size_t overhead;

pr_debug("%s: packet:%p transport:%p\n", __func__, packet, transport);

packet->transport = transport;
packet->source_port = sport;
packet->destination_port = dport;
INIT_LIST_HEAD(&packet->chunk_list);
if (asoc) {
struct sctp_sock *sp = sctp_sk(asoc->base.sk);
overhead = sp->pf->af->net_header_len;
} else {
overhead = sizeof(struct ipv6hdr);
}
overhead += sizeof(struct sctphdr);
packet->overhead = overhead;
sctp_packet_reset(packet);
packet->vtag = 0;
}