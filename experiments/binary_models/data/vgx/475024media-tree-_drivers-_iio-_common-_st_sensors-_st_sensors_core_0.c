int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3, int *VAR4)
{
int VAR5;
struct VAR6 *VAR7 = FUN2(VAR2);

FUN3(&VAR2->mlock);
if (VAR2->VAR8 == VAR9) {
VAR5 = -VAR10;
goto VAR11;
} else {
VAR5 = FUN4(VAR2, true);
if (VAR5 < 0)
goto VAR11;

FUN5((VAR7->VAR12->VAR13 * 1000) / VAR7->VAR14);
VAR5 = FUN6(VAR2, VAR3, VAR4);
if (VAR5 < 0)
goto VAR11;

*VAR4 = *VAR4 >> VAR3->VAR15.VAR16;

VAR5 = FUN4(VAR2, false);
}
VAR11:
FUN7(&VAR2->mlock);

return VAR5;
}