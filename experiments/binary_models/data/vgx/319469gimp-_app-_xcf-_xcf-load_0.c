FUN1 (VAR1   *VAR2,
VAR3 *VAR4)
{
VAR5                  *VAR6;
guint32                 VAR7;
guint8                  VAR8;
guint32                 VAR9;
guint32                 VAR10;
guint32                 VAR11; 
GimpTattoo              VAR12 = 0;
VAR13            *VAR14;
VAR15 *VAR16;
gint                    VAR17;

FUN2 (VAR2, &VAR6,       1);
FUN3  (VAR2, &VAR7,     1);
FUN4   (VAR2, &VAR8,      1);
FUN3  (VAR2, &VAR9,     1);
FUN3  (VAR2, &VAR10, 1);
FUN3  (VAR2, &VAR11,    1);

if (VAR11 == 2)
{
guint32 VAR18;


FUN3 (VAR2, (VAR19 *) &VAR18, 1);
}
else if (VAR11 == 3)
{
guint32 VAR18;


FUN3 (VAR2, (VAR19 *) &VAR18,  1);
FUN3 (VAR2, (VAR19 *) &VAR12, 1);
}
else if (VAR11 != 1)
{
FUN5 ("", VAR11);

FUN6 (VAR6);
return VAR20;
}


if (VAR10 == 0)
{
FUN6 (VAR6);
return VAR20;
}

VAR16 = FUN7 (VAR15, VAR10);

for (VAR17 = 0; VAR17 < VAR10; VAR17++)
{
if (VAR11 == 1)
{
gint32 VAR21;
gint32 VAR22;

FUN3 (VAR2, &VAR16[VAR17].VAR23, 1);
FUN3 (VAR2, (VAR19 *) &VAR21,  1);
FUN3 (VAR2, (VAR19 *) &VAR22,  1);

VAR16[VAR17].VAR21 = VAR21;
VAR16[VAR17].VAR22 = VAR22;
}
else
{
gfloat VAR21;
gfloat VAR22;

FUN3 (VAR2, &VAR16[VAR17].VAR23, 1);
FUN8 (VAR2, &VAR21,              1);
FUN8 (VAR2, &VAR22,              1);

VAR16[VAR17].VAR21 = VAR21;
VAR16[VAR17].VAR22 = VAR22;
}
}

VAR14 = FUN9 (VAR4, VAR6, VAR16, VAR10, VAR9);

FUN6 (VAR6);
FUN6 (VAR16);

if (VAR7)
VAR2->VAR24 = FUN10 (VAR2->VAR24, VAR14);

if (VAR12)
FUN11 (FUN12 (VAR14), VAR12);

FUN13 (VAR4, VAR14,
NULL, 
FUN14 (FUN15 (VAR4)),
VAR20);

return VAR25;
}