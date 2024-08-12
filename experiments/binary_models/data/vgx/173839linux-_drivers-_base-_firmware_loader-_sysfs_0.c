static int FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const struct VAR5 *VAR5 = FUN2(VAR2);
int VAR6 = 0;

FUN3(&VAR7);
if (VAR5->VAR8)
VAR6 = FUN4(VAR5, VAR4);
FUN5(&VAR7);
return VAR6;
}