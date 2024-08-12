static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6)
{
unsigned short VAR7[2] = { 0, 0 };
VAR8 *VAR9;

FUN2(VAR4, VAR10, "",
return);
switch (VAR4->VAR11) {
case VAR12:
if (VAR4->VAR13) {
fprintf(VAR2, "");
FUN3(VAR2, FUN4(VAR4->VAR13));
fprintf(VAR2, "");
}
break;
case VAR14:
if (VAR4->VAR15) {
switch (VAR4->VAR16.VAR17.VAR18.VAR19.VAR20) {
case VAR21:
fprintf(VAR2, "");
break;
case VAR22:
fprintf(VAR2, "");
break;
case VAR23:
fprintf(VAR2, "");
break;
default:


FUN5("", VAR24, "",
FUN6(
VAR4->VAR16.VAR17.VAR18.VAR19.VAR20));
break;

}
} else {


FUN7(VAR10, "");

}
break;
case VAR25:
if (FUN8(VAR4->VAR16.VAR26.VAR27)) {
fprintf(VAR2, "");
} else if (FUN9(VAR4->VAR16.VAR26.VAR27)) {
fprintf(VAR2, "");
}

VAR9 = VAR4->VAR16.VAR26.VAR28;
while (VAR9) {
FUN10(VAR7,
VAR6->VAR29, VAR6->VAR30, VAR4, VAR9);

FUN11(VAR2, VAR9,
VAR6->VAR31, VAR7,
VAR32, '');
FUN11(VAR2, VAR9,
VAR6->VAR31, VAR7,
VAR33, '');


FUN12(VAR2, VAR9,
VAR4->VAR16.VAR26.VAR34 == VAR35
&& VAR9 == VAR4->VAR16.VAR26.VAR28);

FUN13(VAR2, VAR9,
VAR6->VAR31, VAR7,
VAR32, '');
FUN13(VAR2, VAR9,
VAR6->VAR31, VAR7,
VAR33, '');

VAR6->VAR31[VAR32] =
VAR9->VAR31[VAR32];
VAR6->VAR31[VAR33] =
VAR9->VAR31[VAR33];

VAR9 = VAR9->VAR15;
}
FUN14(VAR2, VAR4->VAR16.VAR26.VAR27);
break;
default:


FUN5("", VAR24, "",
FUN15(VAR4->VAR11));
break;

}
}