static void
FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3;


VAR3 = FUN2(&VAR2->VAR3);
if (VAR3 == VAR4)
return;


VAR3 = FUN3(&VAR2->VAR3, VAR4);
if (VAR3 != VAR5)
return;


FUN4(&VAR2->VAR6, VAR7);
}