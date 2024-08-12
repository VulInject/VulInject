static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5) {
char VAR6[VAR7];
uint32_t VAR8;
uint32_t VAR9;
VAR10 *VAR11;
FUN2("");
VAR8 = FUN3(VAR2);
VAR11 = (VAR10 *)VAR2->VAR12;
if (FUN4(VAR2, VAR6, VAR7) > 0) {
FUN2("", VAR6);
}
VAR9 = FUN3(VAR2);
{
uint32_t VAR13;
for (VAR13 = 0; VAR13 < VAR9; VAR13++) {
char VAR14[VAR7];
uint32_t VAR15;
char VAR16[VAR17];
uint32_t VAR18;
uint64_t VAR19;
float VAR20;
double VAR21;
FUN4(VAR2, VAR14, VAR7);
VAR15 = FUN3(VAR2);
switch (VAR15) {
case 0:
FUN4(VAR2, VAR16, VAR17);
FUN2(""%VAR22\"", VAR14, VAR16);
break;
case 1:
VAR18 = FUN3(VAR2);
FUN2("", VAR14, VAR18);
break;
case 2:
VAR19 = FUN5(VAR2);
FUN2("", VAR14, VAR19);
break;
case 3:
VAR18 = FUN3(VAR2);
FUN2("", VAR14, VAR18);
break;
case 4:
VAR19 = FUN5(VAR2);
FUN2("", VAR14, VAR19);
break;
case 5:
VAR20 = FUN6(VAR2);
FUN2("", VAR14, VAR20);
break;
case 6:
VAR21 = FUN7(VAR2);
FUN2("", VAR14, VAR21);
break;
default:
FUN2("", VAR15);
FUN8(VAR2, VAR23);
break;
}
}
}
FUN9(VAR2, "", VAR11, VAR8);

if (VAR5) FUN10(VAR2);
}