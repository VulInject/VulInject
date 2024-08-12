static void FUN1(struct VAR1 *VAR2, u32 VAR3)
{
long VAR4 = FUN2(VAR2->VAR5);
u32 VAR6 = FUN3(VAR4, VAR3);
u32 VAR7;
u32 VAR8;

if (VAR4 < VAR3) {
FUN4(VAR2->VAR9, "",
VAR3);
VAR7 = VAR10;
} else {
if (VAR6 == 1) {
VAR7 = VAR10;
} else if (VAR6 == 2) {
VAR7 = VAR11;
} else if (VAR6 <= 4) {
VAR7 = VAR12;
} else if (VAR6 <= 8) {
VAR7 = VAR13;
} else {
FUN4(VAR2->VAR9, "",
VAR3);
VAR7 = VAR13;
}
}


VAR8 = FUN5(VAR2->VAR14 + VAR15);

VAR8 &= ~(VAR16 | VAR17);
VAR8 |= FUN6(VAR16, VAR18)
| FUN6(VAR17, VAR7);

FUN7(VAR8, VAR2->VAR14 + VAR15);
}