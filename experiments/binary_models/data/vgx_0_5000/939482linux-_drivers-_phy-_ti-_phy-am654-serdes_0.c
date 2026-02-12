};
MODULE_DEVICE_TABLE(of, serdes_am654_id_table);

static int serdes_am654_regfield_init(struct serdes_am654 *am654_phy)
{
struct regmap *regmap = am654_phy->regmap;
struct device *dev = am654_phy->dev;
int i;

for (i = 0; i < MAX_FIELDS; i++) {
am654_phy->fields[i] = devm_regmap_field_alloc(dev,
regmap,
serdes_am654_reg_fields[i]);
if (IS_ERR(am654_phy->fields[i])) {
dev_err(dev, "Unable to allocate regmap field %d\n", i);
return PTR_ERR(am654_phy->fields[i]);
}
}

return 0;
}