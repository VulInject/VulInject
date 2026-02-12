DECLARE_SUBSCRIBE(ocirc_state, btc_state_rcvr);
DECLARE_SUBSCRIBE(ocirc_cevent, btc_cevent_rcvr);
DECLARE_SUBSCRIBE(ocirc_chan, btc_chan_rcvr);

static void
btc_state_rcvr(const msg_t *msg, const ocirc_state_msg_t *arg)
{
(void)msg;
log_debug(LD_BTRACK, "CIRC gid=%"PRIu32" state=%d onehop=%d",
arg->gid, arg->state, arg->onehop);

btc_update_state(arg, &best_any_state, "ANY");
if (arg->onehop)
return;
btc_update_state(arg, &best_ap_state, "AP");
}