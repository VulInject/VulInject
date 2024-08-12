VAR1 FUN1(struct VAR2 *VAR3, u32 VAR4, u32 VAR5,
u32 VAR6, u32 VAR7, u32 VAR8, u32 VAR9)
{
if ((!(VAR4)) ||  (!(VAR5)))
return VAR10;

if ((VAR4 & VAR6) && (VAR5 & VAR8)) {

if (VAR3->VAR11.VAR12 == VAR13) {
VAR3->VAR11.VAR14 = VAR13;
FUN2(VAR3, "");
} else {
VAR3->VAR11.VAR14 = VAR15;
FUN2(VAR3, "");
}
} else if (!(VAR4 & VAR6) && (VAR4 & VAR7) &&
(VAR5 & VAR8) && (VAR5 & VAR9)) {
VAR3->VAR11.VAR14 = VAR16;
FUN2(VAR3, "");
} else if ((VAR4 & VAR6) && (VAR4 & VAR7) &&
!(VAR5 & VAR8) && (VAR5 & VAR9)) {
VAR3->VAR11.VAR14 = VAR15;
FUN2(VAR3, "");
} else {
VAR3->VAR11.VAR14 = VAR17;
FUN2(VAR3, "");
}
return 0;
}