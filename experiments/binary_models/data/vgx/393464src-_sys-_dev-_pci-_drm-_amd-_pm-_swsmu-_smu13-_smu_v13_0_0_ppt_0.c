static int FUN1(struct VAR1 *VAR2,
enum smu_clk_type VAR3,
uint32_t VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR6;
struct VAR7 *VAR8 = VAR6->VAR8;
struct VAR9 *VAR10;
uint32_t VAR11, VAR12;
uint32_t VAR13, VAR14;
int VAR15 = 0;

VAR11 = VAR4 ? (FUN2(VAR4) - 1) : 0;
VAR12 = VAR4 ? (FUN3(VAR4) - 1) : 0;

switch (VAR3) {
case VAR16:
case VAR17:
VAR10 = &(VAR8->VAR18.VAR19);
break;
case VAR20:
case VAR21:
VAR10 = &(VAR8->VAR18.VAR22);
break;
case VAR23:
VAR10 = &(VAR8->VAR18.VAR24);
break;
case VAR25:
VAR10 = &(VAR8->VAR18.VAR26);
break;
case VAR27:
case VAR28:
VAR10 = &(VAR8->VAR18.VAR29);
break;
case VAR30:
case VAR31:
VAR10 = &(VAR8->VAR18.VAR32);
break;
default:
break;
}

switch (VAR3) {
case VAR16:
case VAR17:
case VAR20:
case VAR21:
case VAR23:
case VAR25:
case VAR27:
case VAR28:
case VAR30:
case VAR31:
if (VAR10->VAR33) {

VAR12 = (VAR12 >= 1 ? 1 : 0);
VAR11 = (VAR11 >= 1 ? 1 : 0);
} else {
if ((VAR12 >= VAR10->VAR34) ||
(VAR11 >= VAR10->VAR34))
return -VAR35;
}

VAR13 = VAR10->VAR36[VAR11].VAR37;
VAR14 = VAR10->VAR36[VAR12].VAR37;

VAR15 = FUN4(VAR2,
VAR3,
VAR13,
VAR14);
break;
case VAR38:
case VAR39:
default:
break;
}

return VAR15;
}