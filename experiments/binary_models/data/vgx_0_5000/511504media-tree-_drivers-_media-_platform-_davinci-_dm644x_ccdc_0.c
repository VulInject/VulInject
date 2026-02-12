static int dm644x_ccdc_probe(struct platform_device *pdev)
{
struct resource	*res;
int status = 0;


status = vpfe_register_ccdc_device(&ccdc_hw_dev);
if (status < 0)
return status;

res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
if (!res) {
status = -ENODEV;
goto fail_nores;
}

res = request_mem_region(res->start, resource_size(res), res->name);
if (!res) {
status = -EBUSY;
goto fail_nores;
}

ccdc_cfg.base_addr = ioremap_nocache(res->start, resource_size(res));
if (!ccdc_cfg.base_addr) {
status = -ENOMEM;
goto fail_nomem;
}

ccdc_cfg.dev = &pdev->dev;
printk(KERN_NOTICE "%s is registered with vpfe.\n", ccdc_hw_dev.name);
return 0;
fail_nomem:
release_mem_region(res->start, resource_size(res));
fail_nores:
vpfe_unregister_ccdc_device(&ccdc_hw_dev);
return status;
}