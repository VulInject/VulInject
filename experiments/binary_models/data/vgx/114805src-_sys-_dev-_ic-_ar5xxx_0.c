VAR1
FUN1(struct VAR2 *VAR3, u_int VAR4)
{
const struct VAR5	*VAR6;
size_t				 VAR7;
int				 VAR8;

switch (VAR3->VAR9) {
case VAR10:
VAR6 = VAR11;
VAR7 = FUN2(VAR11);
break;
case VAR12:
VAR6 = VAR13;
VAR7 = FUN2(VAR13);
break;
case VAR14:
VAR6 = VAR15;
VAR7 = FUN2(VAR15);
break;
case VAR16:
case VAR17:
if (VAR4 == VAR18)
return (VAR19);
VAR6 = VAR20;
VAR7 = FUN2(VAR20);
break;
default:
return (VAR19);
}

switch (VAR4) {
case VAR21:
case VAR18:
break;
default:
return (VAR19);
}

for (VAR8 = 0; VAR8 < VAR7; VAR8++) {
FUN3(VAR8);
FUN4((VAR22)VAR6[VAR8].VAR23,
VAR6[VAR8].VAR24[VAR4]);
}

return (VAR25);
}