wtap_open_return_val vms_open(wtap *wth, int *err, gchar **err_info)
{

if (!vms_check_file_type(wth, err, err_info)) {
if (*err != 0 && *err != WTAP_ERR_SHORT_READ)
return WTAP_OPEN_ERROR;
return WTAP_OPEN_NOT_MINE;
}

wth->file_encap = WTAP_ENCAP_RAW_IP;
wth->file_type_subtype = vms_file_type_subtype;
wth->snapshot_length = 0; 
wth->subtype_read = vms_read;
wth->subtype_seek_read = vms_seek_read;
wth->file_tsprec = WTAP_TSPREC_CSEC;


wtap_add_generated_idb(wth);

return WTAP_OPEN_MINE;
}