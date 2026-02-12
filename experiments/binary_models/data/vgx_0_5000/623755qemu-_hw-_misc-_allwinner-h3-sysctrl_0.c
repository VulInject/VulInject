static void allwinner_h3_sysctrl_write(void *opaque, hwaddr offset,
uint64_t val, unsigned size)
{
AwH3SysCtrlState *s = AW_H3_SYSCTRL(opaque);
const uint32_t idx = REG_INDEX(offset);

if (idx >= AW_H3_SYSCTRL_REGS_NUM) {
qemu_log_mask(LOG_GUEST_ERROR, "%s: out-of-bounds offset 0x%04x\n",
__func__, (uint32_t)offset);
return;
}

switch (offset) {
case REG_VER:       
break;
default:
s->regs[idx] = (uint32_t) val;
break;
}
}

static const MemoryRegionOps allwinner_h3_sysctrl_ops = {
.read = allwinner_h3_sysctrl_read,
.write = allwinner_h3_sysctrl_write,
.endianness = DEVICE_NATIVE_ENDIAN,
.valid = {
.min_access_size = 4,
.max_access_size = 4,
},
.impl.min_access_size = 4,
};