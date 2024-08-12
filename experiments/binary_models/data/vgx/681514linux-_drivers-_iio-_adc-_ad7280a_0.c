static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3,
int *VAR4,
int *VAR5,
long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
int VAR9;

switch (VAR6) {
case VAR10:
FUN3(&VAR8->VAR11);
if (VAR3->VAR12 == VAR13)
VAR9 = FUN4(VAR8, VAR8->VAR14, NULL);
else
VAR9 = FUN5(VAR8, VAR3->VAR12 >> 8,
VAR3->VAR12 & 0xFF);
FUN6(&VAR8->VAR11);

if (VAR9 < 0)
return VAR9;

*VAR4 = VAR9;

return VAR15;
case VAR16:
if ((VAR3->VAR12 & 0xFF) <= VAR17)
*VAR4 = 4000;
else
*VAR4 = 5000;

*VAR5 = VAR18;
return VAR19;
case VAR20:
*VAR4 = VAR21[VAR8->VAR22];
return VAR15;
}
return -VAR23;
}