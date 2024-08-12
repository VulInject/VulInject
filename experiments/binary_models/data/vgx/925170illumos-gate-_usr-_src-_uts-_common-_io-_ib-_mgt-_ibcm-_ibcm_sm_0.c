static void
FUN1(void *VAR1)
{
VAR2 *VAR3 = (VAR2 *)VAR1;
int VAR4 = 1;

FUN2(&VAR5);
VAR6--;
if (VAR7 == 0) {
VAR7++;
FUN3(&VAR5);
if (FUN4(VAR8, VAR9, VAR3,
VAR10 | VAR11) == VAR12) {
FUN2(&VAR5);
if (--VAR7 == 0) {
(void) FUN5(VAR13, VAR3, 1);
VAR6++;
} else {
VAR4 = FUN6(VAR3->VAR14,
VAR3->VAR15, VAR3->VAR16);
FUN7(VAR3, sizeof (*VAR3));
}
FUN3(&VAR5);
}
} else {

VAR4 = FUN6(VAR3->VAR14,
VAR3->VAR15, VAR3->VAR16);
FUN7(VAR3, sizeof (*VAR3));
FUN3(&VAR5);
}
if (VAR4 == 0)
FUN8(VAR3->VAR14, VAR3->VAR15);
}