static int
FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
VAR5 *VAR6;
uint_t VAR7, VAR8;
char **VAR9;
uint_t VAR10;


if (FUN2(VAR2) == 0) {
if (FUN3(VAR11, VAR2,
VAR12, "", &VAR9, &VAR10) !=
VAR13) {
FUN4(VAR14,
"",
FUN5(VAR2));
return (VAR15);
}
if (VAR10 != 1 || *VAR9 == NULL || **VAR9 == 0) {
FUN4(VAR14, ""
"", FUN5(VAR2));
FUN6(VAR9);
return (VAR15);
}
(void) snprintf(VAR3, VAR4, "", *VAR9);
FUN6(VAR9);
return (VAR16);
}


if (FUN7(VAR11, VAR2,
VAR12, "", (int **)&VAR6, &VAR10) != VAR16) {
return (VAR15);
}


VAR7 = FUN8(VAR6[0].VAR17);
VAR8 = FUN9(VAR6[0].VAR17);

if (FUN10(FUN11(VAR2))
== VAR18) {
VAR8 = (VAR7 << 3) | VAR8;
VAR7 = 0;
}

if (VAR8 != 0)
(void) snprintf(VAR3, VAR4, "", VAR7, VAR8);
else
(void) snprintf(VAR3, VAR4, "", VAR7);

FUN6(VAR6);
return (VAR16);
}