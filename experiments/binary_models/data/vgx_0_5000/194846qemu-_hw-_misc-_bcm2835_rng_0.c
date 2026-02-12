static uint64_t bcm2835_rng_read(void *opaque, hwaddr offset,
unsigned size)
{
BCM2835RngState *s = (BCM2835RngState *)opaque;
uint32_t res = 0;

assert(size == 4);

switch (offset) {
case 0x0:    
res = s->rng_ctrl;
break;
case 0x4:    
res = s->rng_status | (1 << 24);
break;
case 0x8:    
res = get_random_bytes();
break;

default:
qemu_log_mask(LOG_GUEST_ERROR,
"bcm2835_rng_read: Bad offset %x\n",
(int)offset);
res = 0;
break;
}

return res;
}