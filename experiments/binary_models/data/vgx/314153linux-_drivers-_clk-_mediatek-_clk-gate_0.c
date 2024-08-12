static struct VAR1 *FUN1(struct VAR2 *VAR3, const char *VAR4,
const char *VAR5,
struct VAR6 *VAR6, int VAR7,
int VAR8, int VAR9, u8 VAR10,
const struct VAR11 *VAR12,
unsigned long VAR13)
{
struct VAR14 *VAR15;
int VAR16;
struct clk_init_data VAR17 = {};

VAR15 = FUN2(sizeof(*VAR15), VAR18);
if (!VAR15)
return FUN3(-VAR19);

VAR17.VAR4 = VAR4;
VAR17.VAR13 = VAR13 | VAR20;
VAR17.VAR21 = VAR5 ? &VAR5 : NULL;
VAR17.VAR22 = VAR5 ? 1 : 0;
VAR17.VAR12 = VAR12;

VAR15->VAR6 = VAR6;
VAR15->VAR7 = VAR7;
VAR15->VAR8 = VAR8;
VAR15->VAR9 = VAR9;
VAR15->VAR10 = VAR10;

VAR15->VAR23.VAR17 = &VAR17;

VAR16 = FUN4(VAR3, &VAR15->VAR23);
if (VAR16) {
FUN5(VAR15);
return FUN3(VAR16);
}

return &VAR15->VAR23;
}