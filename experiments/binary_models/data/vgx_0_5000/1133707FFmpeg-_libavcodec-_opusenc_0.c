static void opus_packet_assembler(OpusEncContext *s, AVPacket *avpkt)
{
int offset, fsize_needed;


opus_gen_toc(s, avpkt->data, &offset, &fsize_needed);


if (fsize_needed) {
for (int i = 0; i < s->packet.frames - 1; i++) {
offset += write_opuslacing(avpkt->data + offset,
s->frame[i].framebits >> 3);
}
}


for (int i = 0; i < s->packet.frames; i++) {
ff_opus_rc_enc_end(&s->rc[i], avpkt->data + offset,
s->frame[i].framebits >> 3);
offset += s->frame[i].framebits >> 3;
}

avpkt->size = offset;
}