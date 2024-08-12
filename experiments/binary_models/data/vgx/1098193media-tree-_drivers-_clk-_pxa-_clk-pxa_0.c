void FUN1(struct VAR1 *VAR2,
FUN2 (*VAR3)(unsigned int), void VAR4 *VAR5,
void VAR4 *VAR6)
{
unsigned int VAR7 = VAR2->VAR7;
unsigned int VAR8, VAR9, VAR10;
unsigned long VAR11;

FUN3(VAR11);


VAR9 = VAR10 = FUN4(VAR5);
if ((VAR9 & VAR12) > FUN5(VAR2->VAR13)) {
VAR9 = (VAR9 & ~VAR12);
VAR9 |= FUN5(VAR2->VAR13);
}
VAR10 =
(VAR10 & ~VAR12) |
FUN5(VAR2->VAR13);


if (VAR2->VAR14) {
VAR9  |= VAR15;
VAR10 |= VAR15;
} else {
VAR10 &= ~VAR15;
}


FUN6(VAR2->VAR6, VAR6);

asm volatile(
""
""
""
""
""
""
""
""
""
: "" (VAR8)
: "" (VAR5), "" (VAR7), "" (VAR9),
"" (VAR10)
: "", "");

FUN7(VAR11);
}