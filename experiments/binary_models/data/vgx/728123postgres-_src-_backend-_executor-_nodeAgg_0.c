static int
FUN1(double VAR1, double VAR2,
int VAR3, int *VAR4)
{
Size		VAR5 = FUN2();
double		VAR6;
double		VAR7;
double		VAR8;
int			VAR9;
int			VAR10;


VAR6 =
(VAR5 * 0.25 - VAR11) /
VAR12;

VAR7 = VAR13 * VAR1 * VAR2;


VAR8 = 1 + (VAR7 / VAR5);

if (VAR8 > VAR6)
VAR8 = VAR6;

if (VAR8 < VAR14)
VAR8 = VAR14;
if (VAR8 > VAR15)
VAR8 = VAR15;


VAR9 = (int) VAR8;


VAR10 = FUN3(VAR9);


if (VAR10 + VAR3 >= 32)
VAR10 = 32 - VAR3;

if (VAR4 != NULL)
*VAR4 = VAR10;


VAR9 = 1 << VAR10;

return VAR9;
}