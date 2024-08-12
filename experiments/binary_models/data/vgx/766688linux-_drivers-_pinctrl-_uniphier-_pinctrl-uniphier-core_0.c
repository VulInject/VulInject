static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned VAR5)
{
const struct VAR6 *VAR7 = FUN2(VAR2, VAR5);
const char *VAR8, *VAR9;

switch (FUN3(VAR7->VAR10)) {
case VAR11:
VAR8 = "";
break;
case VAR12:
VAR8 = "";
break;
case VAR13:
VAR8 = "";
break;
case VAR14:
VAR8 = "";
break;
case VAR15:
VAR8 = "";
break;
default:
FUN4();
}

switch (FUN5(VAR7->VAR10)) {
case VAR16:
VAR9 = "";
break;
case VAR17:
VAR9 = "";
break;
case VAR18:
VAR9 = "";
break;
case VAR19:
VAR9 = "";
break;
case VAR20:
VAR9 = "";
break;
case VAR21:
VAR9 = "";
break;
case VAR22:
VAR9 = "";
break;
default:
FUN4();
}

FUN6(VAR4, "", VAR8, VAR9);
}

static const struct pinctrl_ops VAR23 = {
.VAR24 = VAR25,
.VAR26 = VAR27,
.VAR28 = VAR29,
.VAR30 = VAR31,
.VAR32 = VAR33,
.VAR34 = VAR35,
};

static const unsigned int VAR36[] = {4, 8};
static const unsigned int VAR37[] = {8, 12, 16, 20};
static const unsigned int VAR38[] = {4, 5, 7, 9, 11,
12, 14, 16};
static const unsigned int VAR39[] = {4};
static const unsigned int VAR40[] = {5};
static const unsigned int VAR41[] = {8};

static int FUN7(struct VAR1 *VAR2,
unsigned int VAR42, unsigned int *VAR43,
unsigned int *VAR44,
unsigned int *VAR45,
const unsigned int **VAR46)
{
const struct VAR6 *VAR7 = FUN2(VAR2, VAR42);
enum uniphier_pin_drv_type VAR47 =
FUN5(VAR7->VAR10);
unsigned int VAR48 = 0;
unsigned int VAR49 = 0;
unsigned int VAR50 = 0;
unsigned int VAR51;

switch (VAR47) {
case VAR16:
*VAR46 = VAR36;
VAR48 = VAR52;
VAR49 = 1;
VAR50 = 1;
break;
case VAR17:
*VAR46 = VAR37;
VAR48 = VAR53;
VAR49 = 2;
VAR50 = 2;
break;
case VAR18:
*VAR46 = VAR38;
VAR48 = VAR54;
VAR49 = 4;
VAR50 = 3;
break;
case VAR19:
*VAR46 = VAR39;
break;
case VAR20:
*VAR46 = VAR40;
break;
case VAR21:
*VAR46 = VAR41;
break;
default:

return -VAR55;
}

VAR51 = FUN8(VAR7->VAR10);
VAR51 *= VAR49;

*VAR43 = VAR48 + VAR51 / 32 * 4;
*VAR44 = VAR51 % 32;
*VAR45 = (1U << VAR50) - 1;

return 0;
}