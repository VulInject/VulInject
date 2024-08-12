static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2, struct VAR4, VAR2);
int VAR6;

FUN3(&VAR5->VAR7);
VAR6 = FUN4(VAR2, VAR3);
FUN5(&VAR5->VAR7);

return VAR6;
}