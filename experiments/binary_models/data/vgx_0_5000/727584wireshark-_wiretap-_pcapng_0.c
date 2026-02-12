static gboolean pcapng_write_uint8_option(wtap_dumper *wdh, guint option_id, wtap_optval_t *optval, int *err)
{
struct pcapng_option_header option_hdr;
const guint32 zero_pad = 0;

option_hdr.type         = (guint16)option_id;
option_hdr.value_length = (guint16)1;
if (!wtap_dump_file_write(wdh, &option_hdr, 4, err))
return FALSE;
wdh->bytes_dumped += 4;

if (!wtap_dump_file_write(wdh, &optval->uint8val, 1, err))
return FALSE;
wdh->bytes_dumped += 1;

if (!wtap_dump_file_write(wdh, &zero_pad, 3, err))
return FALSE;
wdh->bytes_dumped += 3;

return TRUE;
}