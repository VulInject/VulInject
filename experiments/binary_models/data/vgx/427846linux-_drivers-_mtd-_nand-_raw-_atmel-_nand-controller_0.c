static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = FUN2(VAR4);
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;


VAR8 = FUN3(VAR2->VAR4, sizeof(*VAR8) + sizeof(*VAR8->VAR13),
VAR14);
if (!VAR8)
return -VAR15;

VAR8->VAR16 = 1;

VAR12 = FUN4(VAR6, VAR17, 0);
VAR8->VAR13[0].VAR18.VAR19 = FUN5(VAR4, VAR12);
if (FUN6(VAR8->VAR13[0].VAR18.VAR19))
return FUN7(VAR8->VAR13[0].VAR18.VAR19);

VAR8->VAR13[0].VAR18.VAR20 = VAR12->VAR21;


VAR8->VAR13[0].VAR22 = 3;


VAR10 = FUN8(VAR4, NULL, 0,  VAR23);
if (FUN6(VAR10)) {
FUN9(VAR4, "",
FUN7(VAR10));
return FUN7(VAR10);
}

if (VAR10) {
VAR8->VAR13[0].VAR24.VAR25 = VAR26;
VAR8->VAR13[0].VAR24.VAR10 = VAR10;
}


VAR10 = FUN8(VAR4, NULL, 1, VAR27);
if (FUN6(VAR10)) {
FUN9(VAR4, "",
FUN7(VAR10));
return FUN7(VAR10);
}

VAR8->VAR13[0].VAR28 = VAR10;


VAR10 = FUN8(VAR2->VAR4, NULL, 2, VAR23);
if (FUN6(VAR10)) {
FUN9(VAR4,
"",
FUN7(VAR10));
return FUN7(VAR10);
}

VAR8->VAR29 = VAR10;

FUN10(&VAR8->VAR30, VAR2->VAR4->VAR31);

return FUN11(VAR2, VAR8);
}