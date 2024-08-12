static int
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
struct VAR4 *VAR5, *VAR6;
struct in_addr VAR7;
struct in6_addr VAR8;
const struct in6_addr VAR9 = VAR10;

*VAR2 = *VAR3 = VAR11;

if (FUN2(&VAR5) != 0)
return (-1);

for (VAR6 = VAR5; VAR6 != NULL; VAR6 = VAR6->VAR12) {
if (VAR6->VAR13 & VAR14)
continue;
if ((VAR6->VAR13 & VAR15) == 0)
continue;

if (VAR6->VAR16->VAR17 == VAR18) {
if (*VAR2 != VAR11)
continue;

if (((struct VAR19 *)VAR6->VAR16)->
VAR20.VAR21 == VAR22)
continue;
*VAR2 = VAR23;
}

if (VAR6->VAR16->VAR17 == VAR24) {
if (*VAR3 != VAR11)
continue;

if (memcmp(&VAR9,
&((struct VAR25 *)VAR6->VAR16)->VAR26,
sizeof (struct VAR27)) == 0)
continue;
*VAR3 = VAR23;
}
}

FUN3(VAR5);
return (0);
}