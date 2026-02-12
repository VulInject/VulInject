static int sandbox_tee_open_session(struct udevice *dev,
struct tee_open_session_arg *arg,
uint num_params, struct tee_param *params)
{
struct sandbox_tee_state *state = dev_get_priv(dev);
const struct ta_entry *ta;

if (state->ta) {
printf("A session is already open\n");
return -EBUSY;
}

ta = find_ta_entry(arg->uuid);
if (!ta) {
printf("Cannot find TA\n");
arg->ret = TEE_ERROR_ITEM_NOT_FOUND;
arg->ret_origin = TEE_ORIGIN_TEE;

return 0;
}

arg->ret = ta->open_session(dev, num_params, params);
arg->ret_origin = TEE_ORIGIN_TRUSTED_APP;

if (!arg->ret) {
state->ta = (void *)ta;
state->session = 1;
arg->session = state->session;
} else {
printf("Cannot open session, TA returns error\n");
}

return 0;
}