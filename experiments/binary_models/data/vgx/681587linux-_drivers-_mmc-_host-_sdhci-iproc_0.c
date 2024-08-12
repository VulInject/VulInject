static VAR1 FUN1(struct VAR2 *VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR3);
struct VAR7 *VAR8 = FUN3(VAR6);
u32 VAR9;
u16 VAR10;

if ((VAR4 == VAR11) && VAR8->VAR12) {

VAR9 = VAR8->VAR13;
} else if ((VAR4 == VAR14 || VAR4 == VAR15) &&
VAR8->VAR16) {

VAR9 = VAR8->VAR17;
} else {
VAR9 = FUN4(VAR3, (VAR4 & ~3));
}
VAR10 = VAR9 >> FUN5(VAR4) & 0xffff;
return VAR10;
}