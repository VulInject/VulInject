FUN1 (VAR1 *VAR2,
VAR3          *VAR4,
VAR3          *VAR5)
{
gint     VAR6, VAR7, VAR8;
gint     VAR9, VAR10, VAR11;
gdouble  VAR12;
gdouble  VAR13, VAR14;
gboolean VAR15 = VAR16;

FUN2 (FUN3 (VAR2));
FUN2 (VAR4 != NULL && VAR5 != NULL);

VAR12 = FUN4 (VAR2);


if (VAR12 < 1.0)
{
VAR12 = 1.0 / VAR12;
VAR15 = VAR17;
}



VAR6 = 1;
VAR9 = 0;
VAR7 = FUN5 (VAR12);
VAR10 = 1;

VAR13 = VAR12 - VAR7;

while (FUN6 (VAR13) >= 0.0001 &&
FUN6 (((VAR18) VAR7 / VAR10) - VAR12) > 0.0001)
{
VAR13 = 1.0 / VAR13;

VAR14 = FUN5 (VAR13);

VAR8 = VAR14 * VAR7 + VAR6;
VAR11 = VAR14 * VAR10 + VAR9;



if (VAR8 > 256 || VAR11 > 256 || (VAR8 > 1 && VAR11 > 1 && VAR8 * VAR11 > 200))
break;


VAR6 = VAR7;
VAR7 = VAR8;
VAR9 = VAR10;
VAR10 = VAR11;

VAR13 = VAR13 - VAR14;
}

VAR12 = (VAR18) VAR7 / VAR10;



if (VAR12 > 256.0)
{
VAR7 = 256;
VAR10 = 1;
}
else if (VAR12 < 1.0 / 256.0)
{
VAR7 = 1;
VAR10 = 256;
}

if (VAR15)
{
*VAR4 = VAR10;
*VAR5 = VAR7;
}
else
{
*VAR4 = VAR7;
*VAR5 = VAR10;
}
}