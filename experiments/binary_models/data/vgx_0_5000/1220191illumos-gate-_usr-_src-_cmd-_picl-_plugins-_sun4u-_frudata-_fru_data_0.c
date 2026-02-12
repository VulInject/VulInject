static void
frudata_plugin_init(void)
{
int		retval;
int		count;
char		fullfilename[PATH_MAX];
picl_nodehdl_t	fru_nodehdl;
picl_nodehdl_t	roothdl;

retval = ptree_get_root(&roothdl);
if (retval != PICL_SUCCESS) {
return;
}

(void) ptree_register_handler(PICL_FRU_ADDED,
frudata_event_handler, NULL);

(void) ptree_register_handler(PICL_FRU_REMOVED,
frudata_event_handler, NULL);

(void) ptree_register_handler(PICLEVENT_STATE_CHANGE,
frudata_state_change_evhandler, NULL);

(void) pthread_mutex_lock(&cont_tbl_lock);
for (count = 0; count < TABLE_SIZE; count++) {
container_table[count] = NULL;
}
(void) pthread_mutex_unlock(&cont_tbl_lock);

(void) get_config_file(fullfilename);

(void) picld_pluginutil_parse_config_file(roothdl, fullfilename);

retval = ptree_get_node_by_path(FRUTREE_PATH, &fru_nodehdl);

if (retval != PICL_SUCCESS) {
return;
}

create_frudata_props(fru_nodehdl);

}