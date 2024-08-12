int
FUN1(VAR1 *VAR2)
{
if ((VAR2->VAR3 & (VAR4 | VAR5)) != VAR4) {
if (!(VAR2->VAR3 & (VAR4 | VAR6))) {
VAR2->VAR3 |= VAR7;
VAR8 = VAR9;
return (VAR10); 
}
VAR2->VAR3 = (VAR2->VAR3 & ~VAR5) | VAR4;
}


if (VAR2->VAR11 == NULL && FUN2(VAR2) == NULL)
return (VAR10);
else if ((VAR2->VAR12 == VAR2->VAR11) &&
!(VAR2->VAR3 & (VAR13 | VAR14))) {
VAR2->VAR15 = FUN3(VAR2) - VAR2->VAR12;
}
return (0);
}