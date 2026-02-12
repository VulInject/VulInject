static int
pfm_ovfl_notify_user(pfm_context_t *ctx, unsigned long ovfl_pmds)
{
pfm_msg_t *msg = NULL;

if (ctx->ctx_fl_no_msg == 0) {
msg = pfm_get_new_msg(ctx);
if (msg == NULL) {
printk(KERN_ERR "perfmon: pfm_ovfl_notify_user no more notification msgs\n");
return -1;
}

msg->pfm_ovfl_msg.msg_type         = PFM_MSG_OVFL;
msg->pfm_ovfl_msg.msg_ctx_fd       = ctx->ctx_fd;
msg->pfm_ovfl_msg.msg_active_set   = 0;
msg->pfm_ovfl_msg.msg_ovfl_pmds[0] = ovfl_pmds;
msg->pfm_ovfl_msg.msg_ovfl_pmds[1] = 0UL;
msg->pfm_ovfl_msg.msg_ovfl_pmds[2] = 0UL;
msg->pfm_ovfl_msg.msg_ovfl_pmds[3] = 0UL;
msg->pfm_ovfl_msg.msg_tstamp       = 0UL;
}

DPRINT(("ovfl msg: msg=%p no_msg=%d fd=%d ovfl_pmds=0x%lx\n",
msg,
ctx->ctx_fl_no_msg,
ctx->ctx_fd,
ovfl_pmds));

return pfm_notify_user(ctx, msg);
}