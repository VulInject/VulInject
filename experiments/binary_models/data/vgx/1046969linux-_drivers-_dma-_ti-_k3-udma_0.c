static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(&VAR2->VAR5);

if (!VAR4) {
VAR2->VAR6 = NULL;
return -VAR7;
}

FUN3(&VAR4->VAR8);

VAR2->VAR6 = FUN4(&VAR4->VAR9);


if (FUN5(VAR2) && !FUN6(VAR2)) {
FUN7(VAR2);
goto VAR10;
}


FUN8(VAR2, false);


FUN7(VAR2);

switch (VAR2->VAR6->VAR11) {
case VAR12:

if (VAR2->VAR13.VAR14 == VAR15) {
u32 VAR16 = FUN9(VAR2->VAR6->VAR17.VAR18) |
FUN10(VAR2->VAR6->VAR17.VAR19);
const struct VAR20 *VAR21 =
VAR2->VAR22->VAR21;

if (VAR2->VAR13.VAR23)
VAR16 |= VAR24;
if (VAR2->VAR13.VAR25)
VAR16 |= VAR26;

FUN11(VAR2,
VAR27,
VAR16);

FUN11(VAR2,
VAR28,
FUN12(VAR2->VAR6->VAR17.VAR29,
VAR21->VAR30));


memcpy(&VAR2->VAR17, &VAR2->VAR6->VAR17,
sizeof(VAR2->VAR17));
}

FUN11(VAR2, VAR31,
VAR32);


FUN11(VAR2, VAR33,
VAR34);

break;
case VAR35:

if (VAR2->VAR13.VAR14 == VAR15) {
u32 VAR16 = FUN9(VAR2->VAR6->VAR17.VAR18) |
FUN10(VAR2->VAR6->VAR17.VAR19);

if (VAR2->VAR13.VAR23)
VAR16 |= VAR24;
if (VAR2->VAR13.VAR25)
VAR16 |= VAR26;

FUN13(VAR2,
VAR27,
VAR16);


memcpy(&VAR2->VAR17, &VAR2->VAR6->VAR17,
sizeof(VAR2->VAR17));
}


FUN13(VAR2, VAR33,
VAR34);

FUN13(VAR2, VAR31,
VAR32);

break;
case VAR36:
FUN11(VAR2, VAR31,
VAR32);
FUN13(VAR2, VAR31,
VAR32);

break;
default:
return -VAR37;
}

VAR2->VAR38 = VAR39;
VAR10:

return 0;
}