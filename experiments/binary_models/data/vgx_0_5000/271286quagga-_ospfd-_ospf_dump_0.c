ospf_summary_lsa_dump (struct stream *s, u_int16_t length)
{
struct summary_lsa *sl;
int size;
int i;

sl = (struct summary_lsa *) STREAM_PNT (s);

zlog_debug ("  Summary-LSA");
zlog_debug ("    Network Mask %s", inet_ntoa (sl->mask));

size = ntohs (sl->header.length) - OSPF_LSA_HEADER_SIZE - 4;
for (i = 0; size > 0; size -= 4, i++)
zlog_debug ("    TOS=%d metric %d", sl->tos,
GET_METRIC (sl->metric));
}