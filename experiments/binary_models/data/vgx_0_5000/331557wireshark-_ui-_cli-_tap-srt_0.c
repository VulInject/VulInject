gboolean
register_srt_tables(const void *key _U_, void *value, void *userdata _U_)
{
register_srt_t *srt = (register_srt_t*)value;
const char* short_name = proto_get_protocol_short_name(find_protocol_by_id(get_srt_proto_id(srt)));
stat_tap_ui ui_info;
gchar *cli_string;


if (strcmp(short_name, "CAMEL") == 0)
return FALSE;

cli_string = srt_table_get_tap_string(srt);
ui_info.group = REGISTER_STAT_GROUP_RESPONSE_TIME;
ui_info.title = NULL;   
ui_info.cli_string = cli_string;
ui_info.tap_init_cb = dissector_srt_init;
ui_info.nparams = 0;
ui_info.params = NULL;
register_stat_tap_ui(&ui_info, srt);
g_free(cli_string);
return FALSE;
}