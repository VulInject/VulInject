static VAR1 FUN1(gpointer VAR2, gint VAR3, b_input_condition VAR4)
{
struct VAR5 *VAR6 = VAR2;
struct VAR7 *VAR8 = VAR6->VAR9;
char VAR10[512];
int VAR11;

if (VAR8->VAR3 == -1) {
return VAR12;
}

if (VAR8->VAR13) {
VAR11 = FUN2(VAR8->VAR13, VAR10, sizeof(VAR10));
} else {
VAR11 = read(VAR8->VAR3, VAR10, sizeof(VAR10));
}

if (VAR11 > 0) {
if (!FUN3(VAR6, VAR10, VAR11)) {
return VAR12;
}
} else if (VAR11 == 0 || (VAR11 < 0 && !FUN4(VAR8->VAR13))) {
FUN5(VAR8->VAR3);
VAR8->VAR3 = -1;

FUN6(VAR6, "");
FUN7(VAR6, VAR14);
return VAR12;
}

if (FUN8(VAR8->VAR13)) {

return FUN1(VAR2, VAR3, VAR4);
} else {
return VAR14;
}
}