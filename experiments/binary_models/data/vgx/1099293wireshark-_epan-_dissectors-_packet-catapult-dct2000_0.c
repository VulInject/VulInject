static void FUN1(VAR1 *VAR2, gint VAR3,
VAR4 *VAR5, VAR6 *VAR7)
{
guint8                VAR8;
guint8                VAR9;
struct VAR10 *VAR11;
VAR1             *VAR12;
guint16               VAR13;
guint8                VAR14;


VAR11 = (struct VAR10 *)FUN2(FUN3(), VAR5, VAR15, 0);
if (VAR11 == NULL) {

return;
}


VAR8 = FUN4(VAR2, VAR3);
if (VAR7) {
FUN5(VAR7, VAR16, VAR2, VAR3, 1, VAR17);
}
VAR3++;

FUN6(VAR5->VAR18, VAR19, FUN7(VAR8, VAR20, ""));


switch (VAR8) {
case VAR21:
case VAR22:
case VAR23:
VAR11->VAR24 = VAR25;
break;

default:
VAR11->VAR24 = VAR26;
}


switch (VAR8) {
case VAR21:
case VAR27:
case VAR22:
case VAR28:
case VAR23:
case VAR29:


VAR9 = FUN4(VAR2, VAR3++);
switch (VAR9) {
case 0x10:    




VAR3++;

VAR11->VAR30 = VAR31;


VAR13 = FUN8(VAR2, VAR3);
FUN5(VAR7, VAR32, VAR2, VAR3, 2, VAR17);
FUN9(VAR5->VAR18, VAR19,
"", VAR13);
VAR11->VAR13 = VAR13;
VAR3 += 2;


VAR9 = FUN4(VAR2, VAR3++);

switch (VAR9) {
case 0:
VAR3++;
VAR14 = FUN4(VAR2, VAR3);
FUN9(VAR5->VAR18, VAR19, "",
VAR14);
FUN5(VAR7, VAR33,
VAR2, VAR3++, 1, VAR17);
VAR11->VAR14 = VAR14;
break;
case 1:
VAR3++;
VAR14 = FUN4(VAR2, VAR3);
FUN9(VAR5->VAR18, VAR19, "",
VAR14);
FUN5(VAR7, VAR34,
VAR2, VAR3++, 1, VAR17);
VAR11->VAR14 = VAR14;
break;

default:

return;
}
break;

case 0x1a:     




VAR3++;


FUN5(VAR7, VAR35,
VAR2, VAR3, 2, VAR17);
VAR3 += 2;


FUN5(VAR7, VAR36,
VAR2, VAR3, 1, VAR17);
VAR11->VAR30 = (VAR37)FUN4(VAR2, VAR3++);
FUN9(VAR5->VAR18, VAR19, "",
FUN7(VAR11->VAR30, VAR38,
""));

switch (VAR11->VAR30) {
case VAR39:

VAR3++;


VAR11->VAR40 = (VAR41)FUN4(VAR2, VAR3);
FUN5(VAR7, VAR42,
VAR2, VAR3, 1, VAR17);
VAR3++;
break;

case VAR43:

VAR3++;


FUN5(VAR7, VAR32,
VAR2, VAR3, 2, VAR17);
VAR13 = FUN8(VAR2, VAR3);
VAR3 += 2;

FUN9(VAR5->VAR18, VAR19, "", VAR13);
break;

default:
break;
}
break;

default:

return;
}


VAR9 = FUN4(VAR2, VAR3++);
while ((VAR9 != 0x41) && (FUN10(VAR2, VAR3) > 2)) {

if (VAR9 == 0x35) {

VAR3++;
FUN5(VAR7, VAR44,
VAR2, VAR3, 2, VAR17);
VAR3 += 2;


if ((VAR8 == VAR21) || (VAR8 == VAR27)) {
FUN5(VAR7, VAR45,
VAR2, VAR3, 1, VAR46);
VAR3++;
}
}
else if (VAR9 == 0x45) {

VAR3++;
FUN5(VAR7, VAR47,
VAR2, VAR3, 1, VAR46);
VAR3++;
}

VAR9 = FUN4(VAR2, VAR3++);
}






VAR12 = FUN11(VAR2, VAR3);
FUN12(VAR48, VAR12, VAR5, VAR7, NULL);

break;

default:
return;
}
}