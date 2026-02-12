dladm_status_t
dladm_open_conf(dladm_handle_t handle, datalink_id_t linkid,
dladm_conf_t *confp)
{
dlmgmt_door_openconf_t		openconf;
dlmgmt_openconf_retval_t	retval;
dladm_status_t			status;
size_t				sz;

if (linkid == DATALINK_INVALID_LINKID || confp == NULL)
return (DLADM_STATUS_BADARG);

sz = sizeof (retval);
openconf.ld_linkid = linkid;
openconf.ld_cmd = DLMGMT_CMD_OPENCONF;
confp->ds_confid = DLADM_INVALID_CONF;
if ((status = dladm_door_call(handle, &openconf,
sizeof (openconf), &retval, &sz)) == DLADM_STATUS_OK) {
confp->ds_readonly = B_FALSE;
confp->ds_confid = retval.lr_confid;
}

return (status);
}