int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, unsigned int VAR5)
{
VAR6 *VAR7 = VAR2->VAR7;
struct spi_transfer VAR8 = {
.VAR9		= VAR7,
.VAR10		= VAR4 + 1,
.VAR11	= VAR2->VAR12,
};
struct spi_message VAR13;
int VAR14;

VAR7[0] = (VAR3 << VAR2->VAR15->VAR16) | VAR2->VAR17;

switch (VAR4) {
case 3:
VAR7[1] = VAR5 >> 16;
VAR7[2] = VAR5 >> 8;
VAR7[3] = VAR5;
break;
case 2:
FUN2(VAR5, &VAR7[1]);
break;
case 1:
VAR7[1] = VAR5;
break;
case 0:
break;
default:
return -VAR18;
}

FUN3(&VAR13);
FUN4(&VAR8, &VAR13);

if (VAR2->VAR12)
VAR14 = FUN5(VAR2->VAR19, &VAR13);
else
VAR14 = FUN6(VAR2->VAR19, &VAR13);

return VAR14;
}