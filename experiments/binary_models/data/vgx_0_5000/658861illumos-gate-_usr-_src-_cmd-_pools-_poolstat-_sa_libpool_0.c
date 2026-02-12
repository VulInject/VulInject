void
sa_libpool_update(statistic_bag_t *sbag, int flags)
{
static int changed;


if (flags & SA_REFRESH) {
changed = 0;
if (pool_conf_update(conf, &changed) != PO_SUCCESS)
die(gettext(ERR_CONF_UPDATE), get_errstr());
sbag->sb_changed = changed;
}
if (strcmp(sbag->sb_type, PSET_TYPE_NAME) == 0) {
if (changed & POU_PSET || changed & POU_CPU)
((pset_statistic_bag_t *)sbag->bag)->pset_sb_changed =
changed;
else
((pset_statistic_bag_t *)sbag->bag)->pset_sb_changed =
0;
update_pset(sbag);
} else if (strcmp(sbag->sb_type, POOL_TYPE_NAME) == 0) {
return;
} else {
die(gettext(ERR_UNSUPP_STYPE), sbag->sb_type);
}
}