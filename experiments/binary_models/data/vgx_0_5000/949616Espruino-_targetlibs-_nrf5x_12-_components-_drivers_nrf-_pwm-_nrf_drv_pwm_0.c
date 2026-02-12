static void start_playback(nrf_drv_pwm_t const * const p_instance,
pwm_control_block_t * p_cb,
uint8_t               flags,
nrf_pwm_task_t        starting_task)
{
p_cb->state = NRF_DRV_STATE_POWERED_ON;

if (p_cb->handler)
{



uint32_t int_mask = NRF_PWM_INT_LOOPSDONE_MASK |
NRF_PWM_INT_STOPPED_MASK;

if (flags & NRF_DRV_PWM_FLAG_SIGNAL_END_SEQ0)
{
int_mask |= NRF_PWM_INT_SEQEND0_MASK;
}
if (flags & NRF_DRV_PWM_FLAG_SIGNAL_END_SEQ1)
{
int_mask |= NRF_PWM_INT_SEQEND1_MASK;
}
if (flags & NRF_DRV_PWM_FLAG_NO_EVT_FINISHED)
{
int_mask &= ~NRF_PWM_INT_LOOPSDONE_MASK;
}

nrf_pwm_int_set(p_instance->p_registers, int_mask);
}

nrf_pwm_event_clear(p_instance->p_registers, NRF_PWM_EVENT_STOPPED);

nrf_pwm_task_trigger(p_instance->p_registers, starting_task);
}