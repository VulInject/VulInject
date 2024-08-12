static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;

FUN3(&VAR6->VAR8);
VAR7 = FUN4(VAR2, VAR4);
FUN5(&VAR6->VAR8);

return VAR7;
}