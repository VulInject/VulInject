FUN1 ()
{
basic_block VAR1;
FUN2 (VAR1)
{
struct VAR2 *VAR3 =
(struct VAR2 *) xcalloc (1, sizeof *VAR3);
VAR3->VAR4 = FUN3 ();
VAR3->VAR5 = FUN3 ();
VAR3->VAR6 = VAR1->VAR7;
VAR1->VAR7 = (void *) VAR3;
}
}