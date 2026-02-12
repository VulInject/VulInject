wtap_open_return_val
busmaster_open(wtap *wth, int *err, char **err_info)
{
busmaster_state_t state = {0};
log_entry_type_t  entry;

busmaster_debug_printf("%s: Trying to open with busmaster log reader\n",
G_STRFUNC);


if (file_seek(wth->fh, 0, SEEK_SET, err) == -1)
return WTAP_OPEN_ERROR;

entry = busmaster_parse(wth->fh, &state, err, err_info);

g_free(*err_info);
*err_info = NULL;
*err      = 0;

if (entry != LOG_ENTRY_HEADER)
return WTAP_OPEN_NOT_MINE;


if (file_seek(wth->fh, 0, SEEK_SET, err) == -1)
return WTAP_OPEN_ERROR;

busmaster_debug_printf("%s: That's a busmaster log\n", G_STRFUNC);

wth->priv              = NULL;
wth->subtype_close     = busmaster_close;
wth->subtype_read      = busmaster_read;
wth->subtype_seek_read = busmaster_seek_read;
wth->file_type_subtype = busmaster_file_type_subtype;
wth->file_encap        = WTAP_ENCAP_WIRESHARK_UPPER_PDU;
wth->file_tsprec       = WTAP_TSPREC_USEC;

return WTAP_OPEN_MINE;
}