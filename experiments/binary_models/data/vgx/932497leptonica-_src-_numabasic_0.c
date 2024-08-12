VAR1
FUN1(VAR2       *VAR3,
l_int32     VAR4,
VAR5  *VAR6)
{
if (!VAR6)
return FUN2("", VAR7, 1);
*VAR6 = 0.0;
if (!VAR3)
return FUN2("", VAR7, 1);

if (VAR4 < 0 || VAR4 >= VAR3->VAR8)
return FUN2("", VAR7, 1);

*VAR6 = VAR3->VAR9[VAR4];
return 0;
}