static void mips_itu_reset(DeviceState *dev)
{
MIPSITUState *s = MIPS_ITU(dev);

if (s->saar_present) {
*(uint64_t *) s->saar = 0x11 << 1;
s->icr0 = get_num_cells(s) << ITC_ICR0_CELL_NUM;
} else {
s->ITCAddressMap[0] = 0;
s->ITCAddressMap[1] =
((ITC_STORAGE_ADDRSPACE_SZ - 1) & ITC_AM1_ADDR_MASK_MASK) |
(get_num_cells(s) << ITC_AM1_NUMENTRIES_OFS);
}
itc_reconfigure(s);

itc_reset_cells(s);
}