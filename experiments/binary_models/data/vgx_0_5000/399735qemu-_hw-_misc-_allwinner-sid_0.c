static uint64_t allwinner_sid_read(void *opaque, hwaddr offset,
unsigned size)
{
const AwSidState *s = AW_SID(opaque);
uint64_t val = 0;

switch (offset) {
case REG_PRCTL:    
val = s->control;
break;
case REG_RDKEY:    
val = s->rdkey;
break;
default:
qemu_log_mask(LOG_GUEST_ERROR, "%s: out-of-bounds offset 0x%04x\n",
__func__, (uint32_t)offset);
return 0;
}

trace_allwinner_sid_read(offset, val, size);

return val;
}