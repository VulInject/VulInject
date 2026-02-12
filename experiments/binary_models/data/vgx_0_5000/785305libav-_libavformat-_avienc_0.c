static int64_t avi_start_new_riff(AVFormatContext *s, AVIOContext *pb,
const char *riff_tag, const char *list_tag)
{
AVIContext *avi = s->priv_data;
int64_t loff;
int i;

avi->riff_id++;
for (i = 0; i < s->nb_streams; i++) {
AVIStream *avist = s->streams[i]->priv_data;
avist->indexes.entry = 0;
}

avi->riff_start = ff_start_tag(pb, "RIFF");
ffio_wfourcc(pb, riff_tag);
loff = ff_start_tag(pb, "LIST");
ffio_wfourcc(pb, list_tag);
return loff;
}