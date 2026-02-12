static void aspeed_lpc_write(void *opaque, hwaddr offset, uint64_t data,
unsigned int size)
{
AspeedLPCState *s = ASPEED_LPC(opaque);
int reg = TO_REG(offset);

if (reg >= ARRAY_SIZE(s->regs)) {
qemu_log_mask(LOG_GUEST_ERROR,
"%s: Out-of-bounds write at offset 0x%" HWADDR_PRIx "\n",
__func__, offset);
return;
}


switch (reg) {
case ODR1:
case ODR2:
case ODR3:
case ODR4:
s->regs[aspeed_kcs_get_channel_by_register(reg)->str] |= STR_OBF;
break;
default:
break;
}

s->regs[reg] = data;
}

static const MemoryRegionOps aspeed_lpc_ops = {
.read = aspeed_lpc_read,
.write = aspeed_lpc_write,
.endianness = DEVICE_LITTLE_ENDIAN,
.valid = {
.min_access_size = 1,
.max_access_size = 4,
},
};