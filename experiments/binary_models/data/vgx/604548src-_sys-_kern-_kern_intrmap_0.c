static void
FUN1(struct VAR1 *VAR2)
{
if (VAR2 == NULL)
return;

if (FUN2(&VAR2->VAR3)) {
free(VAR2->VAR4, VAR5,
VAR2->VAR6 * sizeof(*VAR2->VAR4));
free(VAR2, VAR5, sizeof(*VAR2));
}
}