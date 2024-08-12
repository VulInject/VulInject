static VAR1
FUN1(VAR2 *VAR3, mrb_value VAR4)
{
mrb_value VAR5, VAR6;
const char *VAR7, *VAR8;

FUN2(VAR3, "", &VAR5, &VAR6);
VAR7 = FUN3(VAR3, &VAR5);

if (FUN4(VAR6)) {
if (FUN5(VAR7) != 0) {
FUN6(VAR3, VAR9, "");
}
} else {
FUN7(VAR3, VAR6, VAR10, "", "");
VAR8 = FUN3(VAR3, &VAR6);
if (setenv(VAR7, VAR8, 1) != 0) {
FUN6(VAR3, VAR9, "");
}
}
return VAR6;
}