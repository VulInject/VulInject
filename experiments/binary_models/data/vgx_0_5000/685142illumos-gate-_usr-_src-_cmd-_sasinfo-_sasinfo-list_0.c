int
sas_util_list_hba(int hbaCount, char **hba_argv, cmdOptions_t *options)
{
HBA_STATUS		status;
int			processHBA_flags = 0;
inputArg_t		input;
int 			err_cnt = 0;


for (; options->optval; options++) {
switch (options->optval) {
case 'v':
processHBA_flags |= PRINT_VERBOSE;
break;
default:
break;
}
}

if ((status = HBA_LoadLibrary()) != HBA_STATUS_OK) {
(void) fprintf(stderr, "%s %s\n",
gettext("Failed to load SM-HBA libraries."
"Reason:"), getHBAStatus(status));
err_cnt++;
return (err_cnt);
}

(void) memset(&input, 0, sizeof (input));

input.wwnCount = hbaCount;
input.wwn_argv = hba_argv;
input.pflag = processHBA_flags;


err_cnt += processHBA(&input, NULL);

(void) HBA_FreeLibrary();

return (err_cnt);
}