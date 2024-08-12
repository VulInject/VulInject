static long FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = VAR1->VAR4;
struct VAR5 *VAR5 = FUN2(VAR1);
struct VAR6 *VAR7 = FUN3(VAR5);

if ((VAR3->VAR8 & VAR9) == 0) {
FUN4(&VAR7->VAR10);
VAR3->VAR8 |= VAR9;
VAR7->VAR11[FUN5(VAR9)]++;
FUN6(&VAR7->VAR10);
FUN7("", VAR1);

FUN8(VAR7, 0, NULL);
} else {
FUN7("", VAR1);
}
return 0;
}