static uint64_t aspeed_timer_read(void *opaque, hwaddr offset, unsigned size)
{
AspeedTimerCtrlState *s = opaque;
const int reg = (offset & 0xf) / 4;
uint64_t value;

switch (offset) {
case 0x30: 
value = s->ctrl;
break;
case 0x00 ... 0x2c: 
value = aspeed_timer_get_value(&s->timers[(offset >> 4)], reg);
break;
case 0x40 ... 0x8c: 
value = aspeed_timer_get_value(&s->timers[(offset >> 4) - 1], reg);
break;
default:
value = ASPEED_TIMER_GET_CLASS(s)->read(s, offset);
break;
}
trace_aspeed_timer_read(offset, size, value);
return value;
}