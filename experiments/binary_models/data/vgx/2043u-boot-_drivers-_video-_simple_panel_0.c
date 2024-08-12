static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

if (FUN3(VAR6)) {
VAR5 = FUN4(VAR7, VAR2,
"", &VAR4->VAR8);
if (VAR5) {
FUN5("",
VAR9, VAR5);
if (VAR5 != -VAR10)
return VAR5;
}
}

VAR5 = FUN4(VAR11, VAR2,
"", &VAR4->VAR12);
if (VAR5) {
FUN5("", VAR9, VAR5);
if (VAR5 != -VAR10)
return FUN6(VAR5);
}

VAR5 = FUN7(VAR2, "", 0, &VAR4->VAR13,
VAR14);
if (VAR5) {
FUN5("",
VAR9, VAR5);
if (VAR5 != -VAR10)
return FUN6(VAR5);
}

return 0;
}