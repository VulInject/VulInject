int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int		 VAR5 = (VAR4->VAR6 & VAR7);

if ((VAR4->VAR6 & VAR8) == 0 ||
(VAR4->VAR9[VAR10]->VAR11 != VAR12))
return (0);

if (VAR2 == NULL || !FUN2(VAR2->VAR13, VAR8))
return (0);


if (FUN2(VAR2->VAR13, VAR14))
return (0);


if ((FUN2(VAR2->VAR13, VAR7) == VAR5) ||
FUN2(VAR2->VAR13, VAR15))
return (VAR16);


VAR4->VAR6 |= VAR15;
return (0);
}