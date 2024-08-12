VAR1
FUN1(const char *VAR2, size_t VAR3, const char *VAR4,
size_t VAR5, const VAR6 **VAR7, VAR8 *VAR9, const char **VAR10,
VAR8 *VAR11)
{
VAR12	*VAR13 = (VAR12 *)VAR2;
VAR14	*VAR15, *VAR16;
size_t		 VAR17, VAR18;
ssize_t		 VAR19;

VAR17 = strlen(VAR20);
VAR16 = NULL;

for (VAR19 = 0; VAR19 < VAR13->VAR21; VAR19++) {
VAR18 = VAR13->VAR22 + VAR19 * VAR13->VAR23;
if (VAR18 > (VAR3 - sizeof(*VAR15)))
continue;

VAR15 = (VAR14 *)(VAR2 + VAR18);
if (VAR15->VAR24 != VAR25)
continue;

if ((VAR15->VAR26 >= VAR13->VAR21) || (VAR15->VAR27 >= VAR5))
continue;

if (VAR15->VAR28 > VAR3)
continue;

if (VAR15->VAR29 > (VAR3 - VAR15->VAR28))
continue;

if (VAR15->VAR30 == 0)
continue;

if (FUN2(VAR4 + VAR15->VAR27, VAR20, VAR17) == 0) {
if (VAR7 != NULL)
*VAR7 = (VAR6 *)(VAR2 + VAR15->VAR28);
if (VAR9 != NULL)
*VAR9 = (VAR15->VAR29 / VAR15->VAR30);
VAR16 = VAR15;

break;
}
}

if (VAR16 == NULL || (VAR16->VAR26 >= VAR13->VAR21))
return -1;

VAR18 = VAR13->VAR22 + VAR16->VAR26 * VAR13->VAR23;
if (VAR18 > (VAR3 - sizeof(*VAR15)))
return -1;

VAR15 = (VAR14 *)(VAR2 + VAR18);
if ((VAR15->VAR28 + VAR15->VAR29) > VAR3)
return -1;

if (VAR10 != NULL)
*VAR10 = VAR2 + VAR15->VAR28;
if (VAR11 != NULL)
*VAR11 = VAR15->VAR29;

return VAR19;
}