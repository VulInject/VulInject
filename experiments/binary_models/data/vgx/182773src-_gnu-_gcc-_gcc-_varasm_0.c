FUN1 (tree VAR1)
{
const char *VAR2 = FUN2 (FUN3 (FUN4 (VAR1), 0), 0);

if (FUN5 (VAR1))
{
VAR3 *VAR4, VAR5;

FUN6 (VAR6, VAR1, VAR2, 0);
FUN7 (VAR6, VAR2);


for (VAR4 = &VAR7; (VAR5 = *VAR4) ; )
{
if (FUN8 (VAR1) == FUN8 (FUN9 (VAR5)))
*VAR4 = FUN10 (VAR5);
else
VAR4 = &FUN10 (VAR5);
}


for (VAR4 = &VAR8; (VAR5 = *VAR4) ; )
{
if (FUN8 (VAR1)
== FUN11 (&FUN9 (VAR5)))
*VAR4 = FUN10 (VAR5);
else
VAR4 = &FUN10 (VAR5);
}

return;
}
if (FUN12 (VAR1))
FUN13 (VAR6, VAR2);

VAR9.VAR10.FUN14 (VAR6, VAR2);
}