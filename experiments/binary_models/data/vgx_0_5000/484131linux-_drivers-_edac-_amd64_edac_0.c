static int __set_scrub_rate(struct amd64_pvt *pvt, u32 new_bw, u32 min_rate)
{
u32 scrubval;
int i;


for (i = 0; i < ARRAY_SIZE(scrubrates) - 1; i++) {

if (scrubrates[i].scrubval < min_rate)
continue;

if (scrubrates[i].bandwidth <= new_bw)
break;
}

scrubval = scrubrates[i].scrubval;

if (pvt->fam == 0x15 && pvt->model == 0x60) {
f15h_select_dct(pvt, 0);
pci_write_bits32(pvt->F2, F15H_M60H_SCRCTRL, scrubval, 0x001F);
f15h_select_dct(pvt, 1);
pci_write_bits32(pvt->F2, F15H_M60H_SCRCTRL, scrubval, 0x001F);
} else {
pci_write_bits32(pvt->F3, SCRCTRL, scrubval, 0x001F);
}

if (scrubval)
return scrubrates[i].bandwidth;

return 0;
}