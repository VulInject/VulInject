static const char *h2_conf_set_early_hints(cmd_parms *cmd,
void *dirconf, const char *value)
{
int val;

if (!strcasecmp(value, "On")) val = 1;
else if (!strcasecmp(value, "Off")) val = 0;
else return "value must be On or Off";

CONFIG_CMD_SET(cmd, dirconf, H2_CONF_EARLY_HINTS, val);
if (cmd->path) {
ap_log_perror(APLOG_MARK, APLOG_WARNING, 0, cmd->pool, 
"H2EarlyHints = %d on path %s", val, cmd->path);
}
return NULL;
}