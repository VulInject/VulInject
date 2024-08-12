static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5 = 0;

VAR4->VAR6 = FUN2(VAR2, "");
VAR4->VAR7 = FUN3(VAR2, "");
VAR4->VAR8 = FUN2(VAR2, "");
VAR4->VAR9 = FUN2(VAR2, "");



if (FUN4(VAR4->VAR7)) {
FUN5(VAR2, "");
return FUN6(VAR4->VAR7);
}

if (FUN4(VAR4->VAR6)) {
if (FUN6(VAR4->VAR6) == -VAR10)
return -VAR10;

if (FUN4(VAR4->VAR8)) {
FUN5(VAR2, "");
return FUN6(VAR4->VAR8);
}
if (FUN4(VAR4->VAR9)) {
FUN5(VAR2, "");
return FUN6(VAR4->VAR9);
}
} else {
if (FUN6(VAR4->VAR8) == -VAR10)
return -VAR10;
if (FUN6(VAR4->VAR9) == -VAR10)
return -VAR10;
}

VAR5 = FUN7(VAR4->VAR7);
if (VAR5) {
FUN5(VAR2, "");
return VAR5;
}

if (!FUN4(VAR4->VAR6)) {
VAR5 = FUN7(VAR4->VAR6);
if (VAR5) {
FUN5(VAR2, "");
goto VAR11;
}
}

if (!FUN4(VAR4->VAR8)) {
VAR5 = FUN7(VAR4->VAR8);
if (VAR5) {
FUN5(VAR2, "");
goto VAR12;
}
}

if (!FUN4(VAR4->VAR9)) {
VAR5 = FUN7(VAR4->VAR9);
if (VAR5) {
FUN5(VAR2, "");
goto VAR13;
}
}

if (!FUN4(VAR4->VAR6) && FUN4(VAR4->VAR9))
VAR4->VAR14 |= VAR15;

return 0;

VAR13:
if (!FUN4(VAR4->VAR8))
FUN8(VAR4->VAR8);

VAR12:
if (!FUN4(VAR4->VAR6))
FUN8(VAR4->VAR6);

VAR11:
FUN8(VAR4->VAR7);
return VAR5;
}