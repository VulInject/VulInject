
OPTEE_SERVICE_DRIVER(optee_rng, TA_HWRNG_UUID, DRIVER_NAME);


static int open_session_ta_hwrng(struct udevice *dev, u32 *session_id)
{
const struct tee_optee_ta_uuid uuid = TA_HWRNG_UUID;
struct tee_open_session_arg sess_arg = {0};
int ret;


tee_optee_ta_uuid_to_octets(sess_arg.uuid, &uuid);
sess_arg.clnt_login = TEE_LOGIN_PUBLIC;

ret = tee_open_session(dev->parent, &sess_arg, 0, NULL);
if (ret || sess_arg.ret) {
if (!ret)
ret = -EIO;
return ret;
}

*session_id = sess_arg.session;
return 0;
}