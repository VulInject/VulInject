static int FUN1(
VAR1 *VAR2,
const char *VAR3, size_t VAR4,
const char *VAR5, size_t VAR6,
const char *VAR7, size_t VAR8,
const char *VAR9, size_t VAR10)
{
int VAR11;
VAR12 *VAR13 = FUN2(1, sizeof(VAR12));
FUN3(VAR13);

FUN4(VAR2);
FUN4(VAR9 && *VAR9);

if (VAR4 > 0) {
VAR13->VAR3 = FUN5(VAR3, VAR4);
FUN3(VAR13->VAR3);
}
if (VAR6 > 0) {
VAR13->VAR5 = FUN5(VAR5, VAR6);
FUN3(VAR13->VAR5);
}
if (VAR8 > 0) {
VAR13->VAR7 = FUN5(VAR7, VAR8);
FUN3(VAR13->VAR7);
}
VAR13->VAR9 = FUN5(VAR9, VAR10);
FUN3(VAR13->VAR9);

VAR11 = FUN6(&VAR2->VAR14, VAR13, VAR15);
if (VAR11 == VAR16)
VAR11 = VAR17;
else if (VAR11 < 0)
FUN7(VAR13);

return VAR11;
}