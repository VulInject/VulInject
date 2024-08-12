VAR1
FUN1(VAR2 *VAR3, char *VAR4, char *VAR5, char **VAR6,
int *VAR7)
{
krb5_error_code VAR8;
int VAR9 = 1, VAR10, VAR11;
char **VAR12 = NULL, *VAR13[2] = { NULL };
VAR14 *VAR15 = NULL, *VAR16;

if (strlen(VAR4) == 0)
return FUN2(0, VAR17, VAR18);

VAR13[0] = VAR5;


VAR8 = ldap_search_ext_s(VAR3, VAR4, VAR19, 0, VAR13, 0, NULL,
NULL, &VAR20, VAR21, &VAR15);
if (VAR8 != VAR22) {
FUN3(VAR15);
return FUN2(0, VAR8, VAR18);
}


if (VAR5 == NULL || VAR6 == NULL)
goto VAR23;

*VAR7 = 0;

VAR16 = FUN4(VAR3, VAR15);
if (VAR16 == NULL)
goto VAR23;
VAR12 = FUN5(VAR3, VAR16, VAR5);
if (VAR12 == NULL)
goto VAR23;


for (VAR10 = 0; VAR6[VAR10]; VAR10++) {
for (VAR11 = 0; VAR12[VAR11]; VAR11++) {
if (FUN6(VAR6[VAR10], VAR12[VAR11]) == 0) {
*VAR7 |= (VAR9 << VAR10);
break;
}
}
}

VAR23:
FUN3(VAR15);
FUN7(VAR12);
return 0;
}