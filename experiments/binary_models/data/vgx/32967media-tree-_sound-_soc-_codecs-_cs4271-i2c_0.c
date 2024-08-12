static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct regmap_config VAR5;

VAR5 = VAR6;
VAR5.VAR7 = 8;
VAR5.VAR8 = 8;

return FUN2(&VAR2->VAR9,
FUN3(VAR2, &VAR5));
}