FUN1 (VAR1         *VAR2,
VAR3                  *VAR4,
VAR5           *VAR6,
VAR7          *VAR8,
const VAR9  *VAR10,
VAR11               **VAR12)
{
gboolean VAR13 = VAR14;
VAR9 *VAR15;
VAR16 *VAR17;
GimpRGB VAR18 = { 0.0, 0.0, 0.0, 1.0 };

VAR17 = FUN2 (FUN3 (VAR10, 0));

if (VAR13)
{
VAR19 *VAR20 = FUN4 (VAR17);

if (VAR20)
VAR18 = VAR20->VAR18;
else
VAR13 = VAR21;
}

VAR15 = FUN5 (VAR2, VAR13,
VAR12 ? *VAR12 : NULL);

if (VAR13)
FUN6 (FUN3 (VAR15, 1), &VAR18);

return VAR15;
}