int tzc_configure(uintptr_t tzc, const struct tzc_region *cfg)
{
uintptr_t region = tzc + TZC_REGION1_OFFSET;
uint32_t nsid, attr_reg, active_filters;
int ret;

active_filters = tzc_config_get_active_filters(cfg);
if (active_filters == 0)
return -EINVAL;

ret = tzc_disable_filters(tzc, active_filters);
if (ret < 0)
return ret;

for ( ; cfg->top != 0; cfg++, region += TZC_REGION_CFG_SIZE) {
attr_reg = (cfg->sec_mode & 0x03) << 30;
attr_reg |= (cfg->filters_mask & 0x03) << 0;
nsid = cfg->nsec_id & 0xffff;
nsid |= nsid << 16;

tzc_write(region, TZC_REGION_BASE, cfg->base);
tzc_write(region, TZC_REGION_TOP, cfg->top);
tzc_write(region, TZC_REGION_ACCESS, nsid);
tzc_write(region, TZC_REGION_ATTRIBUTE, attr_reg);
}

tzc_write(tzc, TZC_ACTION, TZC_ACTION_ERR);
return tzc_enable_filters(tzc, active_filters);
}