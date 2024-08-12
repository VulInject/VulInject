static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR5);
struct VAR9 *VAR10 = FUN3(VAR3);
int VAR11;

VAR11 = FUN4(VAR10, VAR8->VAR12);
if (VAR11 < 0)
return VAR11;

return sprintf(VAR6, "", VAR11);
}