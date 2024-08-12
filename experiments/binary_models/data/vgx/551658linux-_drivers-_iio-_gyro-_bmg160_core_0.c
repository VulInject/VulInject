static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3,
int *VAR4, int *VAR5, long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
int VAR9;

switch (VAR6) {
case VAR10:
switch (VAR3->VAR11) {
case VAR12:
return FUN3(VAR8, VAR4);
case VAR13:
if (FUN4(VAR2))
return -VAR14;
else
return FUN5(VAR8, VAR3->VAR15,
VAR4);
default:
return -VAR16;
}
case VAR17:
if (VAR3->VAR11 == VAR12) {
*VAR4 = VAR18;
return VAR19;
} else
return -VAR16;
case VAR20:
return FUN6(VAR8, VAR4);
case VAR21:
switch (VAR3->VAR11) {
case VAR12:
*VAR4 = 500;
return VAR19;
case VAR13:
{
int VAR22;

for (VAR22 = 0; VAR22 < FUN7(VAR23); ++VAR22) {
if (VAR23[VAR22].VAR24 ==
VAR8->VAR24) {
*VAR4 = 0;
*VAR5 = VAR23[VAR22].VAR25;
return VAR26;
}
}
return -VAR16;
}
default:
return -VAR16;
}
case VAR27:
*VAR5 = 0;
FUN8(&VAR8->mutex);
VAR9 = FUN9(VAR8, VAR4);
FUN10(&VAR8->mutex);
return VAR9;
default:
return -VAR16;
}
}