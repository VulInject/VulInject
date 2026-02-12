static void
pmcs_process_ssp_event(pmcs_hw_t *pwp, void *iomb, size_t amt)
{
_NOTE(ARGUNUSED(amt));
uint32_t status, htag, *w;
pmcwork_t *pwrk;
pmcs_phy_t *phyp = NULL;
char *path;

w = iomb;
htag = LE_32(w[1]);
status = LE_32(w[2]);


pwrk = pmcs_tag2wp(pwp, htag, B_FALSE);
if (pwrk == NULL) {
path = "????";
} else {
phyp = pwrk->phy;
path = pwrk->phy->path;
}

if (status != PMCOUT_STATUS_XFER_CMD_FRAME_ISSUED) {
char buf[20];
const char *emsg = pmcs_status_str(status);

if (emsg == NULL) {
(void) snprintf(buf, sizeof (buf), "Status 0x%x",
status);
emsg = buf;
}
pmcs_prt(pwp, PMCS_PRT_DEBUG, phyp, NULL, "%s: Bad SAS Status "
"(tag 0x%x) %s on %s", __func__, htag, emsg, path);
if (pwrk != NULL) {

pmcs_start_ssp_event_recovery(pwp, pwrk, iomb, amt);
}
} else {
pmcs_prt(pwp, PMCS_PRT_DEBUG2, phyp, NULL,
"%s: tag %x put onto the wire for %s",
__func__, htag, path);
if (pwrk) {
pwrk->onwire = 1;
mutex_exit(&pwrk->lock);
}
}
}