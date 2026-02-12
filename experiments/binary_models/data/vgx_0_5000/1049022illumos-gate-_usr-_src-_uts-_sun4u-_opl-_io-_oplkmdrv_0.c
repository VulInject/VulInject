static void
okm_mbox_fini(okms_t *okmsp)
{
int ret = 0;

ASSERT(MUTEX_HELD(&okmsp->km_lock));
if (okmsp->km_state & OKM_MB_INITED) {
DPRINTF(DBG_MBOX, ("okm_mbox_fini: calling mb_fini\n"));
ret = scf_mb_fini(okmsp->km_target, okmsp->km_key);
DPRINTF(DBG_MBOX, ("okm_mbox_fini: mb_fini ret=%d\n", ret));
if (ret != 0) {
cmn_err(CE_WARN,
"Failed to close the Mailbox error=%d", ret);
}
okmsp->km_state &= ~(OKM_MB_INITED | OKM_MB_CONN | OKM_MB_DISC);
}
}