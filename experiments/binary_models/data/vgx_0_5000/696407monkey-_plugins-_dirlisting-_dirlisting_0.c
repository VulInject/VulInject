int mk_dirlisting_stage30(struct mk_plugin *plugin,
struct mk_http_session *cs,
struct mk_http_request *sr,
int n_param,
struct mk_list *params)
{
(void) plugin;
(void) n_param;
(void) params;


if (sr->file_info.size == 0) {
return MK_PLUGIN_RET_NOT_ME;
}


if (sr->file_info.is_directory == MK_FALSE) {
return MK_PLUGIN_RET_NOT_ME;
}

PLUGIN_TRACE("Dirlisting attending socket %i", cs->socket);
if (mk_dirhtml_init(plugin, cs, sr)) {

return MK_PLUGIN_RET_CLOSE_CONX;
}

return MK_PLUGIN_RET_END;
}