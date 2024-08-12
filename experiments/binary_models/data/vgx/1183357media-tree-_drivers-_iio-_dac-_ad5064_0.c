static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, unsigned int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
int VAR8;

FUN3(&VAR2->mlock);
VAR7->VAR9[VAR4->VAR10] = VAR5 + 1;

VAR8 = FUN4(VAR7, VAR4);
FUN5(&VAR2->mlock);

return VAR8;
}