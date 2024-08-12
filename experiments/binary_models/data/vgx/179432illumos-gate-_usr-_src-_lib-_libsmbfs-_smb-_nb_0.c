void
FUN1(struct VAR1 *VAR2)
{
if (VAR2 == NULL)
return;
if (VAR2->VAR3)
free(VAR2->VAR3);
if (VAR2)
free(VAR2);
}