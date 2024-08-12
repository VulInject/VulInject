static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5;

FUN2(&VAR4->VAR6);

VAR5 = FUN3(VAR2);
if (VAR5 < 0)
return VAR5;
FUN4(VAR4, VAR5);

return 0;
}