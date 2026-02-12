static __le32 *cx25821_update_riscprogram(struct cx25821_channel *chan,
__le32 *rp, unsigned int offset,
unsigned int bpl, u32 sync_line,
unsigned int lines, int fifo_enable,
int field_type)
{
struct cx25821_video_out_data *out = chan->out;
unsigned int line, i;
int dist_betwn_starts = bpl * 2;

*(rp++) = cpu_to_le32(RISC_RESYNC | sync_line);

if (USE_RISC_NOOP_VIDEO) {
for (i = 0; i < NUM_NO_OPS; i++)
*(rp++) = cpu_to_le32(RISC_NOOP);
}


for (line = 0; line < lines; line++) {
*(rp++) = cpu_to_le32(RISC_READ | RISC_SOL | RISC_EOL | bpl);
*(rp++) = cpu_to_le32(out->_data_buf_phys_addr + offset);
*(rp++) = cpu_to_le32(0);	

if ((lines <= NTSC_FIELD_HEIGHT)
|| (line < (NTSC_FIELD_HEIGHT - 1)) || !(out->is_60hz)) {
offset += dist_betwn_starts;
}
}

return rp;
}