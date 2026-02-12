static gboolean visual_dump_open(wtap_dumper *wdh, int *err, gchar **err_info _U_)
{
struct visual_write_info *visual;


wdh->subtype_write = visual_dump;
wdh->subtype_finish = visual_dump_finish;


visual = g_new(struct visual_write_info, 1);
wdh->priv = (void *)visual;
visual->index_table_index = 0;
visual->index_table_size = 1024;
visual->index_table = 0;
visual->next_offset = CAPTUREFILE_HEADER_SIZE;


if (wtap_dump_file_seek(wdh, CAPTUREFILE_HEADER_SIZE, SEEK_SET, err) == -1)
return FALSE;

return TRUE;
}