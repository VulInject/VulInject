int FUN1(const char *VAR1, const char **VAR2, VAR3 *VAR4)
{
FUN2();

VAR5 *VAR6 = FUN3();
if (!VAR6)
return -1;

VAR7 *VAR8 = FUN4(FUN5(""));

for (const char **VAR9 = VAR2; *VAR9; ++VAR9)
FUN6(VAR8, "", *VAR9);

VAR10 *VAR11 = FUN7("", VAR1, VAR8);
FUN8(VAR8);

VAR12 *VAR13 = NULL;
VAR10 *VAR14 = FUN9(VAR6,
"",
VAR11,
VAR15,
-1,
NULL,
&VAR13);

if (VAR13)
{
FUN10(FUN11(""), VAR13->VAR16);
FUN12(VAR13);
return -2;
}


char *VAR17, *VAR18;
VAR19 *VAR9;
FUN13(VAR14, "", &VAR9);
while (FUN14(VAR9, "", &VAR17, &VAR18))
FUN15(VAR4, VAR17, VAR18);

FUN16(VAR14);

return 0;
}