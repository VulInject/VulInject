static void read_pcm_s32(struct amdtp_stream *s, struct snd_pcm_substream *pcm,
__le32 *buffer, unsigned int frames,
unsigned int pcm_frames)
{
struct amdtp_ff *p = s->protocol;
unsigned int channels = p->pcm_channels;
struct snd_pcm_runtime *runtime = pcm->runtime;
unsigned int pcm_buffer_pointer;
int remaining_frames;
u32 *dst;
int i, c;

pcm_buffer_pointer = s->pcm_buffer_pointer + pcm_frames;
pcm_buffer_pointer %= runtime->buffer_size;

dst  = (void *)runtime->dma_area +
frames_to_bytes(runtime, pcm_buffer_pointer);
remaining_frames = runtime->buffer_size - pcm_buffer_pointer;

for (i = 0; i < frames; ++i) {
for (c = 0; c < channels; ++c) {
*dst = le32_to_cpu(buffer[c]) & 0xffffff00;
dst++;
}
buffer += s->data_block_quadlets;
if (--remaining_frames == 0)
dst = (void *)runtime->dma_area;
}
}