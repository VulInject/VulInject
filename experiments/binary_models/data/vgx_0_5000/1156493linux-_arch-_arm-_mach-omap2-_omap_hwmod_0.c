static int _setup_reset(struct omap_hwmod *oh)
{
int r = 0;

if (oh->_state != _HWMOD_STATE_INITIALIZED)
return -EINVAL;

if (oh->flags & HWMOD_EXT_OPT_MAIN_CLK)
return -EPERM;

if (oh->rst_lines_cnt == 0) {
r = _enable(oh);
if (r) {
pr_warn("omap_hwmod: %s: cannot be enabled for reset (%d)\n",
oh->name, oh->_state);
return -EINVAL;
}
}

if (!(oh->flags & HWMOD_INIT_NO_RESET))
r = _reset(oh);

return r;
}