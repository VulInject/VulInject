static void
FUN1(void *VAR1)
{
struct VAR2 *VAR3;

VAR3 = (struct VAR2 *)VAR1;
FUN2(VAR3, (""));
FUN3("", VAR3->VAR4);
if (VAR3->VAR5)
FUN4(VAR3->VAR5, VAR3->VAR6);

FUN5(VAR3->VAR4, false);
FUN6(&VAR7, VAR3, VAR2, VAR8);
free(VAR3, VAR9);
}