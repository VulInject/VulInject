void
FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR4, *VAR5;

FUN2(VAR4, VAR1, VAR2, VAR5) {
FUN3(VAR1, VAR2, VAR4);
free(VAR4->VAR6);
free(VAR4->VAR7);
free(VAR4);
}
free(VAR2);
}