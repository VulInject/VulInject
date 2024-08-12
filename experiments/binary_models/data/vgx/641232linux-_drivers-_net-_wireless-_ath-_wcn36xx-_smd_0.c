int FUN1(struct VAR1 *VAR2,
void *VAR3, int VAR4, void *VAR5, u32 VAR6)
{
const struct VAR7 *VAR8 = VAR3;
struct VAR9 *VAR10 = VAR5;
struct VAR11 *VAR12 = VAR10->VAR5;
struct VAR13 *VAR14;
FUN2(VAR15, "", VAR3, VAR4);

switch (VAR8->VAR16) {
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:
case VAR26:
case VAR27:
case VAR28:
case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
case VAR34:
case VAR35:
case VAR36:
case VAR37:
case VAR38:
case VAR39:
case VAR40:
case VAR41:
case VAR42:
case VAR43:
case VAR44:
case VAR45:
case VAR46:
case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
case VAR52:
case VAR53:
case VAR54:
case VAR55:
case VAR56:
case VAR57:
case VAR58:
case VAR59:
case VAR60:
case VAR61:
case VAR62:
case VAR63:
memcpy(VAR12->VAR64, VAR3, VAR4);
VAR12->VAR65 = VAR4;
FUN3(&VAR12->VAR66);
break;

case VAR67:
case VAR68:
case VAR69:
case VAR70:
case VAR71:
case VAR72:
case VAR73:
case VAR74:
VAR14 = FUN4(FUN5(VAR14, VAR75, VAR4), VAR76);
if (!VAR14) {
FUN6("",
VAR8->VAR16);
return -VAR77;
}

VAR14->VAR78 = VAR4;
memcpy(VAR14->VAR75, VAR3, VAR4);

FUN7(&VAR12->VAR79);
FUN8(&VAR14->VAR80, &VAR12->VAR81);
FUN9(VAR12->VAR82, &VAR12->VAR83);
FUN10(&VAR12->VAR79);
FUN11(VAR84, "");
break;
default:
FUN6("",
VAR8->VAR16);
}

return 0;
}