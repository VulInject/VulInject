static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned VAR5, bool VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10 = VAR8->VAR10;
struct VAR11 *VAR12;


VAR12 = FUN3(VAR8, VAR5);
if (VAR12)
FUN4(VAR8, VAR12->VAR13,
VAR12->VAR14, VAR6);


if (VAR10->VAR15)
VAR10->FUN1(VAR8, VAR5, VAR6);

return 0;
}