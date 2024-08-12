static bool
FUN1(VAR1 *VAR2, int VAR3, int16 VAR4, int *VAR5)
{
int			VAR6 = 0,
VAR7 = VAR3;

while (VAR6 < VAR7)
{
int			VAR8 = (VAR6 + VAR7) >> 1;
int16		VAR9 = FUN2(VAR2[VAR8]);

if (VAR4 < VAR9)
VAR7 = VAR8;
else if (VAR4 > VAR9)
VAR6 = VAR8 + 1;
else
{
*VAR5 = VAR8;
return true;
}
}

*VAR5 = VAR7;
return false;
}