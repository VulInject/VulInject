FUN1 (int VAR1, int VAR2)
{
struct VAR3 *new;
new = FUN2 (VAR4, sizeof (struct VAR3));
new->VAR5 = FUN3 ();
new->VAR6 = VAR1;
new->VAR7 = VAR2;
return new;
}