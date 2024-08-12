void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
if (VAR4->VAR5 != NULL) {
FUN2(VAR4->VAR5, sizeof(struct VAR6));
free(VAR4->VAR5, VAR7, sizeof(struct VAR6));
}
VAR4->VAR5 = NULL;
}