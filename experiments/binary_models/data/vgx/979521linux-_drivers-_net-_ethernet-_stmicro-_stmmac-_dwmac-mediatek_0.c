static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
u32 VAR5, VAR6;
int VAR7;

VAR2->VAR8 = FUN2(VAR2->VAR9, "");
if (FUN3(VAR2->VAR8)) {
FUN4(VAR2->VAR10, "");
return FUN5(VAR2->VAR8);
}

VAR7 = FUN6(VAR2->VAR9, &VAR2->VAR11);
if (VAR7) {
FUN4(VAR2->VAR10, "");
return VAR7;
}

if (!FUN7(VAR2->VAR9, "", &VAR5)) {
if (VAR5 < VAR2->VAR12->VAR13) {
VAR4->VAR14 = VAR5;
} else {
FUN4(VAR2->VAR10, "", VAR5);
return -VAR15;
}
}

if (!FUN7(VAR2->VAR9, "", &VAR6)) {
if (VAR6 < VAR2->VAR12->VAR16) {
VAR4->VAR17 = VAR6;
} else {
FUN4(VAR2->VAR10, "", VAR6);
return -VAR15;
}
}

VAR4->VAR18 = FUN8(VAR2->VAR9, "");
VAR4->VAR19 = FUN8(VAR2->VAR9, "");
VAR2->VAR20 = FUN8(VAR2->VAR9, "");
VAR2->VAR21 = FUN8(VAR2->VAR9, "");
VAR2->VAR22 = FUN8(VAR2->VAR9, "");

return 0;
}