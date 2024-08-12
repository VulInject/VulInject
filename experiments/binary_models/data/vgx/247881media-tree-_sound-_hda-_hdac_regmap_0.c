int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;

VAR3 = FUN2(&VAR2->VAR4, NULL, VAR2, &VAR5);
if (FUN3(VAR3))
return FUN4(VAR3);
VAR2->VAR3 = VAR3;
FUN5(&VAR2->VAR6, sizeof(unsigned int), 8);
return 0;
}