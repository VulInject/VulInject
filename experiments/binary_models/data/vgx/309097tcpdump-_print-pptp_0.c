void
FUN1(VAR1 *VAR2,
const VAR3 *VAR4)
{
const struct VAR5 *VAR6;
uint32_t VAR7;
uint16_t VAR8;

VAR2->VAR9 = "";
FUN2("");
FUN3(VAR2);

VAR6 = (const struct VAR5 *)VAR4;

if (VAR2->VAR10) {
FUN2("", FUN4(VAR6->VAR11));
}
if (VAR2->VAR10) {
switch(FUN4(VAR6->VAR12)) {
case VAR13:
FUN2("");
break;
case VAR14:
FUN2("");
break;
default:
FUN2("");
break;
}
}

VAR7 = FUN5(VAR6->VAR15);
if (VAR7 != VAR16) {
FUN2("", VAR7);
}
if (VAR2->VAR10 || VAR7 != VAR16) {
FUN2("", VAR7);
}
VAR8 = FUN4(VAR6->VAR8);
if (VAR8 < VAR17) {
FUN2("",
VAR18[VAR8]);
} else {
FUN2("", VAR8);
}
FUN6(VAR6->VAR19);

VAR4 += 12;

switch(VAR8) {
case VAR20:
FUN7(VAR2, VAR4);
break;
case VAR21:
FUN8(VAR2, VAR4);
break;
case VAR22:
FUN9(VAR2, VAR4);
break;
case VAR23:
FUN10(VAR2, VAR4);
break;
case VAR24:
FUN11(VAR2, VAR4);
break;
case VAR25:
FUN12(VAR2, VAR4);
break;
case VAR26:
FUN13(VAR2, VAR4);
break;
case VAR27:
FUN14(VAR2, VAR4);
break;
case VAR28:
FUN15(VAR2, VAR4);
break;
case VAR29:
FUN16(VAR2, VAR4);
break;
case VAR30:
FUN17(VAR2, VAR4);
break;
case VAR31:
FUN18(VAR2, VAR4);
break;
case VAR32:
FUN19(VAR2, VAR4);
break;
case VAR33:
FUN20(VAR2, VAR4);
break;
case VAR34:
FUN21(VAR2, VAR4);
break;
default:

break;
}
}