static int FUN1(struct VAR1 *VAR2,
enum power_supply_property VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);


if (VAR3 == VAR6)
return VAR5->VAR7 == VAR8;

return VAR3 == VAR9 ||
VAR3 == VAR10;
}

static enum power_supply_property VAR11[] = {
VAR12,
VAR13,
VAR6,
VAR9,
VAR14,
VAR10,
VAR15,
};

static enum power_supply_property VAR16[] = {
VAR12,
VAR13,
VAR6,
VAR9,
VAR10,
};

static const struct power_supply_desc VAR17 = {
.VAR18 = "",
.VAR19 = VAR20,
.VAR21 = VAR11,
.VAR22 = FUN3(VAR11),
.VAR23 = VAR24,
.VAR25 = VAR26,
.VAR27 = VAR28,
};

static const struct power_supply_desc VAR29 = {
.VAR18 = "",
.VAR19 = VAR20,
.VAR21 = VAR16,
.VAR22 = FUN3(VAR16),
.VAR23 = VAR24,
.VAR25 = VAR26,
.VAR27 = VAR28,
};

static const char * const VAR30[] = {
"",
"",
"",
"",
};

static const char * const VAR31[] = {
"",
"",
};

struct VAR32 {
const struct VAR33	*VAR34;
const char * const		*VAR35;
unsigned int			VAR36;
enum axp20x_variants		VAR7;
};