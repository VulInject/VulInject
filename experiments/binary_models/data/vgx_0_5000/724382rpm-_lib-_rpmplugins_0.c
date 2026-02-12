rpmRC rpmpluginsCallScriptletPre(rpmPlugins plugins, const char *s_name, int type)
{
plugin_scriptlet_pre_func hookFunc;
int i;
rpmRC rc = RPMRC_OK;

for (i = 0; i < plugins->count; i++) {
rpmPlugin plugin = plugins->plugins[i];
RPMPLUGINS_SET_HOOK_FUNC(scriptlet_pre);
if (hookFunc && hookFunc(plugin, s_name, type) == RPMRC_FAIL) {
rpmlog(RPMLOG_ERR, "Plugin %s: hook scriplet_pre failed\n", plugin->name);
rc = RPMRC_FAIL;
}
}

return rc;
}