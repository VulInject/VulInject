static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
unsigned long VAR4 = 0, VAR5 = 0;
struct VAR6 *VAR7 = VAR2->VAR8.VAR9;


if (FUN2(VAR10))
VAR4 = VAR11;
else if (FUN2(VAR12))
VAR4 = VAR13;
else if (FUN2(VAR14))
VAR4 = VAR15;
else if (FUN2(VAR16))
VAR4 = VAR17;
else
VAR4 = VAR18;


VAR5 = VAR4;
if (VAR3) {
switch (VAR3) {
case VAR19:
VAR5 = VAR18;
break;
case VAR20:
case VAR21:
VAR5 = VAR17;
break;
case VAR22:
VAR5 = VAR15;
break;
case VAR23:
VAR5 = VAR13;
break;
case VAR24:
VAR5 = VAR11;
break;
default:
return -VAR25;
}
}


if (VAR5 > VAR4)
return -VAR25;

FUN3(&VAR7->VAR26);
VAR7->VAR3 = VAR3;

VAR7->VAR27 = (VAR4 - VAR5) | VAR28;
FUN4(&VAR7->VAR26);

return 0;
}