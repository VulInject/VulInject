static int iris_probe(struct platform_device *pdev)
{
unsigned char status = inb(IRIS_GIO_INPUT);
if (status == IRIS_GIO_NODEV) {
printk(KERN_ERR "This machine does not seem to be an Iris. "
"Power off handler not installed.\n");
return -ENODEV;
}
old_pm_power_off = pm_power_off;
pm_power_off = &iris_power_off;
printk(KERN_INFO "Iris power_off handler installed.\n");
return 0;
}