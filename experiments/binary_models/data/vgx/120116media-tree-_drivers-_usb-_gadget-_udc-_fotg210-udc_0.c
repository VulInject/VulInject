static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4[0];

if ((!FUN2(&VAR4->VAR5)) && (VAR4->VAR6)) {
struct VAR7 *VAR8;

VAR8 = FUN3(VAR4->VAR5.VAR9,
struct VAR7, VAR5);

if (VAR8->VAR8.VAR10)
FUN4(VAR4, VAR8);

if ((VAR8->VAR8.VAR10 - VAR8->VAR8.VAR11) < VAR4->VAR4.VAR12)
FUN5(VAR4, VAR8, 0);
} else {
FUN6(VAR2);
}
}