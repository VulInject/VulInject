void FUN1(struct VAR1 *VAR2)
{
struct cpumask VAR3;
HV_Coord VAR4;
unsigned int VAR5;
int VAR6;
HV_NMI_Info VAR7[VAR8];


VAR5 = 100;
FUN2(&VAR3, VAR2);
while (!FUN3(&VAR3) && VAR5) {
FUN4(VAR6, &VAR3) {
VAR4.VAR9 = FUN5(VAR6);
VAR4.VAR10 = FUN6(VAR6);
VAR7[VAR6] = FUN7(VAR4, VAR11, 0);
if (VAR7[VAR6].VAR12 == VAR13)
FUN8(VAR6, &VAR3);
}

FUN9(10);
FUN10();
VAR5--;
}


if (!FUN3(&VAR3)) {
FUN4(VAR6, &VAR3) {


FUN8(VAR6, VAR2);

switch (VAR7[VAR6].VAR12) {
case VAR14:
FUN11("",
VAR6, VAR7[VAR6].VAR15);
break;
case VAR16:
FUN11("",
VAR6);
break;
case VAR17:
FUN12(1, "");
break;
default:  
FUN11("",
VAR6, VAR7[VAR6].VAR12, VAR7[VAR6].VAR15);
break;
}
}
}
}