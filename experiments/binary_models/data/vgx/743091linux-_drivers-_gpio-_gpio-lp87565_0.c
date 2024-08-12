static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

switch (FUN3(VAR4)) {
case VAR7:
return FUN4(VAR6->VAR8,
VAR9,
FUN5(VAR3 +
FUN6(VAR10)),
FUN5(VAR3 +
FUN6(VAR10)));
case VAR11:
return FUN4(VAR6->VAR8,
VAR9,
FUN5(VAR3 +
FUN6(VAR10)), 0);
default:
return -VAR12;
}
}

static const struct gpio_chip VAR13 = {
.VAR14			= "",
.VAR15			= VAR16,
.VAR17		= VAR18,
.VAR19		= VAR20,
.VAR21	= VAR22,
.VAR23	= VAR24,
.VAR25			= VAR26,
.VAR27			= VAR28,
.VAR29		= VAR30,
.VAR31			= -1,
.VAR32			= 3,
.VAR33		= true,
};