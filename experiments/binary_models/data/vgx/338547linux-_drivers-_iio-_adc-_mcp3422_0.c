static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3, int *VAR4)
{
int VAR5;
u8 VAR6;
u8 VAR7 = VAR3->VAR3;

FUN2(&VAR2->VAR8);

if (VAR7 != FUN3(VAR2->VAR6)) {
VAR6 = VAR2->VAR6;
VAR6 &= ~VAR9;
VAR6 |= FUN4(VAR7);
VAR6 &= ~VAR10;
VAR6 |= FUN5(VAR2->VAR11[VAR7]);
VAR5 = FUN6(VAR2, VAR6);
if (VAR5 < 0) {
FUN7(&VAR2->VAR8);
return VAR5;
}
FUN8(VAR12[FUN9(VAR2->VAR6)]);
}

VAR5 = FUN10(VAR2, VAR4, &VAR6);

FUN7(&VAR2->VAR8);

return VAR5;
}