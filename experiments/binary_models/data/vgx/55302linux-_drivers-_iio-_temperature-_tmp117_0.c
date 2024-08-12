static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3, int *VAR4,
int *VAR5, long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
s32 VAR9;

switch (VAR6) {
case VAR10:
VAR9 = FUN3(VAR8->VAR11,
VAR12);
if (VAR9 < 0)
return VAR9;
*VAR4 = FUN4(VAR9, 15);
return VAR13;

case VAR14:
VAR9 = FUN3(VAR8->VAR11,
VAR15);
if (VAR9 < 0)
return VAR9;
*VAR4 = FUN4(VAR9, 15);
return VAR13;

case VAR16:

*VAR4 = VAR17 / VAR18;
*VAR5 = (VAR17 %
VAR18) * 100;

return VAR19;

default:
return -VAR20;
}
}