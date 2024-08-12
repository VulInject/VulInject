void
FUN1(struct VAR1 *VAR2)
{
if (!VAR2)
return;

char **VAR3;
FUN2(VAR3, VAR2->VAR4)
free(*VAR3);
FUN3(VAR2->VAR4);
free(VAR2->VAR5);
free(VAR2);
}