static void usba_init_debugfs(struct usba_udc *udc)
{
struct dentry *root;
struct resource *regs_resource;

root = debugfs_create_dir(udc->gadget.name, usb_debug_root);
udc->debugfs_root = root;

regs_resource = platform_get_resource(udc->pdev, IORESOURCE_MEM,
CTRL_IOMEM_ID);

if (regs_resource) {
debugfs_create_file_size("regs", 0400, root, udc,
&regs_dbg_fops,
resource_size(regs_resource));
}

usba_ep_init_debugfs(udc, to_usba_ep(udc->gadget.ep0));
}