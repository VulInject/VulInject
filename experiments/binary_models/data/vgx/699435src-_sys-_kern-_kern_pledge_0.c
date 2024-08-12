int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;

if ((VAR2->VAR7->VAR8 & VAR9) == 0)
return (0);
if ((VAR2->VAR7->VAR10 & VAR11) == 0)
return FUN2(VAR2, VAR12, VAR11);

switch (VAR4->VAR13) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
return (0);
case VAR18:
VAR6 = VAR4->VAR19;

if (VAR6->VAR20 != VAR21)
return (0);
break;
}
return FUN2(VAR2, VAR22, VAR11);
}