int xfrm_init_replay(struct xfrm_state *x, struct netlink_ext_ack *extack)
{
struct xfrm_replay_state_esn *replay_esn = x->replay_esn;

if (replay_esn) {
if (replay_esn->replay_window >
replay_esn->bmp_len * sizeof(__u32) * 8) {
NL_SET_ERR_MSG(extack, "ESN replay window is too large for the chosen bitmap size");
return -EINVAL;
}

if (x->props.flags & XFRM_STATE_ESN) {
if (replay_esn->replay_window == 0) {
NL_SET_ERR_MSG(extack, "ESN replay window must be > 0");
return -EINVAL;
}
x->repl_mode = XFRM_REPLAY_MODE_ESN;
} else {
x->repl_mode = XFRM_REPLAY_MODE_BMP;
}
} else {
x->repl_mode = XFRM_REPLAY_MODE_LEGACY;
}

return 0;
}