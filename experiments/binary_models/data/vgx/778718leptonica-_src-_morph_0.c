VAR1
FUN1(l_int32  VAR2,
l_int32  VAR3,
VAR4    **VAR5,
VAR4    **VAR6)
{
l_int32  VAR7, VAR8;

if (!VAR5 && !VAR6)
return FUN2("", VAR9, 1);
if (VAR5) *VAR5 = NULL;
if (VAR6) *VAR6 = NULL;
if (VAR2 < 1 || VAR2 > 10000)
return FUN2("", VAR9, 1);
if (VAR3 != VAR10 && VAR3 != VAR11)
return FUN2("", VAR9, 1);

if (FUN3(VAR2, &VAR7, &VAR8))
return FUN2("", VAR9, 1);

if (VAR5) {
if (VAR3 == VAR10)
*VAR5 = FUN4(1, VAR7, 0, VAR7 / 2, VAR12);
else
*VAR5 = FUN4(VAR7, 1, VAR7 / 2 , 0, VAR12);
}
if (VAR6)
*VAR6 = FUN5(VAR7, VAR8, VAR3);
return 0;
}