static int
bnxt_dl_flash_update(struct devlink *dl,
struct devlink_flash_update_params *params,
struct netlink_ext_ack *extack)
{
struct bnxt *bp = bnxt_get_bp_from_dl(dl);
int rc;

if (!BNXT_PF(bp)) {
NL_SET_ERR_MSG_MOD(extack,
"flash update not supported from a VF");
return -EPERM;
}

devlink_flash_update_status_notify(dl, "Preparing to flash", NULL, 0, 0);
rc = bnxt_flash_package_from_fw_obj(bp->dev, params->fw, 0, extack);
if (!rc)
devlink_flash_update_status_notify(dl, "Flashing done", NULL, 0, 0);
else
devlink_flash_update_status_notify(dl, "Flashing failed", NULL, 0, 0);
return rc;
}