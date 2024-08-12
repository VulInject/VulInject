FUN1 (VAR1 *VAR2,
GimpZoomType   VAR3,
GtkIconSize    VAR4)
{
VAR5 *VAR6 = NULL;

FUN2 (FUN3 (VAR2), NULL);

switch (VAR3)
{
case VAR7:
VAR6 = FUN4 ("", VAR4);
FUN5 (VAR6, "",
FUN6 (VAR8),
VAR2);
FUN7 (VAR2, "",
FUN6 (VAR9),
VAR6, 0);
break;

case VAR10:
VAR6 = FUN4 ("", VAR4);
FUN5 (VAR6, "",
FUN6 (VAR11),
VAR2);
FUN7 (VAR2, "",
FUN6 (VAR12),
VAR6, 0);
break;

default:
FUN8 ("", VAR3);
break;
}

if (VAR6)
{
gdouble VAR13 = FUN9 (VAR2);


FUN10 (VAR2, VAR14[VAR15], 0, VAR13, VAR13);

if (VAR4 > 0)
{
const VAR16 *VAR17;

if (FUN11 (VAR18, VAR3,
NULL, NULL, &VAR17, NULL))
{
FUN12 (VAR6, VAR17, NULL);
}
}
}

return VAR6;
}