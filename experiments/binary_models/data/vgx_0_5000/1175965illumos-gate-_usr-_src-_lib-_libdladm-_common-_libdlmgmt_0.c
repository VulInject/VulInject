dladm_status_t
dladm_create_conf(dladm_handle_t handle, const char *link, datalink_id_t linkid,
datalink_class_t class, uint32_t media, dladm_conf_t *confp)
{
dlmgmt_door_createconf_t	createconf;
dlmgmt_createconf_retval_t	retval;
dladm_status_t			status;
size_t				sz = sizeof (retval);

if (link == NULL || confp == NULL)
return (DLADM_STATUS_BADARG);

(void) strlcpy(createconf.ld_link, link, MAXLINKNAMELEN);
createconf.ld_class = class;
createconf.ld_media = media;
createconf.ld_linkid = linkid;
createconf.ld_cmd = DLMGMT_CMD_CREATECONF;
confp->ds_confid = DLADM_INVALID_CONF;

if ((status = dladm_door_call(handle, &createconf, sizeof (createconf),
&retval, &sz)) == DLADM_STATUS_OK) {
confp->ds_readonly = B_FALSE;
confp->ds_confid = retval.lr_confid;
}
return (status);
}