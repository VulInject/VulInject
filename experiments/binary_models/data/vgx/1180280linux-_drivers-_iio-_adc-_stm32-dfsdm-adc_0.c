static int FUN1(struct VAR1 *VAR2,
struct iio_chan_spec const *VAR3,
int VAR4, int VAR5, long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10 = &VAR8->VAR11->VAR12[VAR3->VAR13];
unsigned int VAR14;
int VAR15 = -VAR16;

switch (VAR10->VAR17) {
case VAR18:
VAR14 = VAR8->VAR11->VAR19;
break;
case VAR20:
case VAR21:
VAR14 = VAR8->VAR11->VAR19 / 2;
break;
default:
VAR14 = VAR8->VAR14;
}

switch (VAR6) {
case VAR22:
VAR15 = FUN3(VAR2);
if (VAR15)
return VAR15;

VAR15 = FUN4(VAR2, VAR4);
if (!VAR15) {
FUN5(&VAR2->VAR23,
"",
VAR8->VAR24, VAR14 / VAR4);
VAR8->VAR25 = VAR4;
VAR8->VAR24 = VAR14 / VAR4;
}
FUN6(VAR2);
return VAR15;

case VAR26:
if (!VAR4)
return -VAR16;

VAR15 = FUN3(VAR2);
if (VAR15)
return VAR15;

VAR15 = FUN7(VAR2, VAR4, VAR14);
FUN6(VAR2);
return VAR15;
}

return -VAR16;
}