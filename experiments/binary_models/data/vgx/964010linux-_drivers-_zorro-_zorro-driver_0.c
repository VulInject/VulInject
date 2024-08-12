}
FUN1(VAR1);




static int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN3(VAR3);
struct VAR8 *VAR9 = FUN4(VAR5);
const struct VAR10 *VAR11 = VAR9->VAR12;

if (!VAR11)
return 0;

return !!FUN5(VAR11, VAR7);
}