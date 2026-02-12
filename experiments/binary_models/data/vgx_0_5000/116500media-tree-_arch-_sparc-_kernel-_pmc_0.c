static int pmc_probe(struct platform_device *op)
{
regs = of_ioremap(&op->resource[0], 0,
resource_size(&op->resource[0]), PMC_OBPNAME);
if (!regs) {
printk(KERN_ERR "%s: unable to map registers\n", PMC_DEVNAME);
return -ENODEV;
}


sparc_idle = pmc_swift_idle;

printk(KERN_INFO "%s: power management initialized\n", PMC_DEVNAME);
return 0;
}

static struct of_device_id pmc_match[] = {
{
.name = PMC_OBPNAME,
},
{},
};