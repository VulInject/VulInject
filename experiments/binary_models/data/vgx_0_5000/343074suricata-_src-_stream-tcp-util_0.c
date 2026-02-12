int StreamTcpUTAddSegmentWithByte(ThreadVars *tv, TcpReassemblyThreadCtx *ra_ctx, TcpStream *stream, uint32_t seq, uint8_t byte, uint16_t len)
{
TcpSegment *s = StreamTcpGetSegment(tv, ra_ctx);
if (s == NULL) {
return -1;
}

s->seq = seq;
TCP_SEG_LEN(s) = len;
uint8_t buf[len];
memset(buf, byte, len);

Packet *p = UTHBuildPacketReal(buf, len, IPPROTO_TCP, "1.1.1.1", "2.2.2.2", 1024, 80);
if (p == NULL) {
return -1;
}
p->tcph->th_seq = htonl(seq);

if (StreamTcpReassembleInsertSegment(tv, ra_ctx, stream, s, p, TCP_GET_SEQ(p), p->payload, p->payload_len) < 0)
return -1;
UTHFreePacket(p);
return 0;
}