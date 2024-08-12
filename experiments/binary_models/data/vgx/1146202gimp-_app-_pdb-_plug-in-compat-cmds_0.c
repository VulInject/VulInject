FUN1 (VAR1         *VAR2,
VAR3                  *VAR4,
VAR5           *VAR6,
VAR7          *VAR8,
const VAR9  *VAR10,
VAR11               **VAR12)
{
gboolean VAR13 = VAR14;
VAR15 *VAR16;
gint VAR17;
gdouble VAR18;
gdouble VAR19;
gdouble VAR20;
gdouble VAR21;

VAR16 = FUN2 (FUN3 (VAR10, 2));
VAR17 = FUN4 (FUN3 (VAR10, 3));
VAR18 = FUN5 (FUN3 (VAR10, 4));
VAR19 = FUN5 (FUN3 (VAR10, 5));
VAR20 = FUN5 (FUN3 (VAR10, 6));
VAR21 = FUN5 (FUN3 (VAR10, 7));

if (VAR13)
{
if (FUN6 (FUN7 (VAR16), NULL,
VAR22, VAR12) &&
FUN8 (FUN7 (VAR16), VAR12))
{
VAR23 *VAR24   = NULL;
gint      VAR25  = FUN9  (FUN7 (VAR16));
gint      VAR26 = FUN10 (FUN7 (VAR16));

VAR20 /= (VAR27) VAR25;
VAR21 /= (VAR27) VAR26;

if (VAR19 > 180.0)
VAR19 -= 360.0;

if (VAR17 == 0)
{
VAR24 =  FUN11 (NULL,
"", "",
"",    VAR18,
"",     VAR19,
NULL);
}
else if (VAR17 == 1)
{
VAR24 =  FUN11 (NULL,
"", "",
"",  VAR20,
"",  VAR21,
"",     VAR19,
NULL);
}
else if (VAR17 == 2)
{
gdouble VAR28 = FUN12 (VAR18 / 256.0, 0.0, 1.0);

VAR24 =  FUN11 (NULL,
"", "",
"",  VAR20,
"",  VAR21,
"",    VAR28,
NULL);
}

if (VAR24 != NULL)
{
FUN13 (VAR16, VAR8,
FUN14("", ""),
VAR24);
FUN15 (VAR24);
}
else
VAR13 = VAR29;

}
else
VAR13 = VAR29;
}

return FUN16 (VAR2, VAR13,
VAR12 ? *VAR12 : NULL);
}