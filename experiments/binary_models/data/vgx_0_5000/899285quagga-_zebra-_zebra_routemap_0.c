zebra_route_set_add (struct vty *vty, struct route_map_index *index,
const char *command, const char *arg)
{
int ret;

ret = route_map_add_set (index, command, arg);
if (ret)
{
switch (ret)
{
case RMAP_RULE_MISSING:
vty_out (vty, "%% Zebra Can't find rule.%s", VTY_NEWLINE);
return CMD_WARNING;
case RMAP_COMPILE_ERROR:
vty_out (vty, "%% Zebra Argument is malformed.%s", VTY_NEWLINE);
return CMD_WARNING;
}
}
return CMD_SUCCESS;
}