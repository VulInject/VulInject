FUN1 (VAR1 *VAR2, int *VAR3, void *VAR4)
{
VAR5 *VAR6 = (VAR5 *) VAR4;
tree VAR7 = VAR6->VAR8;
tree VAR9;




if (FUN2 (*VAR2) == VAR10 && VAR6->VAR11)
{
tree VAR12 = FUN3 (*VAR2, 0);


if (VAR12 && FUN2 (VAR12) == VAR13)
{

*VAR2 = FUN4 (VAR12);
}
else 
{
*VAR2 = NULL;
return (VAR1) (void *)1;
}
}


else if (VAR14.VAR15.FUN5 (*VAR2, VAR7))
{
tree VAR16;


VAR16 = FUN6 (*VAR2, VAR6);
FUN7 (VAR16);

FUN8 (VAR16);
*VAR2 = VAR16;
*VAR3 = 0;
}
else if (FUN2 (*VAR2) == VAR17)
FUN9 (VAR2);
else if (FUN2 (*VAR2) == VAR18)
FUN10 (VAR2, VAR6->VAR19, VAR3);
else if (FUN2 (*VAR2) == VAR20
&& (! FUN11 (*VAR2)
|| FUN12 (*VAR2) == VAR6->VAR8))

*VAR2 = FUN6 (*VAR2, VAR6);
else if (FUN2 (*VAR2) == VAR21)
FUN13 (VAR2, VAR3, VAR6);

else if (FUN14 (*VAR2))
*VAR2 = FUN15 (*VAR2, VAR6);


else if (FUN16 (*VAR2))
{
tree VAR22 = FUN15 (FUN17 (*VAR2), VAR6);

if (VAR22 == FUN17 (*VAR2))
*VAR3 = 0;

else if (FUN2 (*VAR2) == VAR23)
*VAR2 = FUN18 (VAR22, FUN19 (*VAR2),
FUN20 (*VAR2));
else
{
*VAR2 = FUN4 (*VAR2);
FUN17 (*VAR2) = VAR22;
}
}


else
{

if (FUN2 (*VAR2) == VAR13
&& FUN3 (*VAR2, 0) == FUN3 (*VAR2, 1)
&& (VAR14.VAR15.VAR24
(FUN3 (*VAR2, 0), VAR7)))
{

tree VAR25 = FUN3 (*VAR2, 0), VAR26;
splay_tree_node VAR27;

VAR27 = FUN21 (VAR6->VAR19, (VAR28) VAR25);
if (VAR27)
{
VAR26 = (VAR1) VAR27->VAR26;
FUN8 (VAR26);
if (FUN22 (VAR26) || FUN23 (VAR26))
{
*VAR2 = FUN24 ();
return FUN1 (VAR2, VAR3, VAR4);
}
}
}
else if (FUN2 (*VAR2) == VAR29)
{

tree VAR25 = FUN3 (*VAR2, 0);
splay_tree_node VAR27;

VAR27 = FUN21 (VAR6->VAR19, (VAR28) VAR25);
if (VAR27)
{
tree new;
tree VAR30;

tree VAR31 = FUN17 (FUN17 ((VAR1)VAR27->VAR26));
new = FUN25 ((VAR1)VAR27->VAR26);
VAR30 = *VAR2;
*VAR2 = FUN26 (VAR31, new);
if (! *VAR2)
{
if (FUN2 (new) == VAR32)
*VAR2 = FUN3 (new, 0);
else
{
*VAR2 = FUN27 (VAR29, VAR31, new);
FUN28 (*VAR2) = FUN28 (VAR30);
}
}
*VAR3 = 0;
return NULL;
}
}


FUN29 (VAR2, VAR3, NULL);


if (FUN30 (FUN31 (FUN2 (*VAR2))))
{
VAR9 = VAR6->VAR33;
if (FUN32 (*VAR2))
{
splay_tree_node VAR27;
VAR27 = FUN21 (VAR6->VAR19,
(VAR28) FUN32 (*VAR2));
FUN7 (VAR27);
VAR9 = (VAR1) VAR27->VAR26;
}
FUN32 (*VAR2) = VAR9;
}

if (FUN2 (*VAR2) == VAR34 && VAR6->VAR35)
FUN3 (*VAR2, 0) =
VAR36
(VAR37,
VAR6->VAR35 + FUN19 (FUN3 (*VAR2, 0)));

if (FUN2 (*VAR2) != VAR38)
FUN17 (*VAR2) = FUN15 (FUN17 (*VAR2), VAR6);


if (FUN2 (*VAR2) == VAR39 && FUN3 (*VAR2, 3))
{
FUN3 (*VAR2, 1) = FUN3 (*VAR2, 3);
FUN3 (*VAR2, 3) = VAR37;
}


else if (FUN2 (*VAR2) == VAR32)
{
FUN33 (&FUN3 (*VAR2, 0), VAR40, VAR6, NULL);

if (FUN2 (FUN3 (*VAR2, 0)) == VAR29)
*VAR2 = FUN3 (FUN3 (*VAR2, 0), 0);
else
FUN34 (*VAR2);
*VAR3 = 0;
}
}


return VAR37;
}