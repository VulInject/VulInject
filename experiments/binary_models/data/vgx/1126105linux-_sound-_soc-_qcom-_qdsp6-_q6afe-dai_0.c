static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int *VAR4,
unsigned int VAR5, unsigned int *VAR6)
{

struct VAR7 *VAR8 = FUN2(VAR2->VAR9);
struct VAR10 *VAR11 = &VAR8->VAR12[VAR2->VAR13].VAR14;
int VAR15;
int VAR16 = 0;

switch (VAR2->VAR13) {
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
if (!VAR4) {
FUN3(VAR2->VAR9, "");
return -VAR29;
}

if (VAR3 > VAR30) {
FUN3(VAR2->VAR9, "",
VAR3);
return -VAR29;
}
VAR15 = *VAR4;

break;
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

if (!VAR6) {
FUN3(VAR2->VAR9, "");
return -VAR29;
}
if (VAR5 > VAR30) {
FUN3(VAR2->VAR9, "",
VAR5);
return -VAR29;
}
VAR15 = *VAR6;

break;
default:
FUN3(VAR2->VAR9, "",
VAR41, VAR2->VAR13);
return -VAR29;
}

VAR11->VAR42 = VAR15;

return VAR16;
}