void FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3;
enum tlb_flush_type VAR4;

VAR3 = VAR2->VAR5.VAR6;
if (FUN2(VAR3 == VAR7))
return;

FUN3();

FUN4();
VAR4 = FUN5(VAR2, false);
if (VAR4 == VAR8) {
FUN6(VAR3, VAR9);
} else if (VAR4 == VAR10) {
if (!FUN7(VAR11)) {
unsigned long VAR12 = VAR13;

if (FUN8(&VAR2->VAR5.VAR14) > 0)
VAR12 |= VAR15;
FUN9(VAR3, VAR12, VAR16,
VAR17, 0, -1UL);
} else if (FUN10()) {
if (FUN11(VAR2))
FUN12(VAR3, VAR18);
else
FUN12(VAR3, VAR9);
} else {
FUN13(VAR2, VAR3, VAR9);
}
}
FUN14();
}