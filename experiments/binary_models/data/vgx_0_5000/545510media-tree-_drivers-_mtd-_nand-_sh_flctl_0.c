static struct sh_flctl_platform_data *flctl_parse_dt(struct device *dev)
{
const struct of_device_id *match;
struct flctl_soc_config *config;
struct sh_flctl_platform_data *pdata;

match = of_match_device(of_flctl_match, dev);
if (match)
config = (struct flctl_soc_config *)match->data;
else {
dev_err(dev, "%s: no OF configuration attached\n", __func__);
return NULL;
}

pdata = devm_kzalloc(dev, sizeof(struct sh_flctl_platform_data),
GFP_KERNEL);
if (!pdata)
return NULL;


pdata->flcmncr_val = config->flcmncr_val;
pdata->has_hwecc = config->has_hwecc;
pdata->use_holden = config->use_holden;

return pdata;
}