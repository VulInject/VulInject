static int FUN1(struct VAR1 *VAR2,
loff_t VAR3, size_t VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
struct spi_message	VAR9;
const size_t		VAR10 = 4 + 64;
VAR11			*VAR12;
struct spi_transfer	VAR13;
struct VAR14	*VAR15 = VAR2->VAR15;
int			VAR16;

if (VAR3 >= 64) {

*VAR6 = 0;
return 0;
}


if ((VAR3 + VAR4) > 64)
VAR4 = 64 - VAR3;


VAR12 = FUN2(VAR10, VAR17);
if (!VAR12)
return -VAR18;
VAR12[0] = VAR19;
memcpy(VAR12 + 4 + VAR3, VAR8, VAR4);

FUN3(&VAR9);

memset(&VAR13, 0, sizeof VAR13);
VAR13.VAR20 = VAR12;
VAR13.VAR4 = VAR10;
FUN4(&VAR13, &VAR9);


FUN5(&VAR15->VAR21);
FUN6(VAR15->VAR22);
VAR16 = FUN7(VAR15->VAR22, &VAR9);
FUN8(&VAR15->VAR21);

FUN9(VAR12);

if (VAR16 >= 0) {
VAR16 = 0;
*VAR6 = VAR4;
}
return VAR16;
}