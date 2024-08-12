static bool FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
bool VAR5 = false;
const struct VAR6 *VAR7;

for (VAR7 = VAR4->VAR8; VAR7 != NULL; VAR7 = VAR7->VAR9) {

assert(VAR7->VAR10.VAR11->VAR12 & VAR13);
unsigned VAR14 = VAR7->VAR10.VAR11->VAR15;

switch (VAR7->VAR10.VAR11->VAR16) {
case VAR17:
case VAR18:
case VAR19:
case VAR20:

assert(VAR14 < FUN2(VAR2->VAR21.VAR22));
FUN3(VAR2->VAR21.VAR22[VAR14]);
VAR2->VAR21.VAR22[VAR14] =
FUN4(VAR7->VAR23, "");
VAR2->VAR21.VAR24[VAR14] = true;
break;

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

assert(VAR14 < FUN2(VAR2->VAR21.VAR35));
VAR2->VAR21.VAR35[VAR14] = VAR7->VAR36;
VAR2->VAR21.VAR37[VAR14] = true;
break;

case VAR38:
case VAR39:
case VAR40:
case VAR41:
case VAR42:
case VAR43:
VAR5 = true;
break;

case VAR44:
break;

case VAR45:
FUN5(VAR46,
"",
VAR7->VAR10.VAR11->VAR47);
break;
case VAR48:
FUN5(VAR49,
"",
VAR7->VAR10.VAR11->VAR47);
break;
default:

break;
}
}

return VAR5;
}