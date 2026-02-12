static int gpio_setup_data_regs(struct sh_pfc_chip *chip)
{
struct sh_pfc *pfc = chip->pfc;
const struct pinmux_data_reg *dreg;
unsigned int i;


for (i = 0; pfc->info->data_regs[i].reg_width; ++i)
;

chip->regs = devm_kzalloc(pfc->dev, i * sizeof(*chip->regs),
GFP_KERNEL);
if (chip->regs == NULL)
return -ENOMEM;

for (i = 0, dreg = pfc->info->data_regs; dreg->reg_width; ++i, ++dreg) {
chip->regs[i].info = dreg;
chip->regs[i].shadow = gpio_read_data_reg(chip, dreg);
}

for (i = 0; i < pfc->info->nr_pins; i++) {
if (pfc->info->pins[i].enum_id == 0)
continue;

gpio_setup_data_reg(chip, i);
}

return 0;
}