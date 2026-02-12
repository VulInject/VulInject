MODRET set_langoptions(cmd_rec *cmd) {
config_rec *c = NULL;
register unsigned int i = 0;
unsigned long opts = 0UL;

if (cmd->argc-1 == 0)
CONF_ERROR(cmd, "wrong number of parameters");

CHECK_CONF(cmd, CONF_ROOT|CONF_VIRTUAL|CONF_GLOBAL);

c = add_config_param(cmd->argv[0], 1, NULL);

for (i = 1; i < cmd->argc; i++) {
if (strcmp(cmd->argv[i], "PreferServerEncoding") == 0) {
opts |= LANG_OPT_PREFER_SERVER_ENCODING;

} else if (strcmp(cmd->argv[i], "RequireValidEncoding") == 0) {
opts |= LANG_OPT_REQUIRE_VALID_ENCODING;

} else {
CONF_ERROR(cmd, pstrcat(cmd->tmp_pool, ": unknown LangOption '",
cmd->argv[i], "'", NULL));
}
}

c->argv[0] = pcalloc(c->pool, sizeof(unsigned long));
*((unsigned long *) c->argv[0]) = opts;

return PR_HANDLED(cmd);
}