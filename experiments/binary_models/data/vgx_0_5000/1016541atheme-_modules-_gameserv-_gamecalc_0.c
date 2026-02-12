static void
command_df(struct sourceinfo *si, int parc, char *parv[])
{
struct mychan *mc;
char buf[BUFSIZE];
unsigned int i, dice;

if (!gs_do_parameters(si, &parc, &parv, &mc))
return;

if (parc < 1)
{
command_fail(si, fault_needmoreparams, STR_INSUFFICIENT_PARAMS, "DF");
command_fail(si, fault_needmoreparams, _("Syntax: DF <dice>"));
return;
}

if (! string_to_uint(parv[0], &dice) || dice > 30 || dice < 1)
{
command_fail(si, fault_badparams, _("Only 1-30 dice may be thrown at one time."));
return;
}

*buf = '\0';

for (i = 0; i < dice; i++)
{
int roll = atheme_random() % 3;

if (*buf != '\0')
mowgli_strlcat(buf, df_dice_table[roll], BUFSIZE);
else
mowgli_strlcpy(buf, df_dice_table[roll], BUFSIZE);
}

gs_command_report(si, _("Result: %s"), buf);
}

static struct command cmd_wod = {
.name           = "WOD",
.desc           = N_("WOD-style dice generation."),
.access         = AC_NONE,
.maxparc        = 7,
.cmd            = &command_wod,
.help           = { .path = "gameserv/roll" },
};