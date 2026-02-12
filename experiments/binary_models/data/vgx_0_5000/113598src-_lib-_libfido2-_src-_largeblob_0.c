static int
largeblob_get_rx(fido_dev_t *dev, fido_blob_t **chunk, int *ms)
{
unsigned char reply[FIDO_MAXMSG];
int reply_len, r;

*chunk = NULL;
if ((reply_len = fido_rx(dev, CTAP_CMD_CBOR, &reply, sizeof(reply),
ms)) < 0) {
fido_log_debug("%s: fido_rx", __func__);
return FIDO_ERR_RX;
}
if ((*chunk = fido_blob_new()) == NULL) {
fido_log_debug("%s: fido_blob_new", __func__);
return FIDO_ERR_INTERNAL;
}
if ((r = cbor_parse_reply(reply, (size_t)reply_len, *chunk,
parse_largeblob_reply)) != FIDO_OK) {
fido_log_debug("%s: parse_largeblob_reply", __func__);
fido_blob_free(chunk);
return r;
}

return FIDO_OK;
}