int
FUN1()
{
tchar VAR1;
static int	VAR2;

VAR3++;
VAR4[VAR5].VAR6 = 0;
if ((VAR7 == VAR8) && (VAR4[VAR9].VAR6 == -1)) {
FUN2(1);
return (0);
}
FUN3();
if (VAR10 || !VAR11) {
FUN4();
return (0);
}
if (VAR12)
goto VAR13;
if (VAR14)
if (VAR2)
goto VAR15;
else
goto VAR16;
VAR14++;
if (VAR2)
goto VAR15;
while ((FUN5(VAR1 = FUN6())) == '') {
VAR2++;
VAR4[VAR5].VAR6 += VAR17;
VAR18 = VAR17;
}
if (VAR19) {
VAR20:
VAR3 = VAR14 = VAR21 = VAR2 = 0;
FUN7();
return (0);
}
VAR21 = VAR1;
if (VAR2) {
VAR15:
FUN8();
if (VAR22 || VAR23)
goto VAR24;
VAR25 += VAR2 * VAR17;
VAR2 = 0;
FUN3();
if (VAR26)
goto VAR24;
if (VAR19)
goto VAR20;
}
VAR16:
if (VAR27)
goto VAR28;
if (VAR12 || !VAR23)
VAR13:
if (FUN9(0))
goto VAR29;
if (!FUN10())
goto VAR16;
VAR28:
if (VAR19)
VAR14 = 0;
VAR30 = VAR31 = 0;
if (VAR32) {
if (VAR33 == 1)
VAR30 = VAR34;
else
VAR30 = VAR34 / (VAR33 - 1);
VAR30 = (VAR30 / VAR35) * VAR35;
VAR31 = VAR34 - VAR30*(VAR33-1);
}
VAR36 = 1;
FUN8();
VAR27 = 0;
if (!VAR26)
goto VAR16;
if (!VAR19)
goto VAR24;
VAR29:
VAR14 = 0;
FUN11();
VAR24:
VAR3 = 0;

return (0);
}