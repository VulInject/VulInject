FUN1 (struct VAR1          *VAR2,
enum zoran_codec_mode  VAR3)
{
u32 VAR4;

switch (VAR3) {
case VAR5:
FUN2(~VAR6, VAR7);
VAR4 = FUN3(VAR8);
if ((VAR4 & (1 << 10)) && VAR2->VAR9.VAR10 != VAR11) {
VAR4 += ((1 << 10) | 1);
}
FUN4(VAR4, VAR8);
break;
case VAR12:
case VAR13:
default:
if ((VAR2->VAR14 & VAR15) ||
(VAR2->VAR9.VAR10 == VAR11 &&
(VAR2->VAR14 & VAR16)))
FUN2(~VAR6, VAR7);
else
FUN5(VAR6, VAR7);
VAR4 = FUN3(VAR8);
if (!(VAR4 & (1 << 10)) && VAR2->VAR9.VAR10 != VAR11) {
VAR4 -= ((1 << 10) | 1);
}
FUN4(VAR4, VAR8);
break;
}
}