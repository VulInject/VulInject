static int FUN1(struct VAR1 *VAR2,
enum nl80211_iftype VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u8 VAR6 = FUN3(VAR5, VAR7);
enum led_ctl_mode VAR8 = VAR9;
u8 VAR10 = VAR11;

VAR6 &= 0xfc;

switch (VAR3) {
case VAR12:
VAR10 = VAR11;
FUN4(VAR5, VAR13, VAR14,
"");
break;
case VAR15:
VAR10 = VAR16;
FUN4(VAR5, VAR13, VAR14,
"");
break;
case VAR17:
VAR10 = VAR18;
VAR8 = VAR19;
FUN4(VAR5, VAR13, VAR14,
"");
break;
case VAR20:
VAR10 = VAR21;
VAR8 = VAR19;
FUN4(VAR5, VAR13, VAR14,
"");
break;
case VAR22:
VAR10 = VAR16;
FUN4(VAR5, VAR13, VAR14,
"");
break;
default:
FUN5("", VAR3);
return 1;

}


if (VAR10 != VAR21 &&
VAR5->VAR23.VAR24 < VAR25) {
VAR10 = VAR11;
VAR8 = VAR9;
}
if (VAR10 == VAR11 || VAR10 == VAR18) {
FUN6(VAR2);
FUN7(VAR2);
} else if (VAR10 == VAR16 || VAR10 == VAR21) {
FUN8(VAR2);
FUN9(VAR2);
} else {
FUN4(VAR5, VAR26, VAR27,
"",
VAR10);
}
FUN10(VAR5, VAR7, VAR6 | VAR10);

VAR5->VAR28->VAR29->FUN11(VAR2, VAR8);
if (VAR10 == VAR21)
FUN10(VAR5, VAR30 + 1, 0x00);
else
FUN10(VAR5, VAR30 + 1, 0x66);
return 0;
}