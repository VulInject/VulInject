FUN1 (void)
{
struct assign_parm_data_all VAR1;
tree VAR2, VAR3, VAR4 = NULL;

FUN2 (&VAR1);
VAR2 = FUN3 (&VAR1);

for (VAR3 = VAR2; VAR3; VAR3 = FUN4 (VAR3))
{
struct assign_parm_data_one VAR5;


FUN5 (&VAR1, VAR3, &VAR5);


if (VAR5.VAR6 == VAR7 || FUN6 (VAR3) == NULL)
continue;


FUN7 (VAR1.VAR8, VAR5.VAR9,
VAR5.VAR10, VAR5.VAR11);


FUN8 (&VAR5.VAR10,
VAR12, &VAR4);

if (!FUN9 (FUN6 (VAR3)))
{
FUN10 (&FUN6 (VAR3), &VAR4);
FUN10 (&FUN11 (VAR3), &VAR4);
}

if (VAR5.VAR13)
{
tree VAR14 = FUN12 (VAR5.VAR10);
if (FUN13 (&VAR1.VAR8, FUN14 (VAR14),
VAR14, VAR5.VAR11))
{
tree VAR15, VAR16;


if (FUN9 (FUN6 (VAR3)))
{
VAR15 = FUN15 (VAR14, FUN16 (VAR3));
FUN17 (VAR15) = 0;
}
else
{
tree VAR17, VAR18, VAR19;

VAR17 = FUN18 (VAR14);
VAR18 = FUN15 (VAR17, FUN16 (VAR3));
FUN17 (VAR18) = 0;
VAR15 = FUN19 (VAR18);

VAR19 = FUN20 (NULL, FUN11 (VAR3), NULL);
VAR16 = VAR20[VAR21];
VAR16 = FUN21 (VAR16, VAR19);
VAR16 = FUN22 (VAR17, VAR16);
VAR16 = FUN23 (VAR22, VAR23, VAR18, VAR16);
FUN24 (VAR16, &VAR4);
}

VAR16 = FUN23 (VAR22, VAR23, VAR15, VAR3);
FUN24 (VAR16, &VAR4);

FUN25 (VAR3, VAR15);
FUN26 (VAR3) = 1;
}
}
}

return VAR4;
}