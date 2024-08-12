static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
u8 VAR5[VAR6];


VAR5[VAR7] = VAR8;
VAR5[VAR9] = VAR10;
FUN2((VAR11)VAR3, &VAR5[VAR12]);

switch (VAR3) {
case VAR13:
case VAR14:
case VAR15:

FUN3((VAR4 & 0xFF), &VAR5[VAR16]);
break;

case VAR17:
FUN2(VAR18, &VAR5[VAR19]);
break;

case VAR20:
FUN2(VAR21, &VAR5[VAR19]);
break;

case VAR22:
case VAR23:
case VAR24:
FUN3(VAR4, &VAR5[VAR19]);
break;

default:
VAR5[VAR7] = 0;
FUN4(&VAR2->VAR25, "", VAR3);
return -VAR26;
}

return FUN5(VAR2, VAR5, sizeof(VAR5));
}