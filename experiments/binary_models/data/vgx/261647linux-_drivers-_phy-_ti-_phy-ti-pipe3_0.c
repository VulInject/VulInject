static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;
struct VAR4 *VAR5 = VAR2->VAR5;

VAR2->VAR6 = FUN2(VAR5, "");
if (FUN3(VAR2->VAR6)) {
FUN4(VAR5, "");

if (VAR2->VAR7 != VAR8)
return FUN5(VAR2->VAR6);
}

if (VAR2->VAR7 != VAR8) {
VAR2->VAR9 = FUN2(VAR5, "");
if (FUN3(VAR2->VAR9)) {
FUN4(VAR5, "");
return FUN5(VAR2->VAR9);
}
} else {
VAR2->VAR9 = FUN6(-VAR10);
}

if (VAR2->VAR7 != VAR11 || VAR2->VAR12) {
VAR2->VAR13 = FUN2(VAR5, "");
if (FUN3(VAR2->VAR13)) {
FUN4(VAR5, "");
return -VAR14;
}
}

if (VAR2->VAR7 == VAR11) {
VAR3 = FUN2(VAR5, "");
if (FUN3(VAR3)) {
FUN4(VAR5, "");
return FUN5(VAR3);
}
FUN7(VAR3, 1500000000);

VAR3 = FUN2(VAR5, "");
if (FUN3(VAR3)) {
FUN4(VAR5, "");
return FUN5(VAR3);
}
FUN7(VAR3, 100000000);

VAR3 = FUN2(VAR5, "");
if (FUN3(VAR3)) {
FUN4(VAR5, "");
return FUN5(VAR3);
}
FUN7(VAR3, 100000000);

VAR2->VAR15 = FUN2(VAR5, "");
if (FUN3(VAR2->VAR15)) {
FUN4(VAR5, "");
return FUN5(VAR2->VAR15);
}
} else {
VAR2->VAR15 = FUN6(-VAR10);
}

return 0;
}