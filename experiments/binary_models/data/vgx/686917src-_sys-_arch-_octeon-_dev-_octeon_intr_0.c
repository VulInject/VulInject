void
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5 = VAR3->VAR6;

VAR5->FUN2(VAR3->VAR7);
free(VAR3, VAR8, sizeof(*VAR3));
}