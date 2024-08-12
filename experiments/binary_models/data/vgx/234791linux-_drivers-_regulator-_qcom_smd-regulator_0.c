static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6 = VAR5->VAR7;
int VAR8;

VAR5->VAR7 = VAR3;
VAR5->VAR9 = 1;
VAR8 = FUN3(VAR5);
if (VAR8)
VAR5->VAR7 = VAR6;

return VAR8;
}

static const struct regulator_ops VAR10 = {
.VAR11 = VAR12,
.VAR13 = VAR14,
.VAR15 = VAR16,
.VAR17 = VAR18,

.VAR19 = VAR20,
.VAR21 = VAR22,

.VAR23 = VAR24,
};