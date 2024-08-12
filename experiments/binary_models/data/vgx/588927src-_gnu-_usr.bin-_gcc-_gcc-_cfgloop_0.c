FUN1 ()
{
dominance_info VAR1;
basic_block VAR2;
edge VAR3;


VAR1 = FUN2 (VAR4);

FUN3 (sizeof (int));
FUN4 (sizeof (int));


FUN5 (VAR2)
{
int VAR5 = 0;
int VAR6 = 0;

for (VAR3 = VAR2->VAR7; VAR3; VAR3 = VAR3->VAR8)
{
basic_block VAR9 = VAR3->VAR10;

if (VAR3->VAR11 & VAR12)
VAR6 = 1;

if (VAR9 != VAR13
&& FUN6 (VAR1, VAR9, VAR2))
{
VAR5++;
FUN7 (VAR3) = 1;
}
}
if (VAR6)
FUN8 (VAR2) = 0;
else
FUN8 (VAR2) = VAR5;
}

if (FUN8 (VAR13->VAR14->VAR15))
{
basic_block VAR16;


VAR16 = FUN9 (VAR13->VAR14);

FUN10 (VAR16->VAR14, sizeof (int));
FUN7 (VAR16->VAR14) = 0;
FUN11 (VAR16, sizeof (int));
FUN8 (VAR16) = 0;
}

FUN5 (VAR2)
{
int VAR17;
int VAR18;
int VAR19, VAR20;
edge VAR21;

if (!FUN8 (VAR2))
continue;

VAR17 = FUN8 (VAR2);

VAR18 = (VAR17 > 1);

if (!VAR18)
continue;


VAR20 = 1;
VAR21 = NULL;
VAR19 = 0;
for (VAR3 = VAR2->VAR7; VAR3; VAR3 = VAR3->VAR8)
if (FUN7 (VAR3) &&
FUN12 (VAR3) > VAR19)
VAR19 = FUN12 (VAR3);
for (VAR3 = VAR2->VAR7; VAR3; VAR3 = VAR3->VAR8)
if (FUN7 (VAR3) &&
FUN12 (VAR3) >= VAR19 / VAR22)
{
if (VAR21)
{
VAR20 = 0;
break;
}
else
VAR21 = VAR3;
}

if (VAR20)
{
basic_block VAR23 =
FUN13 (VAR2, true, true, VAR21, 0);
if (VAR17 > 2)
FUN13 (VAR23, true, false, NULL, 1);
}
else
FUN13 (VAR2, true, false, NULL, 1);
}

FUN14 ();
FUN15 ();
FUN16 (VAR1);
}