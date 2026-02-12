static int flex_get_serialnr(sc_card_t *card, sc_serial_number_t *serial)
{
int       r;
u8        buf[16];
size_t    len;
sc_path_t tpath;
sc_file_t *tfile = NULL;

if (!serial)
return SC_ERROR_INVALID_ARGUMENTS;

if (card->serialnr.len) {
memcpy(serial, &card->serialnr, sizeof(*serial));
return SC_SUCCESS;
}

sc_format_path("3F000002", &tpath);
r = sc_select_file(card, &tpath, &tfile);
if (r < 0)
return r;
len = tfile->size;
sc_file_free(tfile);
if (len != 8) {
sc_log(card->ctx,  "unexpected file length of EF_ICCSN (%lu)\n",
(unsigned long) len);
return SC_ERROR_INTERNAL;
}
r = sc_read_binary(card, 0, buf, len, 0);
if (r < 0)
return r;
card->serialnr.len = len;	
memcpy(card->serialnr.value, buf, len);

memcpy(serial, &card->serialnr, sizeof(*serial));

return SC_SUCCESS;
}