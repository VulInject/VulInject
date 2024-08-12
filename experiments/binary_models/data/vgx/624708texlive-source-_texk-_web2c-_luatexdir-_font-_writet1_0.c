static void FUN1(PDF VAR1)
{
int VAR2, VAR3;
VAR4 *VAR5;
FUN2();
while (!(FUN3() || FUN4())) {
FUN5(VAR1);
if (!FUN6("")) {

FUN7(VAR1);
}
FUN2();
}
VAR6:
VAR7 = true;
VAR8 = false;
if (!FUN4())
return;
VAR9 = strlen("") + 1;

VAR10 = (int) FUN8(VAR11 + VAR9, 0);
if (VAR10 == 0) {
while (!FUN3())
FUN2();
return;
}
VAR12 = FUN9((unsigned) VAR10, VAR4);
for (VAR5 = VAR12; VAR5 - VAR12 < VAR10; VAR5++)
FUN10(VAR5);
VAR13 = xstrdup(VAR11);
FUN2();
while (VAR14) {
FUN11();
FUN2();
}

for (VAR2 = 0; VAR2 < VAR10 && VAR2 < 4; VAR2++)
VAR12[VAR2].VAR15 = true;

VAR3 = 0;
*VAR16 = 0;
for (VAR2 = 0; VAR2 < VAR17; VAR2++) {
if (FUN3())
break;
VAR3 = (int) (VAR3 + VAR18 - VAR11);
FUN12(VAR19, VAR3, VAR20);
strcat(VAR16, VAR11);
FUN2();
}
VAR21 = xstrdup(VAR16);
if (VAR2 == VAR17) {

for (VAR5 = VAR12; VAR5 - VAR12 < VAR10; VAR5++)
if (VAR5->VAR22)
FUN13(VAR5->VAR23);
FUN13(VAR12);
FUN13(VAR13);
FUN13(VAR21);
FUN14();
VAR7 = false;
VAR24 = true;
while (!(FUN3() || FUN4()))
FUN2();
goto VAR6;
}
}