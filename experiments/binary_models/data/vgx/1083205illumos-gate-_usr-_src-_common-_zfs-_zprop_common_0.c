VAR1
FUN1(int VAR2, VAR3 *VAR4, zfs_type_t VAR5)
{
VAR6 *VAR7, *VAR8;
const VAR9 *VAR10;
size_t VAR11;
int VAR12;

FUN2(VAR2 != VAR13 && VAR2 != VAR14);
FUN2(VAR2 < FUN3(VAR5));

VAR7 = FUN4(VAR5);
VAR8 = &VAR7[VAR2];

*VAR4 = VAR15;


VAR11 = strlen(VAR8->VAR16);


switch (VAR8->VAR17) {
case VAR18:

if (VAR11 < 5)
VAR11 = 5;

if (VAR2 == VAR19)
*VAR4 = VAR20;

if (VAR2 == VAR21)
VAR11 = 8;
break;
case VAR22:
VAR10 = VAR7[VAR2].VAR23;
for (VAR12 = 0; VAR10[VAR12].VAR24 != NULL; VAR12++) {
if (strlen(VAR10[VAR12].VAR24) > VAR11)
VAR11 = strlen(VAR10[VAR12].VAR24);
}
break;

case VAR25:
*VAR4 = VAR20;
break;
}

return (VAR11);
}