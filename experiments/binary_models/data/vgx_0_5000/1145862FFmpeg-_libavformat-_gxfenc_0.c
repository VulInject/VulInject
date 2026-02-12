static int gxf_write_flt_packet(AVFormatContext *s)
{
GXFContext *gxf = s->priv_data;
AVIOContext *pb = s->pb;
int64_t pos = avio_tell(pb);
int fields_per_flt = (gxf->nb_fields+1) / 1000 + 1;
int flt_entries = gxf->nb_fields / fields_per_flt;
int i = 0;

gxf_write_packet_header(pb, PKT_FLT);

avio_wl32(pb, fields_per_flt); 
avio_wl32(pb, flt_entries); 

if (gxf->flt_entries) {
for (i = 0; i < flt_entries; i++)
avio_wl32(pb, gxf->flt_entries[(i*fields_per_flt)>>1]);
}

ffio_fill(pb, 0, (1000 - i) * 4);

return updatePacketSize(pb, pos);
}