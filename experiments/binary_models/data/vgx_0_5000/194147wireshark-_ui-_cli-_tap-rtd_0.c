gboolean
register_rtd_tables(const void *key _U_, void *value, void *userdata _U_)
{
register_rtd_t *rtd = (register_rtd_t*)value;
stat_tap_ui ui_info;
gchar *cli_string;

cli_string = rtd_table_get_tap_string(rtd);
ui_info.group = REGISTER_STAT_GROUP_RESPONSE_TIME;
ui_info.title = NULL;   
ui_info.cli_string = cli_string;
ui_info.tap_init_cb = dissector_rtd_init;
ui_info.nparams = 0;
ui_info.params = NULL;
register_stat_tap_ui(&ui_info, rtd);
g_free(cli_string);
return FALSE;
}