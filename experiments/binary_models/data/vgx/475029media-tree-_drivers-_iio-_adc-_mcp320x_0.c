static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3, int *VAR4,
int *VAR5, long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
int VAR9 = -VAR10;
int VAR11 = 0;

FUN3(&VAR8->VAR12);

VAR11 = FUN4(VAR8->VAR13)->VAR14;

switch (VAR6) {
case VAR15:
VAR9 = FUN5(VAR8, VAR3->VAR16,
VAR3->VAR17, VAR11);

if (VAR9 < 0)
goto VAR18;

*VAR4 = VAR9;
VAR9 = VAR19;
break;

case VAR20:
VAR9 = FUN6(VAR8->VAR21);
if (VAR9 < 0)
goto VAR18;


*VAR4 = VAR9 / 1000;
*VAR5 = VAR8->VAR22->VAR23;
VAR9 = VAR24;
break;
}

VAR18:
FUN7(&VAR8->VAR12);

return VAR9;
}