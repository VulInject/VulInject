FUN1 (VAR1    *VAR2,
VAR3 *VAR4,
VAR5  *VAR6,
gint          VAR7,
gint          VAR8,
const VAR9  *VAR10,
const VAR9  *VAR11,
gint          VAR12,
gboolean      VAR13)
{
VAR14 *VAR15;
VAR16             *VAR17;
VAR18            *VAR19;
GimpRGB               VAR20;
VAR9                *VAR21;
gdouble               VAR22;

FUN2 (FUN3 (VAR2), NULL);
FUN2 (VAR4 == NULL || FUN4 (VAR4), NULL);
FUN2 (VAR4 == NULL ||
FUN5 (FUN6 (VAR4)), NULL);
FUN2 (FUN7 (VAR6), NULL);
FUN2 (VAR10 != NULL, NULL);
FUN2 (VAR11 != NULL, NULL);

if (! FUN8 (VAR2->VAR23->VAR24))
return NULL;

if (VAR12 < 0)
VAR12 = 0;

VAR15 = FUN9 (VAR10);
VAR22 = FUN10 (FUN11 (VAR15));

FUN12 (VAR15, VAR25);
VAR21 = FUN13 (VAR15);

FUN14 (VAR15);

FUN15 (VAR6, &VAR20);

VAR17 = FUN16 (VAR26,
"",      VAR11,
"",      VAR21,
"", VAR22,
"", VAR13,
"",    VAR12,
"",     &VAR20,
NULL);

FUN17 (VAR21);

VAR19 = FUN18 (VAR2, VAR17);

FUN19 (VAR17);

if (!VAR19)
return NULL;


FUN20 (VAR2, VAR27,
FUN21(""));


FUN22 (FUN6 (VAR19), VAR7, VAR8);


if (! FUN23 (FUN24 (VAR2)))
FUN25 (FUN24 (VAR2), NULL, VAR28);

if (VAR4 == NULL)
{

FUN26 (VAR2, VAR19, NULL, -1, VAR28);
}
else
{

FUN27 (VAR19, VAR4);
}


FUN28 (VAR2);

return VAR19;
}