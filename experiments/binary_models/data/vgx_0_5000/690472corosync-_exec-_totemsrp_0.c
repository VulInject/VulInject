static void reset_token_timeout (struct totemsrp_instance *instance) {
int32_t res;

qb_loop_timer_del (instance->totemsrp_poll_handle, instance->timer_orf_token_timeout);
res = qb_loop_timer_add (instance->totemsrp_poll_handle,
QB_LOOP_MED,
instance->totem_config->token_timeout*QB_TIME_NS_IN_MSEC,
(void *)instance,
timer_function_orf_token_timeout,
&instance->timer_orf_token_timeout);
if (res != 0) {
log_printf(instance->totemsrp_log_level_error, "reset_token_timeout - qb_loop_timer_add error : %d", res);
}

if (instance->totem_config->token_warning)
reset_token_warning(instance);
}