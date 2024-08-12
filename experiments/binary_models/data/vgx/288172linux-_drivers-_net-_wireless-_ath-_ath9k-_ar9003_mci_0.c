VAR1 FUN1(struct VAR2 *VAR3, u32 VAR4)
{
struct VAR5 *VAR6 = &VAR3->VAR7.VAR6;
u32 VAR8 = 0, VAR9;
u8 VAR10;

switch (VAR4) {
case VAR11:
if (VAR6->VAR12) {
VAR8 = FUN2(VAR3, VAR13);

if ((VAR8 == 0xdeadbeef) || (VAR8 == 0xffffffff))
VAR8 = 0;
}
VAR8 &= VAR14;
break;
case VAR15:
VAR8 = FUN3(FUN2(VAR3, VAR16), VAR17);

if (VAR8 < VAR6->VAR18)
VAR6->VAR19 = VAR8;
else
VAR6->VAR19 = 0;
break;
case VAR20:
VAR8 = FUN3(FUN2(VAR3, VAR21),
VAR22);

VAR8 <<= 4;
break;
case VAR23:
VAR8 = FUN3(FUN2(VAR3, VAR21),
VAR24) ?
VAR25 : VAR26;
break;
case VAR27:
VAR6->VAR28 = VAR26;
FUN4(VAR3, true);
FUN5(VAR3, true);

if (VAR6->VAR29)
FUN6(VAR3, false, true);

FUN7(VAR3, false);
break;
case VAR30:
FUN8(VAR3);
VAR6->VAR31 = true;

if (VAR6->VAR32 & VAR33) {

if ((FUN2(VAR3, VAR34) &
VAR35) !=
VAR35) {
FUN9(VAR3);
}
}
break;
case VAR36:
FUN10(VAR3, true);
break;
case VAR37:
FUN4(VAR3, true);
break;
case VAR38:
VAR10 = VAR39;
FUN11(VAR3, true, VAR10);
break;
case VAR40:
VAR9 = FUN12(VAR3);
if ((VAR9 - VAR6->VAR41) <= VAR42) {
FUN13(FUN14(VAR3), VAR43,
"");
break;
}
FUN13(FUN14(VAR3), VAR43, "");
VAR6->VAR41 = VAR9;
FUN15(VAR3);
VAR6->VAR44 = true;
VAR6->VAR45 = true;
FUN5(VAR3, true);
FUN7(VAR3, false);
break;
case VAR46:
VAR8 = !(VAR6->VAR32 & VAR47);
break;
case VAR48:
VAR8 = (!VAR6->VAR29 && VAR6->VAR45) ? 1 : 0;
VAR6->VAR45 = false;
break;
case VAR49:
if (FUN16(VAR3))
VAR8 = FUN17(VAR3);
break;
case VAR50:
if (FUN16(VAR3))
FUN18(VAR3);
break;
case VAR51:
if (FUN16(VAR3))
VAR8 = FUN19(VAR3);
break;
case VAR52:
if (FUN16(VAR3))
VAR8 = FUN20(VAR3);
break;
default:
break;
}

return VAR8;
}