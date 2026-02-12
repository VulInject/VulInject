static int get_carddata(sc_card_t *card, u8* carddata_loc, unsigned int carddataloc_len)
{
sc_apdu_t apdu;
u8 carddata_cmd[] = { 0x80, 0xE4, 0x00, 0x00, 0x1C };
int r;

assert(carddataloc_len == BELPIC_CARDDATA_RESP_LEN);

r = sc_bytes2apdu(card->ctx, carddata_cmd, sizeof(carddata_cmd), &apdu);
if(r) {
sc_log(card->ctx,  "bytes to APDU conversion failed: %d\n", r);
return r;
}

apdu.resp = carddata_loc;
apdu.resplen = carddataloc_len;

r = sc_transmit_apdu(card, &apdu);
if(r) {
sc_log(card->ctx,  "GetCardData command failed: %d\n", r);
return r;
}

r = sc_check_sw(card, apdu.sw1, apdu.sw2);
if(r) {
sc_log(card->ctx,  "GetCardData: card returned %d\n", r);
return r;
}
if(apdu.resplen < carddataloc_len) {
sc_log(card->ctx,
"GetCardData: card returned %"SC_FORMAT_LEN_SIZE_T"u bytes rather than expected %d\n",
apdu.resplen, carddataloc_len);
return SC_ERROR_WRONG_LENGTH;
}

return 0;
}