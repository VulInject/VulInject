int sc_decipher(sc_card_t *card,
const u8 * crgram, size_t crgram_len, u8 * out, size_t outlen)
{
int r;

if (card == NULL) {
return SC_ERROR_INVALID_ARGUMENTS;
}
if (crgram == NULL || out == NULL) {
LOG_FUNC_RETURN(card->ctx, SC_ERROR_INVALID_ARGUMENTS);
}
LOG_FUNC_CALLED(card->ctx);
if (card->ops->decipher == NULL)
SC_FUNC_RETURN(card->ctx, SC_LOG_DEBUG_VERBOSE, SC_ERROR_NOT_SUPPORTED);
r = card->ops->decipher(card, crgram, crgram_len, out, outlen);
SC_FUNC_RETURN(card->ctx, SC_LOG_DEBUG_VERBOSE, r);
}