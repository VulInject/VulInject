static int FUN1(const char *VAR1, VAR2 **VAR3)
{
VAR4 *VAR5;
const char *VAR6;
int VAR7;


VAR5 = FUN2(VAR1);
FUN3(VAR5, FUN4(VAR8));


if (VAR9) {

if (FUN5(VAR5) &&
FUN6(FUN7(VAR5), VAR9)) {
VAR7 = VAR10;
goto VAR11;
}
FUN8(VAR5, NULL);
}


VAR6 = FUN9(VAR5);
VAR7 = FUN10(VAR6, VAR3, NULL, NULL);
if (VAR7 == VAR12) {

char *VAR13 = FUN11(VAR1, NULL);

int VAR14 = FUN10(VAR13, VAR3, NULL, NULL);
free(VAR13);
if (VAR14 == VAR12) {
VAR7 = VAR15;
goto VAR11;
}

int VAR16 = FUN12(VAR17, *VAR3);
if ((VAR16 & VAR18) != VAR18) {
VAR7 = VAR19;
goto VAR11;
}

FUN13(VAR3);
*VAR3 = FUN14();
(*VAR3)->VAR20 = xstrdup(VAR6);
(*VAR3)->VAR21 = VAR22;
}
else if (!VAR7) {
int VAR16 = FUN12(VAR17, *VAR3);
if ((VAR16 & VAR23) != VAR23) {
VAR7 = VAR19;
goto VAR11;
}
}

VAR11:
FUN15(&VAR5);
return VAR7;
}