static int FUN1(const struct VAR1 *VAR2,
uint VAR3, VAR4 *VAR5,
enum pci_size_t VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);

switch (VAR3) {
case VAR9:
*VAR5 = VAR8->VAR10;
break;
case VAR11:
*VAR5 = VAR12;
break;
case VAR13:
*VAR5 = VAR14;
break;
case VAR15:
*VAR5 = VAR16;
break;
case VAR17:
if (VAR6 == VAR18) {
*VAR5 = VAR19;
} else {
*VAR5 = (VAR20 << 8) |
VAR19;
}
break;
case VAR21:
*VAR5 = VAR20;
break;
case VAR22:
case VAR23:
case VAR24:
case VAR25:
case VAR26:
case VAR27: {
int VAR28;
VAR29 *VAR30;

VAR28 = FUN3(VAR3);
VAR30 = &VAR8->VAR30[VAR28];

*VAR5 = FUN4(*VAR30, VAR31[VAR28].VAR32,
VAR31[VAR28].VAR6);
break;
}
case VAR33:
*VAR5 = VAR34;
break;
}

return 0;
}