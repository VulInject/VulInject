static int vidtv_tuner_set_params(struct dvb_frontend *fe)
{
struct vidtv_tuner_dev *tuner_dev = vidtv_tuner_get_dev(fe);
struct vidtv_tuner_config config  = tuner_dev->config;
struct dtv_frontend_properties *c = &fe->dtv_property_cache;
s32 shift;

u32 min_freq = fe->ops.tuner_ops.info.frequency_min_hz;
u32 max_freq = fe->ops.tuner_ops.info.frequency_max_hz;
u32 min_bw = fe->ops.tuner_ops.info.bandwidth_min;
u32 max_bw = fe->ops.tuner_ops.info.bandwidth_max;

if (c->frequency < min_freq  || c->frequency > max_freq  ||
c->bandwidth_hz < min_bw || c->bandwidth_hz > max_bw) {
tuner_dev->hw_state.lock_status = 0;
return -EINVAL;
}

tuner_dev->hw_state.tuned_frequency = c->frequency;
tuner_dev->hw_state.bandwidth = c->bandwidth_hz;
tuner_dev->hw_state.lock_status = TUNER_STATUS_LOCKED;

msleep_interruptible(config.mock_tune_delay_msec);

shift = vidtv_tuner_check_frequency_shift(fe);
if (shift < 0) {
tuner_dev->hw_state.lock_status = 0;
return shift;
}

return 0;
}