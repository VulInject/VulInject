static int starcos_create_ef(sc_card_t *card, sc_starcos_create_data *data)
{
int    r;
sc_apdu_t       apdu;
sc_context_t   *ctx = card->ctx;

CHECK_NOT_SUPPORTED_V3_4(card);

sc_log(ctx,  "creating EF\n");

sc_format_apdu(card,&apdu,SC_APDU_CASE_3_SHORT,0xE0,0x03,0x00);
apdu.cla |= 0x80;
apdu.lc   = 16;
apdu.datalen = 16;
apdu.data = (u8 *) data->data.ef.header;

r = sc_transmit_apdu(card, &apdu);
LOG_TEST_RET(card->ctx, r, "APDU transmit failed");
return sc_check_sw(card, apdu.sw1, apdu.sw2);
}