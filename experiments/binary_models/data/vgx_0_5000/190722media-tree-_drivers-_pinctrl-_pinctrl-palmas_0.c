static int palmas_pinctrl_get_pin_mux(struct palmas_pctrl_chip_info *pci)
{
const struct palmas_pingroup *g;
unsigned int val;
int ret;
int i;

for (i = 0; i < pci->num_pin_groups; ++i) {
g = &pci->pin_groups[i];
if (g->mux_reg_base == PALMAS_NONE_BASE) {
pci->pins_current_opt[i] = 0;
continue;
}
ret = palmas_read(pci->palmas, g->mux_reg_base,
g->mux_reg_add, &val);
if (ret < 0) {
dev_err(pci->dev, "mux_reg 0x%02x read failed: %d\n",
g->mux_reg_add, ret);
return ret;
}
val &= g->mux_reg_mask;
pci->pins_current_opt[i] = val >> g->mux_bit_shift;
}
return 0;
}