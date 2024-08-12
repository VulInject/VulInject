static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = VAR4->VAR7;
int VAR8;

VAR2->VAR9 = FUN2(VAR6, "");
if (FUN3(VAR2->VAR9)) {
FUN4(VAR4, "");
return FUN5(VAR2->VAR9);
}

VAR2->VAR10 = FUN6(VAR4, "");
if (FUN5(VAR2->VAR10) == -VAR11) {
VAR2->VAR10 = NULL;
} else if (FUN5(VAR2->VAR10) == -VAR12) {
return -VAR12;
} else if (FUN3(VAR2->VAR10)) {
FUN4(VAR4, "");
return FUN5(VAR2->VAR10);
}

VAR2->VAR13 = FUN6(VAR4, "");
if (FUN3(VAR2->VAR13)) {
FUN4(VAR4, "");
return FUN5(VAR2->VAR13);
}

VAR2->VAR14 = FUN7(VAR4, "");
if (FUN3(VAR2->VAR14)) {
FUN4(VAR4, "");
return FUN5(VAR2->VAR14);
}

VAR8 = FUN8(VAR2->VAR13);
if (VAR8 < 0) {
FUN4(VAR2->VAR4, "", VAR8);
return VAR8;
}

VAR8 = FUN9(VAR2);
if (VAR8 < 0) {
FUN4(VAR2->VAR4, "", VAR8);
FUN10(VAR2->VAR13);
return VAR8;
}

return 0;
}