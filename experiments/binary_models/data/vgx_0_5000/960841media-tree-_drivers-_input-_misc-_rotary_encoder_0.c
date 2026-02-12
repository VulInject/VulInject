static irqreturn_t rotary_encoder_half_period_irq(int irq, void *dev_id)
{
struct rotary_encoder *encoder = dev_id;
unsigned int state;

mutex_lock(&encoder->access_mutex);

state = rotary_encoder_get_state(encoder);

if (state & 1) {
encoder->dir = ((encoder->last_stable - state + 1) % 4) - 1;
} else {
if (state != encoder->last_stable) {
rotary_encoder_report_event(encoder);
encoder->last_stable = state;
}
}

mutex_unlock(&encoder->access_mutex);

return IRQ_HANDLED;
}