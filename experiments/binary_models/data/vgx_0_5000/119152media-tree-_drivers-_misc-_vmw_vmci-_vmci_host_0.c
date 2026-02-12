static int vmci_host_setup_notify(struct vmci_ctx *context,
unsigned long uva)
{
int retval;

if (context->notify_page) {
pr_devel("%s: Notify mechanism is already set up\n", __func__);
return VMCI_ERROR_DUPLICATE_ENTRY;
}


BUILD_BUG_ON(sizeof(bool) != sizeof(u8));
if (!access_ok(VERIFY_WRITE, (void __user *)uva, sizeof(u8)))
return VMCI_ERROR_GENERIC;


retval = get_user_pages_fast(uva, 1, 1, &context->notify_page);
if (retval != 1) {
context->notify_page = NULL;
return VMCI_ERROR_GENERIC;
}


context->notify = kmap(context->notify_page) + (uva & (PAGE_SIZE - 1));
vmci_ctx_check_signal_notify(context);

return VMCI_SUCCESS;
}