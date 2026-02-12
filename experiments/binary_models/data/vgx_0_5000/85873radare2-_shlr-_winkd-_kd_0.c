int kd_send_data_packet(io_desc_t *desc, const uint32_t type, const uint32_t id, const uint8_t *req,
const int req_len, const uint8_t *buf, const uint32_t buf_len) {
kd_packet_t pkt;

if (req_len + buf_len > KD_MAX_PAYLOAD) {
return KD_E_MALFORMED;
}




pkt.leader = KD_PACKET_DATA;
pkt.length = req_len + buf_len;
pkt.checksum = kd_data_checksum (req, req_len) + kd_data_checksum (buf, buf_len);
pkt.id = id;
pkt.type = type;

if (iob_write (desc, (uint8_t *)&pkt, sizeof (kd_packet_t)) < 0) {
return KD_E_IOERR;
}

if (iob_write (desc, (uint8_t *)req, req_len) < 0) {
return KD_E_IOERR;
}

if (buf && iob_write (desc, (uint8_t *)buf, buf_len) < 0) {
return KD_E_IOERR;
}

if (desc->iob->type == KD_IO_PIPE) {
if (iob_write (desc, (uint8_t *)"\xAA", 1) < 0) {
return KD_E_IOERR;
}
}

return KD_E_OK;
}