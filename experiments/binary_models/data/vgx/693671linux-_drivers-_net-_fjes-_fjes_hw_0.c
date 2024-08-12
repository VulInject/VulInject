int FUN1(struct VAR1 *VAR2)
{
union VAR3 *VAR4 = VAR2->VAR5.VAR4;
union VAR6 *VAR7 = VAR2->VAR5.VAR7;
enum fjes_dev_command_response_e VAR8;
int VAR9 = 0;

if (!VAR2->VAR5.VAR10)
return -VAR11;

memset(VAR4, 0, VAR2->VAR5.VAR12);
memset(VAR7, 0, VAR2->VAR5.VAR13);
VAR4->VAR14.VAR15 = VAR16;

VAR7->VAR14.VAR15 = 0;
VAR7->VAR14.VAR17 = 0;

VAR8 = FUN2(VAR2, VAR18);
FUN3(VAR7);

if (VAR7->VAR14.VAR15 != VAR19) {
FUN4("");
VAR9 = -VAR20;
} else if (VAR8 == VAR21) {
switch (VAR7->VAR14.VAR17) {
case VAR22:
VAR9 = 0;
VAR2->VAR23 = 0;
break;
default:
VAR9 = -VAR11;
break;
}
} else {
switch (VAR8) {
case VAR24:
VAR9 = -VAR11;
break;
case VAR25:
VAR9 = -VAR26;
FUN4("");
break;
case VAR27:
case VAR28:
default:
VAR9 = -VAR11;
break;
}
}

return VAR9;
}