static int seq_read_close(AVFormatContext *s)
{
int i;
SeqDemuxContext *seq = s->priv_data;

for (i = 0; i < SEQ_NUM_FRAME_BUFFERS; i++)
av_free(seq->frame_buffers[i].data);

return 0;
}

AVInputFormat ff_tiertexseq_demuxer = {
.name           = "tiertexseq",
.long_name      = NULL_IF_CONFIG_SMALL("Tiertex Limited SEQ"),
.priv_data_size = sizeof(SeqDemuxContext),
.read_probe     = seq_probe,
.read_header    = seq_read_header,
.read_packet    = seq_read_packet,
.read_close     = seq_read_close,
};