static int virLXCControllerSetupDev(virLXCController *ctrl)
{
g_autofree char *mount_options = NULL;
g_autofree char *opts = NULL;
g_autofree char *dev = NULL;

VIR_DEBUG("Setting up /dev/ for container");

mount_options = virSecurityManagerGetMountOptions(ctrl->securityManager,
ctrl->def);

dev = g_strdup_printf("/%s/%s.dev", LXC_STATE_DIR, ctrl->def->name);



opts = g_strdup_printf("mode=755,size=65536%s", mount_options);

if (virFileSetupDev(dev, opts) < 0)
return -1;

if (lxcContainerChown(ctrl->def, dev) < 0)
return -1;

return 0;
}