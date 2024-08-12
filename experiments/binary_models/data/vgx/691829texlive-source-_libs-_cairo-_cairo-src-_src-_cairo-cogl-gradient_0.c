FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4;

assert (FUN2 (&VAR2->VAR5));

if (! FUN3 (&VAR2->VAR5))
return;

for (VAR4 = VAR2->VAR6; VAR4; VAR4 = VAR4->VAR7) {
VAR8 *VAR9 = VAR4->VAR10;
FUN4 (VAR9->VAR11);
free (VAR9);
}
FUN5 (VAR2->VAR6);

free (VAR2);
}