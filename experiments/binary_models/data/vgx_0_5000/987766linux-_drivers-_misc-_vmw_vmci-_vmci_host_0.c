int __init vmci_host_init(void)
{
int error;

host_context = vmci_ctx_create(VMCI_HOST_CONTEXT_ID,
VMCI_DEFAULT_PROC_PRIVILEGE_FLAGS,
-1, VMCI_VERSION, NULL);
if (IS_ERR(host_context)) {
error = PTR_ERR(host_context);
pr_warn("Failed to initialize VMCIContext (error%d)\n",
error);
return error;
}

error = misc_register(&vmci_host_miscdev);
if (error) {
pr_warn("Module registration error (name=%s, major=%d, minor=%d, err=%d)\n",
vmci_host_miscdev.name,
MISC_MAJOR, vmci_host_miscdev.minor,
error);
pr_warn("Unable to initialize host personality\n");
vmci_ctx_destroy(host_context);
return error;
}

pr_info("VMCI host device registered (name=%s, major=%d, minor=%d)\n",
vmci_host_miscdev.name, MISC_MAJOR, vmci_host_miscdev.minor);

vmci_host_device_initialized = true;
return 0;
}