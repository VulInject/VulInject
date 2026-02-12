void
dladm_destroy_conf(dladm_handle_t handle, dladm_conf_t conf)
{
dlmgmt_door_destroyconf_t	dconf;
dlmgmt_destroyconf_retval_t	retval;
size_t				sz = sizeof (retval);

if (conf.ds_readonly) {
nvlist_free(conf.ds_nvl);
} else {
if (conf.ds_confid == DLADM_INVALID_CONF)
return;

dconf.ld_cmd = DLMGMT_CMD_DESTROYCONF;
dconf.ld_confid = conf.ds_confid;

(void) dladm_door_call(handle, &dconf, sizeof (dconf),
&retval, &sz);
}
}