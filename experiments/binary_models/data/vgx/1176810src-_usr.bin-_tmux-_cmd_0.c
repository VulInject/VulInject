void
FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR3, *VAR4;

if (--VAR2->VAR5 != 0)
return;

FUN2(VAR3, VAR2->VAR6, VAR7, VAR4) {
FUN3(VAR2->VAR6, VAR3, VAR7);
FUN4(VAR3);
}
free(VAR2->VAR6);
free(VAR2);
}