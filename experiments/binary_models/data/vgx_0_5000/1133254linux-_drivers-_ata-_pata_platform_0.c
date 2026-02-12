}
EXPORT_SYMBOL_GPL(__pata_platform_probe);

static int pata_platform_probe(struct platform_device *pdev)
{
struct resource *io_res;
struct resource *ctl_res;
struct resource *irq_res;
struct pata_platform_info *pp_info = dev_get_platdata(&pdev->dev);


if ((pdev->num_resources != 3) && (pdev->num_resources != 2)) {
dev_err(&pdev->dev, "invalid number of resources\n");
return -EINVAL;
}


io_res = platform_get_mem_or_io(pdev, 0);
if (!io_res)
return -EINVAL;


ctl_res = platform_get_mem_or_io(pdev, 1);
if (!ctl_res)
return -EINVAL;


irq_res = platform_get_resource(pdev, IORESOURCE_IRQ, 0);

return __pata_platform_probe(&pdev->dev, io_res, ctl_res, irq_res,
pp_info ? pp_info->ioport_shift : 0,
pio_mask, &pata_platform_sht, false);
}