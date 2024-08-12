static int FUN1(struct VAR1 *VAR2, struct VAR3 **VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(VAR2, VAR4);
if (FUN3(VAR6))
return FUN4(VAR6);

VAR6->VAR8.VAR9 = VAR10;
VAR6->VAR8.VAR11 = VAR12;

VAR7 = FUN5(VAR2, VAR6);
if (VAR7)
VAR6->free(VAR6);

return VAR7;
}