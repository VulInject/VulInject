int
FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5,
void *VAR6, uint_t VAR7, uint_t VAR8)
{
boolean_t	VAR9 = (VAR8 & VAR10);
boolean_t	VAR11 = (VAR8 & VAR12);
boolean_t	VAR13 = (VAR8 & VAR14);
size_t		VAR15;

FUN2(VAR6, VAR7);
if (VAR11)
VAR15 = snprintf(VAR6, VAR7, "", FUN3(VAR4));
else if (VAR13)
VAR15 = snprintf(VAR6, VAR7, "",
VAR4->VAR16, VAR4->VAR17);
else if (VAR9)
VAR15 = snprintf(VAR6, VAR7, "", VAR4->VAR18);
else
VAR15 = snprintf(VAR6, VAR7, "", VAR4->VAR19);
if (VAR15 >= VAR7)
return (VAR20);
return (0);
}