FUN1 (basic_block VAR1)
{
block_stmt_iterator VAR2 = FUN2 (VAR1);
tree VAR3 = NULL;
rtx VAR4, VAR5;
edge VAR6;
edge_iterator VAR7;

if (VAR8)
{
fprintf (VAR8,
"",
VAR1->VAR9);
}

FUN3 (VAR1);
VAR1->VAR10 |= VAR11;

if (!FUN4 (VAR2))
VAR3 = FUN5 (VAR2);

if (VAR3 && FUN6 (VAR3) == VAR12)
{
VAR5 = FUN7 ();

FUN8 (VAR3);


FUN9 (VAR1) = FUN10 (VAR5);
if (FUN11 (FUN9 (VAR1)))
FUN9 (VAR1) = FUN10 (FUN9 (VAR1));
FUN12 (&VAR2);
VAR4 = FUN13 (VAR13, FUN9 (VAR1));

FUN14 (VAR3, VAR5);
}
else
VAR4 = FUN9 (VAR1) = FUN15 (VAR13);

FUN16 (VAR4) = VAR1;

for (VAR7 = FUN17 (VAR1->VAR14); (VAR6 = FUN18 (VAR7)); )
{

VAR6->VAR10 &= ~VAR15;


if (VAR6->VAR10 & VAR16)
FUN19 (VAR6);
else
FUN20 (&VAR7);
}

for (; !FUN4 (VAR2); FUN12 (&VAR2))
{
tree VAR3 = FUN5 (VAR2);
basic_block VAR17;

if (!VAR3)
continue;


if (FUN6 (VAR3) == VAR18)
{
VAR17 = FUN21 (VAR1, VAR3);
if (VAR17)
return VAR17;
}
else
{
tree VAR19 = FUN22 (VAR3);
if (VAR19 && FUN23 (VAR19))
{
bool VAR20;
VAR17 = FUN24 (VAR1, VAR3, &VAR20);
if (VAR17)
{
if (VAR20)
VAR1 = VAR17;
else
return VAR17;
}
}
else
{
VAR5 = FUN7 ();
FUN8 (VAR3);
FUN14 (VAR3, VAR5);
}
}
}

FUN25 ();


VAR5 = FUN7 ();
if (FUN26 (VAR5))
VAR5 = FUN27 (VAR5);
if (FUN28 (VAR5))
VAR5 = FUN27 (FUN27 (VAR5));
FUN29 (VAR1) = VAR5;

FUN30 (VAR1);

return VAR1;
}