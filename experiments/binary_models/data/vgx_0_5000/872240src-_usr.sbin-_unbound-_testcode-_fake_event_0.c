static void
fill_buffer_with_reply(sldns_buffer* buffer, struct entry* entry, uint8_t* q,
size_t qlen, int tcp_pkt_counter)
{
struct reply_packet* reppkt;
uint8_t* c;
size_t clen;
log_assert(entry && entry->reply_list);
sldns_buffer_clear(buffer);
reppkt = entry->reply_list;
if(tcp_pkt_counter > 0) {
int i = tcp_pkt_counter;
while(reppkt && i--)
reppkt = reppkt->next;
if(!reppkt) fatal_exit("extra packet read from TCP stream but none is available");
log_pkt("extra_packet ", reppkt->reply_pkt, reppkt->reply_len);
}
if(reppkt->reply_from_hex) {
c = sldns_buffer_begin(reppkt->reply_from_hex);
clen = sldns_buffer_limit(reppkt->reply_from_hex);
if(!c) fatal_exit("out of memory");
} else {
c = reppkt->reply_pkt;
clen = reppkt->reply_len;
}
if(c) {
if(q) adjust_packet(entry, &c, &clen, q, qlen);
sldns_buffer_write(buffer, c, clen);
if(q) free(c);
}
sldns_buffer_flip(buffer);
}