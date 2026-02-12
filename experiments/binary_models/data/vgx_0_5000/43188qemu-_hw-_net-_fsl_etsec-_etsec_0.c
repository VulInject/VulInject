static uint64_t etsec_read(void *opaque, hwaddr addr, unsigned size)
{
eTSEC          *etsec     = opaque;
uint32_t        reg_index = addr / 4;
eTSEC_Register *reg       = NULL;
uint32_t        ret       = 0x0;

assert(reg_index < ETSEC_REG_NUMBER);

reg = &etsec->regs[reg_index];


switch (reg->access) {
case ACC_WO:
ret = 0x00000000;
break;

case ACC_RW:
case ACC_W1C:
case ACC_RO:
default:
ret = reg->value;
break;
}

DPRINTF("Read  0x%08x @ 0x" TARGET_FMT_plx
"                            : %s (%s)\n",
ret, addr, reg->name, reg->desc);

return ret;
}