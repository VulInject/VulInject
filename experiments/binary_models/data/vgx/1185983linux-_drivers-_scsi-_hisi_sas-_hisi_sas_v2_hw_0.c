static void FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR6;
struct VAR5 *VAR7 = VAR1->VAR7;
u64 VAR8, VAR9 = VAR3->VAR9;
struct VAR10 *VAR11 = &VAR1->VAR11[VAR9];
struct VAR4 *VAR12 = VAR5->VAR13;
struct VAR14 *VAR15 = VAR5->VAR16;
struct VAR17 *VAR16 = FUN2(VAR15);
u64 VAR18;

memset(VAR11, 0, sizeof(*VAR11));


VAR8 = 0;
switch (VAR3->VAR19) {
case VAR20:
case VAR21:
case VAR22:
VAR8 = VAR23 << VAR24;
break;
case VAR25:
case VAR26:
if (VAR12 && FUN3(VAR12->VAR19))
VAR8 = VAR27 << VAR24;
else
VAR8 = VAR28 << VAR24;
break;
default:
FUN4(VAR7, "",
VAR3->VAR19);
}

VAR8 |= ((1 << VAR29) |
(VAR5->VAR30 << VAR31) |
(1 << VAR32) |
(VAR33 << VAR34) |
(1 << VAR35) |
(VAR16->VAR36 << VAR37));
VAR11->VAR8 = FUN5(VAR8);


memcpy(&VAR18, VAR5->VAR18, VAR38);
VAR11->VAR18 = FUN5(FUN6(VAR18));


if (!FUN7(VAR5))
VAR11->VAR39 = FUN5((5000ULL << VAR40) |
(0x1ULL << VAR41) |
(0x32ULL << VAR42) |
(0x1ULL << VAR43));
}