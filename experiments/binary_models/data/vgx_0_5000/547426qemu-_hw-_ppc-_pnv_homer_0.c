static uint64_t pnv_homer_power8_pba_read(void *opaque, hwaddr addr,
unsigned size)
{
PnvHomer *homer = PNV_HOMER(opaque);
PnvChip *chip = homer->chip;
uint32_t reg = addr >> 3;
uint64_t val = 0;

switch (reg) {
case PBA_BAR0:
val = PNV_HOMER_BASE(chip);
break;
case PBA_BARMASK0: 
val = (PNV_HOMER_SIZE - 1) & 0x300000;
break;
case PBA_BAR3: 
val = PNV_OCC_COMMON_AREA_BASE;
break;
case PBA_BARMASK3: 
val = (PNV_OCC_COMMON_AREA_SIZE - 1) & 0x700000;
break;
default:
qemu_log_mask(LOG_UNIMP, "PBA: read to unimplemented register: Ox%"
HWADDR_PRIx "\n", addr >> 3);
}
return val;
}