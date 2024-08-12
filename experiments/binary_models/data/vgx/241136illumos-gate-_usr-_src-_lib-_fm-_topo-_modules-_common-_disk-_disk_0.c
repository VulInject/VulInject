static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
char *VAR7)
{
int VAR8;

if (strcmp(VAR9, VAR7) == 0) {
char *VAR10 = NULL;
VAR3 *VAR11 = NULL;

if ((VAR8 = FUN2(VAR2, VAR4,
&VAR10)) != 0)
return (VAR8);

VAR8 = FUN3(VAR2, VAR4, VAR6,
VAR10, &VAR11);
FUN4(VAR2, VAR10);

return (VAR8);
} else if (strcmp(VAR12, VAR7) == 0) {
if (FUN5(VAR2, VAR4) != 0)
return (-1);

return (0);
}

FUN6(VAR2, "", VAR7);
return (-1);
}