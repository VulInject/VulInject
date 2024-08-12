static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR2->VAR6;
struct VAR7 *VAR8;
int VAR9;

VAR8 = FUN3(VAR6, sizeof(*VAR8), VAR10);
if (!VAR8)
return -VAR11;

FUN4(VAR2, VAR8);

VAR8->VAR12 = (const struct VAR13 *)VAR4->VAR14;
if (!VAR8->VAR12)
return -VAR15;

VAR8->VAR16 = FUN5(VAR6, "");
if (FUN6(VAR8->VAR16)) {
FUN7(VAR6, "");
return FUN8(VAR8->VAR16);
}

VAR8->VAR17 = FUN9(VAR6, "", VAR18);
if (FUN6(VAR8->VAR17)) {
FUN7(VAR6, "");
return FUN8(VAR8->VAR17);
}

VAR2->VAR19 = 8;
VAR2->VAR20 = VAR21 | VAR22;
VAR9 = FUN10(VAR2);
if (VAR9) {
FUN7(VAR6, "");
return VAR9;
}

VAR8->VAR23 = FUN11(VAR2, &VAR24);
if (FUN6(VAR8->VAR23)) {
FUN7(VAR6, "");
return FUN8(VAR8->VAR23);
}

FUN12(&VAR8->VAR25, VAR6, &VAR26,
VAR27);

VAR9 = FUN13(&VAR8->VAR25);
if (VAR9) {
if (VAR9 != -VAR28)
FUN7(VAR6, "");
return VAR9;
}

FUN14(&VAR8->VAR25);

return 0;
}