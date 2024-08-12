static int
FUN1(struct VAR1 *VAR2, short VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
if (VAR3 & VAR6)
FUN3(VAR2);

if (VAR3 & VAR7) {
FUN4(VAR2);
FUN5(VAR5->VAR8,
VAR9);
}
return 0;
}