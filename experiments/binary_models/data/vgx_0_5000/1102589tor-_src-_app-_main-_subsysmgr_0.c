int
subsystems_register_options_formats(config_mgr_t *mgr)
{
tor_assert(mgr);
check_and_setup();

for (unsigned i = 0; i < n_tor_subsystems; ++i) {
const subsys_fns_t *sys = tor_subsystems[i];
if (sys->options_format) {
int options_idx = config_mgr_add_format(mgr, sys->options_format);
sys_status[i].options_idx = options_idx;
log_debug(LD_CONFIG, "Added options format for %s with index %d",
sys->name, options_idx);
}
}
return 0;
}