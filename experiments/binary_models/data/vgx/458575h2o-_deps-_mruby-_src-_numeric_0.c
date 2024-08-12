VAR1
FUN1(VAR2 *VAR3, mrb_value VAR4, mrb_value VAR5)
{
mrb_int VAR6;

VAR6 = FUN2(VAR4);
if (FUN3(VAR5)) {
mrb_int VAR7, VAR8;

if (VAR6 == 0) return VAR5;
VAR7 = FUN2(VAR5);
if (FUN4(VAR6, VAR7, &VAR8)) {
VAR4 = FUN5(VAR3, VAR6);
return FUN6(VAR3, VAR4, VAR5);
FUN7(VAR3, "");
}
return FUN8(VAR3, VAR8);
}
switch (FUN9(VAR5)) {
case VAR9:
return FUN6(VAR3, VAR5, VAR4);
case VAR10:
return FUN10(VAR3, VAR5, VAR4);
case VAR11:
return FUN11(VAR3, VAR5, VAR4);
default:
FUN12(VAR3, VAR12, "");
return FUN13(VAR3, (VAR13)VAR6 + FUN14(VAR3, VAR5));
}
}