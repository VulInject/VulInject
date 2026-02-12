static int lmv_disconnect_mdc(struct obd_device *obd, struct lmv_tgt_desc *tgt)
{
struct lmv_obd	 *lmv = &obd->u.lmv;
struct obd_device      *mdc_obd;
int		     rc;

mdc_obd = class_exp2obd(tgt->ltd_exp);

if (mdc_obd) {
mdc_obd->obd_force = obd->obd_force;
mdc_obd->obd_fail = obd->obd_fail;
mdc_obd->obd_no_recov = obd->obd_no_recov;

if (lmv->lmv_tgts_kobj)
sysfs_remove_link(lmv->lmv_tgts_kobj,
mdc_obd->obd_name);
}

rc = obd_fid_fini(tgt->ltd_exp->exp_obd);
if (rc)
CERROR("Can't finalize fids factory\n");

CDEBUG(D_INFO, "Disconnected from %s(%s) successfully\n",
tgt->ltd_exp->exp_obd->obd_name,
tgt->ltd_exp->exp_obd->obd_uuid.uuid);

obd_register_observer(tgt->ltd_exp->exp_obd, NULL);
rc = obd_disconnect(tgt->ltd_exp);
if (rc) {
if (tgt->ltd_active) {
CERROR("Target %s disconnect error %d\n",
tgt->ltd_uuid.uuid, rc);
}
}

lmv_activate_target(lmv, tgt, 0);
tgt->ltd_exp = NULL;
return 0;
}