static int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5, bool VAR6)
{
struct VAR7 *VAR8 = &VAR2->VAR8;
struct VAR9 *VAR10 = &VAR8->VAR11;
struct VAR12 *VAR13;
struct VAR14 *VAR15;
struct VAR16 *VAR17;
VAR18 *VAR19;
u16 VAR20;
u32 VAR21 = VAR2->VAR22->VAR23.VAR24;

FUN2(&VAR10->VAR25);
VAR13 = FUN3(&VAR10->VAR26, VAR5);
if (!VAR13) {
FUN4(VAR2->VAR22, "",
VAR5);
FUN5(&VAR10->VAR25);
return -VAR27;
}

FUN6(&VAR10->VAR26, VAR5);
FUN5(&VAR10->VAR25);

VAR15 = FUN7(VAR13);
FUN8(VAR2->VAR22->VAR28, VAR15->VAR29,
VAR13->VAR30 + FUN9(VAR13),
VAR31);

if (VAR6) {
FUN10(VAR13);
return 0;
}

FUN11();
if (!FUN12(VAR2->VAR22->VAR32[VAR2->VAR33])) {
FUN10(VAR13);
goto VAR34;
}

if (FUN13(VAR35, &VAR2->VAR36)) {
FUN10(VAR13);
goto VAR34;
}

VAR17 = (struct VAR16 *)VAR13->VAR37;
VAR20 = FUN14(VAR2->VAR22, VAR17);
if ((VAR20 + VAR21) > VAR38) {
VAR19 = FUN15(VAR2->VAR22, VAR17);
FUN4(VAR2->VAR22, "", VAR20);
FUN16(VAR2->VAR22, VAR39, NULL, "", VAR19,
sizeof(struct VAR40));
FUN16(VAR2->VAR22, VAR39, NULL, "", VAR17,
sizeof(struct VAR16));
FUN10(VAR13);
goto VAR34;
}

FUN17(VAR13, VAR21 + VAR20);

if (FUN18(VAR2, VAR13, VAR4)) {
FUN10(VAR13);
FUN19(VAR2->VAR22, VAR4,
VAR41);
}
VAR34:
FUN20();
return 0;
}