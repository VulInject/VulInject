static char **
FUN1(papi_service_t VAR1)
{
papi_status_t VAR2;
papi_printer_t VAR3 = NULL;
char *VAR4[] = { "", NULL };
char **VAR5 = NULL;

VAR2 = FUN2(VAR1, "", VAR4, NULL, &VAR3);
if ((VAR2 == VAR6) && (VAR3 != NULL)) {
VAR7 **VAR8 =
FUN3(VAR3);
if (VAR8 != NULL) {
void *VAR9 = NULL;
char *VAR10 = NULL;

for (VAR2 = FUN4(VAR8,
&VAR9, "", &VAR10);
VAR2 == VAR6;
VAR2 = FUN4(VAR8,
&VAR9, NULL, &VAR10))
FUN5(&VAR5, strdup(VAR10));
}
FUN6(VAR3);
}

return (VAR5);
}