FUN1 (VAR1 *VAR2, VAR3 *VAR4,
gpointer VAR5)
{
GtkTreeIter VAR6;
VAR7 *VAR8;
VAR9 *VAR10;
VAR11 *VAR12;
VAR13 *VAR14 = FUN2 (VAR2);

if (!VAR4 || !FUN3 (VAR14, VAR4->VAR15, VAR4->VAR16, &VAR12, 0, 0, 0))
return VAR17;


VAR10 = FUN4 (VAR14); 
FUN5 (VAR10);
FUN6 (VAR10, VAR12);
FUN7 (VAR12); 

if (!FUN8 (FUN2 (VAR2), &VAR6,
VAR18, &VAR8, -1))
return VAR17;

switch (VAR4->VAR19)
{
case 1:
if (VAR4->VAR20 == VAR21)
FUN9 (VAR8);
break;
case 3:
FUN10 (VAR4, VAR8);
break;
default:
break;
}
FUN11 (VAR8);

return VAR17;
}