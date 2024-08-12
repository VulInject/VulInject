static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3, void *VAR4)
{
struct VAR5 *VAR6 =
FUN2(VAR2, struct VAR5, VAR7);
struct VAR8 *VAR9 = VAR4;
int VAR10 = 0;

if (VAR3 != VAR11)
return VAR12;

switch (VAR9->VAR13) {
case VAR14:
if (VAR9->VAR15[0] & 1) {
if (VAR6->VAR16 == 0) {
VAR10 = 1;
FUN3(VAR6);
}

VAR6->VAR16 = 1;

switch ((VAR9->VAR15[0] >> 1) & 3) {
case 0:
VAR6->VAR17 =
VAR18;
break;
case 1:
VAR6->VAR17 =
VAR19;
break;
case 2:
VAR6->VAR17 =
VAR20;
break;
default:
VAR6->VAR17 = VAR21;
}
} else {
if (VAR6->VAR16 == 1)
VAR10 = 1;

VAR6->VAR16 = 0;
VAR6->VAR17 = VAR21;
}
VAR6->VAR22 = VAR9->VAR15[1];
if (VAR10)
FUN4(VAR23);
break;
case VAR24:
VAR6->VAR25 = VAR9->VAR26 * 1000;
break;
case VAR27:
VAR6->VAR28 = VAR9->VAR26 * 3600;
break;
case VAR29:
VAR6->VAR30 = VAR9->VAR31 * 1000;
break;
case VAR32:
VAR6->VAR33 = VAR9->VAR31 * 1000;
break;
case VAR34:
VAR6->VAR35 = VAR9->VAR26 * 1000;
break;
case VAR36:
VAR6->VAR37 = VAR9->VAR26 * 1000;
break;
case VAR38:
VAR6->VAR39 = VAR9->VAR26 * 1000;
break;
case VAR40:
VAR6->VAR41 = VAR9->VAR26 * 1000;
break;
case VAR42:
VAR6->VAR43 = VAR9->VAR26 - 2732;
break;
case VAR44:
memcpy(VAR6->VAR45, &VAR9->VAR15, VAR9->VAR46 - 2);
VAR6->VAR47[VAR9->VAR46 - 2] = '';
break;
case VAR48:
memcpy(VAR6->VAR47, &VAR9->VAR15, VAR9->VAR46 - 2);
VAR6->VAR47[VAR9->VAR46 - 2] = '';
break;
case VAR49:
memcpy(VAR6->VAR50, &VAR9->VAR15, VAR9->VAR46 - 2);
VAR6->VAR50[VAR9->VAR46 - 2] = '';

if (!FUN5(VAR6->VAR50, "", 30))
VAR6->VAR51 = VAR52;
else
VAR6->VAR51 = VAR53;
break;
default:
return VAR54;
}

return VAR54;
}