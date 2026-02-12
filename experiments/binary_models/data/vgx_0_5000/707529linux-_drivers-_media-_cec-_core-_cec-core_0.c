static int __init cec_devnode_init(void)
{
int ret = alloc_chrdev_region(&cec_dev_t, 0, CEC_NUM_DEVICES, CEC_NAME);

if (ret < 0) {
pr_warn("cec: unable to allocate major\n");
return ret;
}

top_cec_dir = debugfs_create_dir("cec", NULL);
if (IS_ERR_OR_NULL(top_cec_dir)) {
pr_warn("cec: Failed to create debugfs cec dir\n");
top_cec_dir = NULL;
}

ret = bus_register(&cec_bus_type);
if (ret < 0) {
unregister_chrdev_region(cec_dev_t, CEC_NUM_DEVICES);
pr_warn("cec: bus_register failed\n");
return -EIO;
}

return 0;
}