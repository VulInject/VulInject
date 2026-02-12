static void process_ir_ctx_payloads(struct amdtp_stream *s, const struct pkt_desc *desc,
unsigned int count, struct snd_pcm_substream *pcm)
{
struct amdtp_am824 *p = s->protocol;
unsigned int pcm_frames = 0;
int i;

for (i = 0; i < count; ++i) {
__be32 *buf = desc->ctx_payload;
unsigned int data_blocks = desc->data_blocks;

if (pcm) {
read_pcm_s32(s, pcm, buf, data_blocks, pcm_frames);
pcm_frames += data_blocks * s->pcm_frame_multiplier;
}

if (p->midi_ports) {
read_midi_messages(s, buf, data_blocks,
desc->data_block_counter);
}

desc = amdtp_stream_next_packet_desc(s, desc);
}
}