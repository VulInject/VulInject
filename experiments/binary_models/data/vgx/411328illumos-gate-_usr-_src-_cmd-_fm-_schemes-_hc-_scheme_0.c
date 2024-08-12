int
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
VAR1 **VAR4, **VAR5;
uint_t VAR6, VAR7;
VAR1 *VAR8;
uint64_t VAR9, VAR10;

if (FUN2(VAR2, VAR11, &VAR4,
&VAR6) != 0 || FUN2(VAR3,
VAR11, &VAR5, &VAR7) != 0)
return (FUN3(VAR12));


if (FUN4(VAR4, VAR6, VAR5, VAR7) == 0 ||
FUN5(VAR2, VAR3) != 0 || FUN6(VAR2, VAR3) != 0)
return (0);


if (VAR6 < VAR7 || FUN7(VAR2,
VAR13, &VAR8) != 0 || (FUN8(VAR8,
VAR14, &VAR9) != 0 &&
FUN8(VAR8, "" VAR14,
&VAR9) != 0))
return (1);


if (FUN7(VAR3, VAR13, &VAR8) == 0 &&
(FUN8(VAR8, VAR14,
&VAR10) == 0 || FUN8(VAR8, ""
VAR14, &VAR10) == 0) && VAR9 == VAR10)
return (1);

return (0);
}