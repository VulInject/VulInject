static unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
u8 VAR4;
unsigned long VAR5, VAR6 = VAR3;
struct VAR7 *VAR8 = FUN2(VAR2);
const struct VAR9 *VAR10 = VAR8->VAR10;
const struct VAR11 *VAR12 =
VAR8->VAR12;
unsigned int VAR13;

FUN3(VAR8->VAR14, VAR5);
FUN4(VAR8->VAR15, VAR8->VAR10->VAR16, &VAR13);
FUN5(VAR8->VAR14, VAR5);

VAR13 &= VAR10->VAR17;

VAR4 = (VAR13 >> VAR18) & VAR19;

VAR6 /= VAR12->VAR20[VAR4];

if (VAR6 < VAR12->VAR21.VAR22)
FUN6("");
else if (VAR6 > VAR12->VAR21.VAR23)
FUN6("");

return VAR6;
}