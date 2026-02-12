void pmic_init(void)
{
struct udevice *reg;
int ret, i;
static const char * const bucks[] = {
"bcore1",
"bcore2",
"bpro",
"bmem",
"bio",
"bperi",
};

pmic_crystal_fix();

for (i = 0; i < ARRAY_SIZE(bucks); i++) {
ret = regulator_get_by_devname(bucks[i], &reg);
if (reg < 0) {
printf("%s(): Unable to get regulator %s: %d\n",
__func__, bucks[i], ret);
continue;
}
regulator_set_mode(reg, DA9063_BUCKMODE_SYNC);
}
}