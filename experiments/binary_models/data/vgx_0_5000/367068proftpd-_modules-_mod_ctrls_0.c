MODRET set_ctrlsacls(cmd_rec *cmd) {
int res;
char **actions = NULL;
const char *bad_action = NULL;

CHECK_ARGS(cmd, 4);
CHECK_CONF(cmd, CONF_ROOT);



actions = pr_ctrls_parse_acl(cmd->tmp_pool, cmd->argv[1]);


if (strcmp(cmd->argv[2], "allow") != 0 &&
strcmp(cmd->argv[2], "deny") != 0) {
CONF_ERROR(cmd, "second parameter must be 'allow' or 'deny'");
}


if (strcmp(cmd->argv[3], "user") != 0 &&
strcmp(cmd->argv[3], "group") != 0) {
CONF_ERROR(cmd, "third parameter must be 'user' or 'group'");
}

res = pr_ctrls_set_module_acls2(ctrls_acttab, ctrls_pool, actions,
cmd->argv[2], cmd->argv[3], cmd->argv[4], &bad_action);
if (res < 0) {
CONF_ERROR(cmd, pstrcat(cmd->tmp_pool, ": unknown action: '",
bad_action, "'", NULL));
}

return PR_HANDLED(cmd);
}