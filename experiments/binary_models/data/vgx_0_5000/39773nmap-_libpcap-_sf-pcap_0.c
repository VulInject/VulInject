static int
sf_write_header(pcap_t *p, FILE *fp, int linktype, int snaplen)
{
struct pcap_file_header hdr;

hdr.magic = p->opt.tstamp_precision == PCAP_TSTAMP_PRECISION_NANO ? NSEC_TCPDUMP_MAGIC : TCPDUMP_MAGIC;
hdr.version_major = PCAP_VERSION_MAJOR;
hdr.version_minor = PCAP_VERSION_MINOR;


hdr.thiszone = 0;
hdr.sigfigs = 0;
hdr.snaplen = snaplen;
hdr.linktype = linktype;

if (fwrite((char *)&hdr, sizeof(hdr), 1, fp) != 1)
return (-1);

return (0);
}