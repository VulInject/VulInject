void FUN1(VAR1 *VAR2, VAR1 **VAR3, const char *VAR4)

{
const VAR5 *VAR6, *VAR7;
const char *VAR8;

if (VAR3) {
*VAR3 = FUN2();
}
VAR6 = FUN3(VAR2);

while (VAR6 != NULL) {
VAR7 = FUN4(VAR2, VAR6);
if (FUN5(VAR6->VAR9, VAR4, &VAR8)) {
if (VAR3) {
FUN6(*VAR3, VAR8, FUN7(VAR6->VAR10));
}
FUN8(VAR2, VAR6->VAR9);
}
VAR6 = VAR7;
}
}