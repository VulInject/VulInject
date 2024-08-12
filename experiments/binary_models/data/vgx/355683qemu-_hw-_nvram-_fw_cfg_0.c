static char *FUN1(char *VAR1, VAR2 *VAR3,
int *VAR4)
{
VAR5 *VAR6 = NULL;
VAR7 *VAR8;
int VAR9;
unsigned int VAR10;
int VAR11;

if (!FUN2(VAR1, &VAR8, VAR3, &VAR6)) {
FUN3("",
VAR1, VAR6->VAR12);
FUN4(VAR6);
return NULL;
}


if (*VAR3 < 30) {
goto VAR13;
}


VAR10 = FUN5(VAR8);
if (VAR10 == 0xd8ff) {
VAR9 = VAR14;
} else if (VAR10 == 0x4d42) {
VAR9 = VAR15;
} else {
goto VAR13;
}


if (VAR9 == VAR15) {
VAR11 = FUN5(&VAR8[28]);
if (VAR11 != 24) {
goto VAR13;
}
}


*VAR4 = VAR9;

return VAR8;

VAR13:
FUN3(""
"", VAR1);
FUN6(VAR8);
return NULL;
}