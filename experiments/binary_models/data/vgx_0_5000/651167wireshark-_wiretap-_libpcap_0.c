static gboolean
libpcap_dump_pcap_ss990417(wtap_dumper *wdh, const wtap_rec *rec,
const guint8 *pd, int *err, gchar **err_info _U_)
{
struct pcaprec_modified_hdr rec_hdr;


if (rec->ts.secs < 0 || rec->ts.secs > G_MAXINT32) {
*err = WTAP_ERR_TIME_STAMP_NOT_SUPPORTED;
return FALSE;
}
rec_hdr.hdr.ts_sec = (guint32) rec->ts.secs;
rec_hdr.hdr.ts_usec = rec->ts.nsecs / 1000;

rec_hdr.ifindex = 0;
rec_hdr.protocol = 0;
rec_hdr.pkt_type = 0;
return libpcap_dump_write_packet(wdh, rec, &rec_hdr.hdr, sizeof rec_hdr,
pd, err);
}