static void
os_cmd_set_akicktime_func(struct sourceinfo *const restrict si, const int parc, char **const restrict parv)
{
if (! parc)
{
(void) command_fail(si, fault_needmoreparams, STR_INSUFFICIENT_PARAMS, "SET AKICKTIME");
(void) command_fail(si, fault_needmoreparams, _("Syntax: SET AKICKTIME <minutes>"));
return;
}

const char *const param = parv[0];
unsigned int value;

if (! string_to_uint(param, &value) || ! value)
{
(void) command_fail(si, fault_badparams, STR_INVALID_PARAMS, "SET AKICKTIME");
(void) command_fail(si, fault_badparams, _("Syntax: SET AKICKTIME <minutes>"));
return;
}

chansvs.akick_time = value * SECONDS_PER_MINUTE;

(void) command_success_nodata(si, _("You have successfully set \2%s\2 to \2%u\2 minutes."), "AKICKTIME", value);
(void) logcommand(si, CMDLOG_ADMIN, "SET:AKICKTIME: \2%u\2", value);
}