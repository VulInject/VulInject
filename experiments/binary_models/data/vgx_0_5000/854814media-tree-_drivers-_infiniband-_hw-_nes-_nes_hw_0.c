void  nes_nic_init_timer_defaults(struct nes_device *nesdev, u8 jumbomode)
{
unsigned long flags;
struct nes_adapter *nesadapter = nesdev->nesadapter;
struct nes_hw_tune_timer *shared_timer = &nesadapter->tune_timer;

spin_lock_irqsave(&nesadapter->periodic_timer_lock, flags);

shared_timer->timer_in_use_min = NES_NIC_FAST_TIMER_LOW;
shared_timer->timer_in_use_max = NES_NIC_FAST_TIMER_HIGH;
if (jumbomode) {
shared_timer->threshold_low    = DEFAULT_JUMBO_NES_QL_LOW;
shared_timer->threshold_target = DEFAULT_JUMBO_NES_QL_TARGET;
shared_timer->threshold_high   = DEFAULT_JUMBO_NES_QL_HIGH;
} else {
shared_timer->threshold_low    = DEFAULT_NES_QL_LOW;
shared_timer->threshold_target = DEFAULT_NES_QL_TARGET;
shared_timer->threshold_high   = DEFAULT_NES_QL_HIGH;
}


spin_unlock_irqrestore(&nesadapter->periodic_timer_lock, flags);
}