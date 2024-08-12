static enum VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
int *VAR6)
{
enum i40e_nvmupd_cmd VAR7;
u8 VAR8, VAR9;


VAR7 = VAR10;

VAR9 = FUN2(VAR5->VAR11);
VAR8 = FUN3(VAR5->VAR11);


if ((VAR5->VAR12 < 1) ||
(VAR5->VAR12 > VAR13)) {
FUN4(VAR3, VAR14,
"",
VAR5->VAR12);
*VAR6 = -VAR15;
return VAR10;
}

switch (VAR5->VAR16) {
case VAR17:
switch (VAR9) {
case VAR18:
VAR7 = VAR19;
break;
case VAR20:
VAR7 = VAR21;
break;
case VAR22:
VAR7 = VAR23;
break;
case VAR24:
VAR7 = VAR25;
break;
case VAR26:
if (VAR8 == 0xf)
VAR7 = VAR27;
else if (VAR8 == 0)
VAR7 = VAR28;
break;
}
break;

case VAR29:
switch (VAR9) {
case VAR18:
VAR7 = VAR30;
break;
case VAR20:
VAR7 = VAR31;
break;
case VAR22:
VAR7 = VAR32;
break;
case VAR24:
VAR7 = VAR33;
break;
case VAR34:
VAR7 = VAR35;
break;
case VAR36:
VAR7 = VAR37;
break;
case (VAR36|VAR24):
VAR7 = VAR38;
break;
case (VAR36|VAR22):
VAR7 = VAR39;
break;
case VAR26:
if (VAR8 == 0)
VAR7 = VAR40;
break;
}
break;
}

return VAR7;
}