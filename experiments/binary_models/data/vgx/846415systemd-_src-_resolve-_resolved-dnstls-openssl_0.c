static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, size_t VAR5) {
int VAR6, VAR7;
ssize_t VAR8;

FUN2();
VAR8 = VAR7 = FUN3(VAR3->VAR9.VAR10, VAR4, VAR5);
if (VAR7 <= 0) {
VAR6 = FUN4(VAR3->VAR9.VAR10, VAR7);
if (FUN5(VAR6, VAR11, VAR12)) {
VAR3->VAR13 = VAR6 == VAR11 ? VAR14 : VAR15;
VAR8 = -VAR16;
} else if (VAR6 == VAR17) {
VAR3->VAR13 = 0;
VAR8 = 0;
} else {
FUN6("", FUN7(VAR6));
VAR3->VAR13 = 0;
VAR8 = -VAR18;
}
} else
VAR3->VAR13 = 0;

VAR7 = FUN8(VAR3);
if (VAR7 < 0)
return VAR7;

return VAR8;
}