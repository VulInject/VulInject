static VAR1
FUN1(char *VAR2, char **VAR3)
{
nwam_error_t VAR4;
nwam_ncp_handle_t VAR5 = NULL;
nwam_ncu_handle_t VAR6 = NULL;

if ((VAR5 = FUN2()) == NULL)
return (VAR7);

VAR4 = FUN3(VAR5, VAR2, VAR8, 0, &VAR6);
if (VAR4 == VAR9)
VAR4 = FUN4(VAR6, VAR3);

FUN5(VAR5);
FUN6(VAR6);
return (VAR4);
}