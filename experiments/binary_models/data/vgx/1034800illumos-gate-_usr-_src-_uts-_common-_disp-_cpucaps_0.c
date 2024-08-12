static void
FUN1(VAR1 *VAR2)
{
if (VAR2 == NULL)
return;


FUN2(!FUN3(&VAR2->VAR3));
FUN2(VAR2->VAR4 == 0);
FUN2(!FUN4(&VAR2->VAR5));

FUN5(&VAR2->VAR6);
FUN6(&VAR2->VAR5);

FUN7(VAR2, sizeof (VAR1));
}