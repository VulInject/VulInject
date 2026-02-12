static int cvmx_qsfp_select(const struct cvmx_fdt_sfp_info *sfp, bool enable)
{

if (!sfp->is_qsfp) {
debug("%s(%s, %d): not QSFP\n", __func__, sfp->name, enable);
return 0;
}

if (dm_gpio_is_valid(&sfp->select)) {

return dm_gpio_set_value(&sfp->select, !enable);
}

debug("%s: select GPIO unknown\n", __func__);
return 0;
}