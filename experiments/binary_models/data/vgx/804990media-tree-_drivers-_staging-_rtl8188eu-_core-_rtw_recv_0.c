static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
u8 VAR4;
VAR5 *VAR6, *VAR7, *VAR8;
struct VAR9 *VAR10 = NULL;
VAR5 *VAR11 = VAR3->VAR12->VAR13;
struct VAR14	*VAR15 = &VAR3->VAR16;
struct VAR17	*VAR18 = &VAR1->VAR19;
int VAR20 = VAR21;

VAR4 = FUN2(VAR11);
VAR7 = FUN3(VAR11);
VAR6 = FUN4(VAR11);
VAR8 = FUN5(VAR11);

if (VAR8 == NULL) {
VAR20 = VAR22;
goto VAR23;
}

memcpy(VAR15->VAR24, VAR7, VAR25);
memcpy(VAR15->VAR26, VAR6, VAR25);

memcpy(VAR15->VAR27, VAR8, VAR25);

switch (VAR15->VAR28) {
case 0:
memcpy(VAR15->VAR29, VAR7, VAR25);
memcpy(VAR15->VAR30, VAR6, VAR25);
VAR20 = FUN6(VAR1, VAR3, &VAR10);
break;
case 1:
memcpy(VAR15->VAR29, VAR7, VAR25);
memcpy(VAR15->VAR30, VAR8, VAR25);
VAR20 = FUN7(VAR1, VAR3, &VAR10);
break;
case 2:
memcpy(VAR15->VAR29, VAR8, VAR25);
memcpy(VAR15->VAR30, VAR6, VAR25);
VAR20 = FUN8(VAR1, VAR3, &VAR10);
break;
case 3:
memcpy(VAR15->VAR29, FUN9(VAR11), VAR25);
memcpy(VAR15->VAR30, FUN10(VAR11), VAR25);
VAR20 = VAR22;
FUN11(VAR31, VAR32, (""));
break;
default:
VAR20 = VAR22;
break;
}

if (VAR20 == VAR22)
goto VAR23;
else if (VAR20 == VAR33)
goto VAR23;

if (VAR10 == NULL) {
FUN11(VAR31, VAR32, (""));
VAR20 = VAR22;
goto VAR23;
}



VAR3->VAR10 = VAR10;

VAR15->VAR34 = 0;
VAR15->VAR35 = 0;

if (VAR15->VAR36 == 1) {
VAR15->VAR37 = FUN12((VAR11 + 24));
VAR15->VAR35 = FUN13((VAR11 + 24));
VAR15->VAR34 = FUN14((VAR11 + 24));
VAR15->VAR38 = VAR15->VAR28 == 3 ? 32 : 26;

if (VAR15->VAR37 != 0 && VAR15->VAR37 != 3)
VAR1->VAR39.VAR40 = true;
} else {
VAR15->VAR37 = 0;
VAR15->VAR38 = VAR15->VAR28 == 3 ? 30 : 24;
}

if (VAR15->VAR41)
VAR15->VAR38 += 4;

VAR3->VAR42 = &VAR10->VAR43[VAR15->VAR37];


if (FUN15(VAR3, VAR4, &VAR10->VAR44.VAR45) == VAR22) {
FUN11(VAR31, VAR32, (""));
VAR20 = VAR22;
goto VAR23;
}

if (VAR15->VAR46) {
FUN11(VAR31, VAR47, ("", VAR15->VAR46));
FUN11(VAR31, VAR47, ("", VAR15->VAR29[0], FUN16(VAR15->VAR29)));

FUN17(VAR18, VAR10, VAR15->VAR48, FUN16(VAR15->VAR29));

FUN11(VAR31, VAR47, ("", VAR15->VAR48));

FUN18(VAR15->VAR49, VAR15->VAR50, VAR15->VAR48);
} else {
VAR15->VAR48 = 0;
VAR15->VAR49 = 0;
VAR15->VAR50 = 0;
}

VAR23:

return VAR20;
}