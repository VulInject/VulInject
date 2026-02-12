static int
iso7816_check_sw(struct sc_card *card, unsigned int sw1, unsigned int sw2)
{
const int err_count = sizeof(iso7816_errors)/sizeof(iso7816_errors[0]);
int i;


if (sw1 == 0x6C) {
sc_log(card->ctx, "Wrong length; correct length is %d", sw2);
return SC_ERROR_WRONG_LENGTH;
}
if (sw1 == 0x90)
return SC_SUCCESS;
if (sw1 == 0x63U && (sw2 & ~0x0fU) == 0xc0U ) {
sc_log(card->ctx, "PIN not verified (remaining tries: %d)", (sw2 & 0x0f));
return SC_ERROR_PIN_CODE_INCORRECT;
}
for (i = 0; i < err_count; i++)   {
if (iso7816_errors[i].SWs == ((sw1 << 8) | sw2)) {
sc_log(card->ctx, "%s", iso7816_errors[i].errorstr);
return iso7816_errors[i].errorno;
}
}

sc_log(card->ctx, "Unknown SWs; SW1=%02X, SW2=%02X", sw1, sw2);
return SC_ERROR_CARD_CMD_FAILED;
}