int
FUN1(VAR1 *VAR2, int VAR3)
{
BOOLEAN	VAR4;

if (VAR2 == NULL)
return (VAR5);

VAR4 = FUN2(VAR2);

if (VAR3 && ((VAR4 && VAR2->VAR6 > VAR3) ||
(!VAR4 && VAR2->VAR7 > VAR3)))
return (VAR5);

VAR2->VAR8 = VAR3;
FUN3(VAR2, VAR9);

if (!FUN4(VAR2, VAR10) && ((!VAR3 || VAR4 && VAR2->VAR6 < VAR3) ||
(!VAR4 && VAR2->VAR7 < VAR3))) {
FUN5(VAR2, VAR9);
}

return (VAR11);
}