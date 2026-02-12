static int cac_get_serial_nr_from_CUID(sc_card_t* card, sc_serial_number_t* serial)
{
cac_private_data_t * priv = CAC_DATA(card);

LOG_FUNC_CALLED(card->ctx);
if (card->serialnr.len)   {
*serial = card->serialnr;
LOG_FUNC_RETURN(card->ctx, SC_SUCCESS);
}
if (priv->cac_id_len) {
serial->len = MIN(priv->cac_id_len, SC_MAX_SERIALNR);
memcpy(serial->value, priv->cac_id, serial->len);
LOG_FUNC_RETURN(card->ctx, SC_SUCCESS);
}
LOG_FUNC_RETURN(card->ctx, SC_ERROR_FILE_NOT_FOUND);
}