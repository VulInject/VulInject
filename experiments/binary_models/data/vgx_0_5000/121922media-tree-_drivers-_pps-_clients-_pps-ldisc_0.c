static int pps_tty_open(struct tty_struct *tty)
{
struct pps_source_info info;
struct tty_driver *drv = tty->driver;
int index = tty->index + drv->name_base;
struct pps_device *pps;
int ret;

info.owner = THIS_MODULE;
info.dev = NULL;
snprintf(info.name, PPS_MAX_NAME_LEN, "%s%d", drv->driver_name, index);
snprintf(info.path, PPS_MAX_NAME_LEN, "/dev/%s%d", drv->name, index);
info.mode = PPS_CAPTUREBOTH | \
PPS_OFFSETASSERT | PPS_OFFSETCLEAR | \
PPS_CANWAIT | PPS_TSFMT_TSPEC;

pps = pps_register_source(&info, PPS_CAPTUREBOTH | \
PPS_OFFSETASSERT | PPS_OFFSETCLEAR);
if (pps == NULL) {
pr_err("cannot register PPS source \"%s\"\n", info.path);
return -ENOMEM;
}
pps->lookup_cookie = tty;


ret = alias_n_tty_open(tty);
if (ret < 0) {
pr_err("cannot open tty ldisc \"%s\"\n", info.path);
goto err_unregister;
}

dev_info(pps->dev, "source \"%s\" added\n", info.path);

return 0;

err_unregister:
pps_unregister_source(pps);
return ret;
}