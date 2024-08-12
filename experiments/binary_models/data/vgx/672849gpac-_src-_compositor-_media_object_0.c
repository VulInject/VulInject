VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, Bool VAR6, Bool VAR7)
{
u32 VAR8;
Bool VAR9;
GF_FieldInfo VAR10;
VAR11 *VAR12;
VAR1 *VAR13, *VAR14;
VAR15 *VAR16 = FUN2(VAR3);
if (!VAR16) return NULL;
VAR12 = (VAR11*)FUN3(VAR16);
if (!VAR12) return NULL;

VAR14 = NULL;


switch (FUN4(VAR3)) {

case VAR17:
case VAR18:
case VAR19:
VAR8 = VAR20;
break;
case VAR21:
case VAR22:
VAR8 = VAR23;
break;
case VAR24:
VAR8 = VAR25;
break;
case VAR26:
VAR8 = VAR27;
break;
case VAR28:
case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
case VAR34:
case VAR35:
VAR8 = VAR36;
break;
case VAR37:
case VAR38:
VAR8 = VAR25;
break;


case VAR39:
VAR8 = VAR20;
if (FUN5(VAR3, VAR40, VAR41, VAR41, &VAR10)==VAR42) {
VAR14 = FUN6(VAR12, (VAR43 *)VAR10.VAR44, VAR45, VAR3, &VAR9);

if (VAR9) return NULL;
}
break;
case VAR46:
VAR8 = VAR36;
if (FUN5(VAR3, VAR40, VAR41, VAR41, &VAR10)==VAR42) {
VAR14 = FUN6(VAR12, (VAR43 *)VAR10.VAR44, VAR45, VAR3, &VAR9);

if (VAR9) return NULL;
}
break;
case VAR47:
VAR8 = VAR36;
break;
case VAR48:
case VAR49:
VAR8 = VAR25;
break;
case VAR50:
VAR8 = VAR23;
break;

default:
VAR8 = VAR45;
break;
}


while (VAR12->VAR51 && VAR12->VAR52->VAR53)
VAR12 = VAR12->VAR52->VAR53;

VAR13 = FUN7(VAR12, VAR5, VAR8, VAR6, VAR14, VAR7, VAR3, NULL);
return VAR13;
}