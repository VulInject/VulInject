static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
bool VAR8;

if (!FUN2(VAR6))
return 0;

FUN3(&VAR6->VAR9);
VAR8 = FUN4(VAR6, VAR4);
FUN5(&VAR6->VAR9);

return VAR8;
}