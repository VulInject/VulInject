static uint64_t openpic_tmr_get_timer(OpenPICTimer *tmr)
{
uint64_t retval;
if (!tmr->qemu_timer_active) {
retval = tmr->tccr;
} else {
uint64_t now = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
uint64_t used = now - tmr->origin_time;  
uint32_t used_ticks = (uint32_t)ns_to_ticks(used);
uint32_t count = (tmr->tccr & ~TCCR_TOG) - used_ticks;
retval = (uint32_t)((tmr->tccr & TCCR_TOG) | (count & ~TCCR_TOG));
}
return retval;
}