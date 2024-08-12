static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, char *VAR5,
const VAR6 *VAR7, u32 VAR8)
{
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13, VAR14;
unsigned int VAR15;


if (VAR8 < sizeof(struct VAR11))
return 0;

VAR12 = (struct VAR11 *) VAR7;

if (FUN2(VAR12, &VAR13))
return 0;

VAR15 = FUN3(VAR12->VAR15);
if (VAR15 >= VAR16 / 2) {
FUN4(VAR2, "", VAR15);
return -VAR17;
}

VAR14 = VAR15 * 2;
if (!VAR14 || (VAR8 < FUN5(VAR14, 16) +
sizeof(struct VAR11) + VAR18)) {
FUN4(VAR2, "", VAR5);
return -VAR17;
}

VAR10 = FUN6(sizeof(struct VAR9), VAR19);
if (!VAR10)
return -VAR20;

VAR10->VAR21 = VAR7;
FUN7(&VAR10->VAR22, VAR5);
memcpy(VAR10->VAR22.VAR23, VAR12->VAR23,
VAR24);
VAR10->VAR22.VAR25 = VAR12->VAR25;
VAR10->VAR22.VAR26 = VAR13;
VAR10->VAR22.VAR8 = VAR14;
FUN8(&VAR10->VAR27, &VAR4->VAR28);

return 0;
}