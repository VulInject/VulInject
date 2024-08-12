static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
unsigned int VAR5 = VAR4->VAR6;
unsigned int VAR7 = VAR2->VAR8;

if (VAR4 == VAR2->VAR9)
return;

if (VAR4->VAR10 & VAR11)
FUN2(VAR2, VAR4, VAR12);
else if (VAR4->VAR10 & (VAR13 | VAR14))
FUN2(VAR2, VAR4, VAR15);
if (VAR5 == VAR7)
FUN2(VAR2, VAR4, VAR16);
else if (VAR5 == 0)
FUN2(VAR2, VAR4, VAR17);
else if (VAR5 > (VAR7/2))
FUN2(VAR2, VAR4, VAR18);
else
FUN2(VAR2, VAR4, VAR19);
}