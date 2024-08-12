VAR1
FUN1(const char *VAR2, size_t VAR3, uint64_t VAR4, char **VAR5)
{
char		*VAR6;
auditd_rc_t	VAR7 = VAR8;
static	uint64_t	VAR9 = 0;
static	uint64_t	VAR10 = 0;
static	uint64_t	VAR11 = 0;

if ((VAR9 > 0) && (VAR4 != VAR9 + 1))
(void) fprintf(VAR12,
"",
VAR4, VAR9);
VAR9 = VAR4;

*VAR5 = NULL;

VAR6 = malloc(VAR13);
if (VAR6 == NULL) {
FUN2((VAR12, "",
VAR4));
VAR7 = VAR14;
*VAR5 = strdup(FUN3(""));
} else {
VAR7 = FUN4(VAR2, VAR4, VAR6, VAR3, VAR15);

if (VAR7 == VAR8) {
FUN5("", VAR16,
VAR17, VAR18, VAR6);
FUN2((VAR12, ""
"",
++VAR10, VAR4, VAR11));
} else if (VAR7 != VAR19) {
FUN2((VAR12, "",
VAR4));
*VAR5 = strdup(FUN3(
""));
} else {
FUN2((VAR12, ""
"",
VAR7, VAR19, VAR4, ++VAR11));
VAR7 = VAR8;
}
free(VAR6);
}
return (VAR7);
}