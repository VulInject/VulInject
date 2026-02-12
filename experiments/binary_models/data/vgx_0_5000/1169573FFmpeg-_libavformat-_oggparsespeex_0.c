static int speex_packet(AVFormatContext *s, int idx)
{
struct ogg *ogg = s->priv_data;
struct ogg_stream *os = ogg->streams + idx;
struct speex_params *spxp = os->private;
int packet_size = spxp->packet_size;

if (os->flags & OGG_FLAG_EOS && os->lastpts != AV_NOPTS_VALUE &&
os->granule > 0) {

spxp->final_packet_duration = os->granule - os->lastpts -
packet_size * (ogg_page_packets(os) - 1);
}

if (!os->lastpts && os->granule > 0)

os->lastpts = os->lastdts = os->granule - packet_size *
ogg_page_packets(os);
if (os->flags & OGG_FLAG_EOS && os->segp == os->nsegs &&
spxp->final_packet_duration)

os->pduration = spxp->final_packet_duration;
else
os->pduration = packet_size;

return 0;
}

const struct ogg_codec ff_speex_codec = {
.magic = "Speex   ",
.magicsize = 8,
.header = speex_header,
.packet = speex_packet,
.nb_header = 2,
};