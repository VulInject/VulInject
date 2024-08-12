int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

if (VAR2->VAR4->VAR5)
VAR3 = VAR2->VAR4->FUN2(VAR2);

return FUN3(VAR2, VAR3);
}