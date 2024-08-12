static int
FUN1(struct VAR1 *VAR2, unsigned VAR3, u32 VAR4,
unsigned VAR5, unsigned VAR6)
{
FUN2(VAR2->VAR2, "",
VAR3, VAR4, VAR5, VAR6);


if (VAR2->VAR7)
return -VAR8;

if ((VAR6 == 1) && (VAR5 > 0x1000000))
return -VAR9;

VAR2->VAR7 = 1;



switch (VAR2->VAR10) {
case VAR11:

FUN3((1 << VAR12) |
(1 << VAR13) |
(0 << VAR14) |
(1 << VAR15) |
(1 << VAR16) |
(1 << VAR17) |
(1 << VAR18) |
(1 << VAR19) |
(1 << VAR20),
VAR2->VAR21.VAR22 + VAR23);

FUN3(0x100000, VAR2->VAR21.VAR22 + VAR24);
FUN3(VAR4, VAR2->VAR21.VAR22 + VAR25);
FUN3(VAR5, VAR2->VAR21.VAR22 + VAR26);
FUN3((VAR6 << VAR27) |
(1 << VAR28),
VAR2->VAR21.VAR22 + VAR29);
FUN3((1 << VAR30) |
FUN4(VAR2->VAR21.VAR22 + VAR31),
VAR2->VAR21.VAR22 + VAR31);

break;
}

FUN5(VAR2, VAR32,
(0 << VAR33) |
(1 << VAR34) |
(1 << VAR35) |
(VAR2->VAR36 << VAR37) |
(VAR2->VAR38 << VAR39) |
(VAR2->VAR40 << VAR41) |
((VAR3 >> 1) << VAR42));

(void) FUN6(VAR2, VAR43);

return 0;
}