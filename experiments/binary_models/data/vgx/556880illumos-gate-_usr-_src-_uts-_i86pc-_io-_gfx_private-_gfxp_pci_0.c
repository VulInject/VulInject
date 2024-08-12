static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6)
{
VAR7   *VAR8;
uint32_t	VAR9;
int	VAR10;


VAR10 = FUN2(VAR11, VAR2,
VAR12, "", (int **)&VAR8,
(VAR13 *)&VAR9);
if ((VAR10 != VAR14) || (VAR9 <
(sizeof (VAR7) / sizeof (int)))) {
return (VAR15);
}

*VAR4 = FUN3(VAR8->VAR16);
*VAR5 = FUN4(VAR8->VAR16);
*VAR6 = FUN5(VAR8->VAR16);


FUN6(VAR8);

return (VAR14);
}