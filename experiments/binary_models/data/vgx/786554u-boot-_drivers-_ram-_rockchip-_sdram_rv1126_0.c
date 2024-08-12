static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5 = 0;
struct VAR6 *VAR7 =
(struct VAR6 *)VAR8;
struct VAR9 *VAR10;

VAR11.VAR12 = (void *)VAR13;
VAR11.VAR14 = (void *)VAR15;
VAR11.VAR16 = (void *)VAR17;
VAR11.VAR18 = (void *)VAR19;
VAR11.VAR20 = (void *)VAR21;
VAR11.VAR22 = (void *)VAR23;
VAR11.VAR24 = (void *)VAR25;

FUN2("");
if (VAR7->VAR26 != 2 ||
(VAR7->VAR27.VAR28 != sizeof(struct VAR9) / 4) ||
(VAR7->VAR29.VAR28 !=
sizeof(struct VAR30) / 4) ||
(VAR7->VAR31.VAR28 !=
sizeof(struct VAR30) / 4) ||
(VAR7->VAR32.VAR28 !=
sizeof(struct VAR30) / 4) ||
(VAR7->VAR33.VAR28 != (sizeof(struct VAR34) / 4)) ||
(VAR7->VAR35.VAR28 != (sizeof(struct VAR34) / 4)) ||
VAR7->VAR27.VAR36 == 0 ||
VAR7->VAR29.VAR36 == 0 ||
VAR7->VAR31.VAR36 == 0 ||
VAR7->VAR32.VAR36 == 0 ||
VAR7->VAR33.VAR36 == 0 ||
VAR7->VAR35.VAR36 == 0) {
FUN2("");
goto VAR37;
}

VAR10 = (struct VAR9 *)((void *)VAR8 +
VAR7->VAR27.VAR36 * 4);

VAR11.VAR38 = FUN3(VAR10->VAR39);
VAR11.VAR40 = FUN4(VAR10->VAR39);

VAR4 = &VAR41[0];
if (VAR4->VAR42.VAR43 == VAR44 ||
VAR4->VAR42.VAR43 == VAR45) {
if (FUN5(VAR10->VAR46))
VAR4->VAR47.VAR14[0][1] |= 0x1 << 10;
else
VAR4->VAR47.VAR14[0][1] &=
~(0x1 << 10);
}
VAR5 = FUN6(&VAR11, VAR4);
if (VAR5) {
FUN7(VAR4->VAR42.VAR43);
FUN2("");
FUN8(VAR4->VAR42.VAR48);
FUN2("");
goto VAR37;
}
FUN9(VAR4);
FUN10(&VAR49, VAR11.VAR12,
(VAR50)VAR4->VAR51.VAR52.VAR53);

FUN11(&VAR11, VAR4);
FUN12();

FUN13(&VAR49);

if (FUN14(VAR54))
FUN2("");

return VAR5;
VAR37:
FUN2("");
return (-1);
}