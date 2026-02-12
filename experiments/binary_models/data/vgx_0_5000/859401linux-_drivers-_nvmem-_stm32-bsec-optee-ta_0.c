static int stm32_bsec_ta_open_session(struct tee_context *ctx, u32 *id)
{
struct tee_ioctl_open_session_arg sess_arg;
int rc;

memset(&sess_arg, 0, sizeof(sess_arg));
export_uuid(sess_arg.uuid, &stm32mp_bsec_ta_uuid);
sess_arg.clnt_login = TEE_IOCTL_LOGIN_REE_KERNEL;
sess_arg.num_params = 0;

rc = tee_client_open_session(ctx, &sess_arg, NULL);
if ((rc < 0) || (sess_arg.ret != 0)) {
pr_err("%s: tee_client_open_session failed err:%#x, ret:%#x\n",
__func__, sess_arg.ret, rc);
if (!rc)
rc = -EINVAL;
} else {
*id = sess_arg.session;
}

return rc;
}