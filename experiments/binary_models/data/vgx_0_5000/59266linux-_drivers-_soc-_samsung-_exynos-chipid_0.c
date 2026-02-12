static int exynos_chipid_get_chipid_info(struct regmap *regmap,
const struct exynos_chipid_variant *data,
struct exynos_chipid_info *soc_info)
{
int ret;
unsigned int val, main_rev, sub_rev;

ret = regmap_read(regmap, EXYNOS_CHIPID_REG_PRO_ID, &val);
if (ret < 0)
return ret;
soc_info->product_id = val & EXYNOS_MASK;

if (data->rev_reg != EXYNOS_CHIPID_REG_PRO_ID) {
ret = regmap_read(regmap, data->rev_reg, &val);
if (ret < 0)
return ret;
}
main_rev = (val >> data->main_rev_shift) & EXYNOS_REV_PART_MASK;
sub_rev = (val >> data->sub_rev_shift) & EXYNOS_REV_PART_MASK;
soc_info->revision = (main_rev << EXYNOS_REV_PART_SHIFT) | sub_rev;

return 0;
}