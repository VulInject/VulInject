static void
ndo_tattle_error(ndr_stream_t *nds, ndr_ref_t *ref)
{
unsigned char *data;
char hexbuf[NDOBUFSZ];

if (nds->pdu_base_addr != NULL) {
data = (unsigned char *)nds->pdu_base_offset;
if (ref)
data += ref->pdu_offset;
else
data += nds->pdu_scan_offset;

ndo_hexfmt(data, 16, 0, hexbuf, NDOBUFSZ);
} else {
bzero(hexbuf, NDOBUFSZ);
}

ndo_printf(nds, ref, "ERROR=%d REF=%d OFFSET=%d SIZE=%d/%d",
nds->error, nds->error_ref, nds->pdu_scan_offset,
nds->pdu_size, nds->pdu_max_size);
ndo_printf(nds, ref, "      %s", hexbuf);
}