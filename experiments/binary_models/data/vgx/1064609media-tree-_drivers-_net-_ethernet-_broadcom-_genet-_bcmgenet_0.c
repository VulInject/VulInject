static int FUN1(struct VAR1 *VAR2,
netdev_features_t VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6;
bool VAR7;

VAR7 = !!(VAR3 & VAR8);

VAR6 = FUN3(VAR5, VAR9);


if (VAR7)
VAR6 |= VAR10;
else
VAR6 &= ~VAR10;
VAR5->VAR11 = VAR7;


if (VAR7 && VAR5->VAR12)
VAR6 |= VAR13;
else
VAR6 &= ~VAR13;

FUN4(VAR5, VAR6, VAR9);

return 0;
}