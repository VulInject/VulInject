static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
const struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = FUN3(VAR7);
int VAR10;


switch (VAR5) {
case VAR11:
case VAR12:
case VAR13:
case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
break;
default:
return -VAR22;
}

VAR10 = FUN4(VAR2, VAR3);
if (VAR10 < 0)
return VAR10;

VAR10 = FUN5(VAR2, VAR5);
if (VAR10 < 0)
return VAR10;


if (VAR9->VAR23 && VAR5 == VAR20)
VAR10 = FUN6(VAR10, 10) & 0xffff;

return VAR10;
}

static struct pmbus_driver_info VAR24[] = {
[VAR25] = {
.VAR26 = 2,
.VAR27[VAR28] =
VAR29 | VAR30 |
VAR31 | VAR32  |
VAR33 | VAR34 |
VAR35 | VAR36 |
VAR37,
.VAR27[VAR38] =
VAR29 | VAR30,
VAR36,
.VAR39 = VAR40,
.VAR41 = VAR42,
},
[VAR43] = {
.VAR26 = 3,
.VAR27[VAR44] =
VAR29 | VAR30 |
VAR32  |
VAR33 | VAR34 | VAR45,
.VAR27[VAR46] =
VAR29 | VAR30 |
VAR32,
.VAR27[VAR47] =
VAR29 | VAR30 |
VAR32,
.VAR39 = VAR40,
.VAR41 = VAR42,
}
};