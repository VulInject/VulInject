static enum VAR1 FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);

if (VAR5->VAR8 > 1)
return VAR9;

if (VAR5->VAR10 & VAR11)
return VAR12;

if (VAR5->VAR10 & VAR13)
return VAR14;


if (!VAR7->VAR15->VAR16 &&
VAR5->VAR10 & VAR17)
return VAR18;

if (VAR5->VAR10 & (VAR19 | VAR20 |
VAR21))
return VAR22;

return VAR23;
}