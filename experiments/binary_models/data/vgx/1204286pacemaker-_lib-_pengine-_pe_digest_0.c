void
FUN1(gpointer VAR1)
{
VAR2 *VAR3 = VAR1;

if (VAR3 != NULL) {
FUN2(VAR3->VAR4);
FUN2(VAR3->VAR5);
FUN2(VAR3->VAR6);

free(VAR3->VAR7);
free(VAR3->VAR8);
free(VAR3->VAR9);

free(VAR3);
}
}