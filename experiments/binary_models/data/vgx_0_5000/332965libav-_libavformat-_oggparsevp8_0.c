static uint64_t vp8_gptopts(AVFormatContext *s, int idx,
uint64_t granule, int64_t *dts)
{
struct ogg *ogg = s->priv_data;
struct ogg_stream *os = ogg->streams + idx;

uint64_t pts  = (granule >> 32);
uint32_t dist = (granule >>  3) & 0x07ffffff;

if (!dist)
os->pflags |= AV_PKT_FLAG_KEY;

if (dts)
*dts = pts;

return pts;
}