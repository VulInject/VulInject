static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int  VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR7->VAR9;
struct VAR10 *VAR11;
int VAR12;

VAR11 = FUN2(VAR9, VAR13);
if (!VAR11) {
FUN3(VAR9->VAR14, "");
return -VAR15;
}

if (FUN4(VAR5)) {
VAR12 = FUN5(VAR11,
VAR16, 24000000, VAR17);
if (VAR12 < 0) {
FUN3(VAR9->VAR14, "", VAR12);
return -VAR15;
}
} else {
VAR12 = FUN5(VAR11,
VAR18, 0, VAR17);
if (VAR12 < 0) {
FUN3(VAR9->VAR14, "", VAR12);
return -VAR15;
}
}

return VAR12;
}