static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5,
struct VAR6 *VAR7)
{
struct VAR1 *VAR8[VAR9 + 1];
int VAR10;

VAR10 = FUN2(VAR8, VAR9, VAR2,
VAR11, VAR7);
if (VAR10)
return VAR10;

if (!VAR8[VAR12])
return -VAR13;

if (VAR4) {
struct VAR14 *VAR15 =
FUN3(VAR4) + VAR5;

VAR2 = VAR8[VAR12];
VAR15->VAR16 = FUN4(VAR2);
VAR15->VAR16 &= VAR17;
VAR4->VAR18.VAR19 |= VAR20;
}

return sizeof(struct VAR14);
}