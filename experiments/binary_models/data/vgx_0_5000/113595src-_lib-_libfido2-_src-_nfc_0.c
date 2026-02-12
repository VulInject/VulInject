static int
nfc_do_tx(fido_dev_t *d, const uint8_t *apdu_ptr, size_t apdu_len)
{
iso7816_header_t h;

if (fido_buf_read(&apdu_ptr, &apdu_len, &h, sizeof(h)) < 0) {
fido_log_debug("%s: header", __func__);
return -1;
}
if (apdu_len < 2) {
fido_log_debug("%s: apdu_len %zu", __func__, apdu_len);
return -1;
}

apdu_len -= 2; 

while (apdu_len > TX_CHUNK_SIZE) {
if (tx_short_apdu(d, &h, apdu_ptr, TX_CHUNK_SIZE, 0x10) < 0) {
fido_log_debug("%s: chain", __func__);
return -1;
}
apdu_ptr += TX_CHUNK_SIZE;
apdu_len -= TX_CHUNK_SIZE;
}

if (tx_short_apdu(d, &h, apdu_ptr, (uint8_t)apdu_len, 0) < 0) {
fido_log_debug("%s: tx_short_apdu", __func__);
return -1;
}

return 0;
}