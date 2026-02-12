static int __init omap_init_wdt(void)
{
int id = -1;
struct platform_device *pdev;
struct omap_hwmod *oh;
char *oh_name = "wd_timer2";
char *dev_name = "omap_wdt";
struct omap_wd_timer_platform_data pdata;

if (!cpu_class_is_omap2() || of_have_populated_dt())
return 0;

oh = omap_hwmod_lookup(oh_name);
if (!oh) {
pr_err("Could not look up wd_timer%d hwmod\n", id);
return -EINVAL;
}

pdata.read_reset_sources = prm_read_reset_sources;

pdev = omap_device_build(dev_name, id, oh, &pdata,
sizeof(struct omap_wd_timer_platform_data));
WARN(IS_ERR(pdev), "Can't build omap_device for %s:%s.\n",
dev_name, oh->name);
return 0;
}