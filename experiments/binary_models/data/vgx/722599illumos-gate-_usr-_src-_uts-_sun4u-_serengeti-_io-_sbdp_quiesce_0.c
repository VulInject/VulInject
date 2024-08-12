static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
major_t	VAR5;
char	*VAR6;

for (; VAR2 != NULL; VAR2 = FUN2(VAR2)) {
char	VAR7[40], VAR8[40], *VAR9;

if (FUN1(FUN3(VAR2), VAR4)) {
return (VAR10);
}

if (!FUN4(VAR2))
continue;

VAR5 = (VAR11)-1;
if ((VAR6 = FUN5(VAR2)->VAR12) != NULL)
VAR5 = FUN6(VAR6);

if (FUN7(VAR6)) {
FUN8("",
VAR6, VAR5);
continue;
}

if ((VAR9 = FUN9(VAR2)) == NULL)
VAR9 = "";

VAR7[0] = 0;
if (FUN10(VAR2, VAR7, VAR8) == 0) {
if (VAR8[0] != 0) {
FUN8("",
VAR7, VAR9, VAR8);
} else {
FUN8("",
VAR7, VAR9);
}
} else {
FUN8("", VAR6, VAR9);
}

if (FUN11(VAR2, VAR13) != VAR14) {
(void) sprintf(FUN12(&VAR4->VAR15),
"", VAR5);

FUN13(&VAR4->VAR15, VAR16, NULL);
FUN14(VAR2);
FUN15(VAR4) = VAR2;
return (VAR17);
}
}

return (VAR14);
}