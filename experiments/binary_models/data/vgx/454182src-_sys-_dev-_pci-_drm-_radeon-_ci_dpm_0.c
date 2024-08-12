int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR4->VAR7;
struct VAR5 *VAR8 = &VAR4->VAR9;
int VAR10;

FUN3(VAR2, VAR6);
if (VAR4->VAR11)
FUN4(VAR2, VAR6, VAR8);
VAR10 = FUN5(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
VAR10 = FUN7(VAR2, VAR6);
if (VAR10) {
FUN6("");
return VAR10;
}
VAR10 = FUN8(VAR2, VAR6);
if (VAR10) {
FUN6("");
return VAR10;
}

VAR10 = FUN9(VAR2, VAR6, VAR8);
if (VAR10) {
FUN6("");
return VAR10;
}

VAR10 = FUN10(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
if (VAR4->VAR12) {
VAR10 = FUN11(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
}
VAR10 = FUN12(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
VAR10 = FUN13(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
VAR10 = FUN14(VAR2);
if (VAR10) {
FUN6("");
return VAR10;
}
if (VAR4->VAR11)
FUN15(VAR2, VAR6, VAR8);

return 0;
}