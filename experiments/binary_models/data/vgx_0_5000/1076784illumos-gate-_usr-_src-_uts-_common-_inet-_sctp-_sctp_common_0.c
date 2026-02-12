void
sctp_faddr_alive(sctp_t *sctp, sctp_faddr_t *fp)
{
int64_t now = LBOLT_FASTPATH64;


if (!sctp->sctp_zero_win_probe || !sctp->sctp_sctps->sctps_reclaim) {
sctp->sctp_strikes = 0;
}
fp->sf_strikes = 0;
fp->sf_lastactive = now;
fp->sf_hb_expiry = now + SET_HB_INTVL(fp);
fp->sf_hb_pending = B_FALSE;
if (fp->sf_state != SCTP_FADDRS_ALIVE) {
fp->sf_state = SCTP_FADDRS_ALIVE;
sctp_intf_event(sctp, fp->sf_faddr, SCTP_ADDR_AVAILABLE, 0);

sctp_get_dest(sctp, fp);


if (fp == sctp->sctp_primary &&
fp->sf_state != SCTP_FADDRS_UNREACH) {
sctp_set_faddr_current(sctp, fp);
return;
}
}
}