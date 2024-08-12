static void FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3) {
if (VAR2->VAR3 & VAR4) {
FUN2(VAR2);
}
FUN3(VAR2);
if (VAR2->VAR3 & VAR5) {
FUN4(VAR2);
} else {
FUN5(VAR6, VAR2->VAR7.VAR8 >> 8);
FUN5(VAR9, VAR2->VAR7.VAR10 >> 8);
}
FUN6(VAR2, true);
FUN7(VAR2, true);
} else {
FUN5(VAR6, VAR2->VAR7.VAR8 >> 8);
FUN5(VAR9, VAR2->VAR7.VAR10 >> 8);
}
}