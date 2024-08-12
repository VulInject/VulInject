static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR3;

if (!FUN3(VAR7->VAR8))
return -VAR9;

FUN4(VAR2, VAR7->VAR8);
VAR2->VAR10 &= ~VAR11;

FUN5(VAR5, VAR2->VAR12);

return 0;
}