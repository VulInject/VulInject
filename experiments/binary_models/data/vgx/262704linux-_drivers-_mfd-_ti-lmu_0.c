static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR2->VAR6;
const struct VAR7 *VAR8;
struct regmap_config VAR9;
struct VAR10 *VAR11;
int VAR12;


VAR8 = FUN3(VAR6);
if (!VAR8)
return -VAR13;

VAR11 = FUN4(VAR6, sizeof(*VAR11), VAR14);
if (!VAR11)
return -VAR15;

VAR11->VAR6 = &VAR2->VAR6;


memset(&VAR9, 0, sizeof(struct VAR16));
VAR9.VAR17 = 8;
VAR9.VAR18 = 8;
VAR9.VAR19 = VAR4->VAR19;
VAR9.VAR20 = VAR8->VAR20;

VAR11->VAR21 = FUN5(VAR2, &VAR9);
if (FUN6(VAR11->VAR21))
return FUN7(VAR11->VAR21);


VAR11->VAR22 = FUN8(VAR6, "", VAR23);
if (FUN6(VAR11->VAR22)) {
VAR12 = FUN7(VAR11->VAR22);
FUN9(VAR6, "", VAR12);
return VAR12;
}

VAR12 = FUN10(VAR11, VAR4->VAR24);
if (VAR12)
return VAR12;

VAR12 = FUN11(VAR6, VAR25, VAR11);
if (VAR12)
return VAR12;


FUN12(&VAR11->VAR26);

FUN13(VAR2, VAR11);

return FUN14(VAR11->VAR6, 0, VAR8->VAR27,
VAR8->VAR28, NULL, 0, NULL);
}