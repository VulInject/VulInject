void
FUN1(VAR1 *VAR2)
{
free(VAR2->VAR3);
free(VAR2->VAR4);
if (VAR2->VAR5)
FUN2(VAR2->VAR5);
free(VAR2);
}