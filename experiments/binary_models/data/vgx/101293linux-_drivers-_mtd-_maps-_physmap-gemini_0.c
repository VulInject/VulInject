int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8;
struct VAR9 *VAR10 = &VAR2->VAR10;
u32 VAR11;
int VAR12;


if (!FUN2(VAR4, ""))
return 0;

VAR13 = FUN3(VAR10, sizeof(*VAR13), VAR14);
if (!VAR13)
return -VAR15;
VAR13->VAR10 = VAR10;

VAR8 = FUN4(VAR4, "");
if (FUN5(VAR8)) {
FUN6(VAR10, "");
return FUN7(VAR8);
}

VAR12 = FUN8(VAR8, VAR16, &VAR11);
if (VAR12) {
FUN6(VAR10, "");
return -VAR17;
}
FUN9(VAR10, "", VAR11);


if ((VAR11 & VAR18) != VAR19) {
FUN6(VAR10, "");
return -VAR17;
}


if (VAR11 & VAR20) {
if (VAR6->VAR21 != 2)
FUN10(VAR10, "",
VAR6->VAR21 * 8);
} else {
if (VAR6->VAR21 != 1)
FUN10(VAR10, "",
VAR6->VAR21 * 8);
}

VAR13->VAR22 = FUN11(VAR10);
if (FUN5(VAR13->VAR22)) {
FUN6(VAR10, "");
VAR12 = FUN7(VAR13->VAR22);
return VAR12;
}

VAR13->VAR23 = FUN12(VAR13->VAR22, "");
if (FUN5(VAR13->VAR23))
FUN6(VAR10, "");

VAR13->VAR24 = FUN12(VAR13->VAR22, "");
if (FUN5(VAR13->VAR23)) {
FUN6(VAR10, "");
} else {
VAR12 = FUN13(VAR13->VAR22, VAR13->VAR24);
if (VAR12)
FUN6(VAR13->VAR10, "");
}

VAR6->read = VAR25;
VAR6->write = VAR26;
VAR6->VAR27 = VAR28;
VAR6->VAR29 = VAR30;

FUN14(VAR10, "");

return 0;
}