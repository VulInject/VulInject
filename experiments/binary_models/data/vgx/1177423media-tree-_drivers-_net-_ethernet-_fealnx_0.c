static void FUN1(struct VAR1 *VAR2)



{
struct VAR3 *VAR4 = FUN2(VAR2);
unsigned int VAR5, VAR6 = 0x1000;

VAR4->VAR7 = 0;

if (VAR4->VAR8 == VAR9) {
for (VAR5 = 0; VAR5 < VAR6; ++VAR5) {
if (FUN3(VAR4->VAR10 + VAR11) & VAR12) {
VAR4->VAR7 = 1;
return;
}
FUN4(100);
}
} else {
for (VAR5 = 0; VAR5 < VAR6; ++VAR5) {
if (FUN5(VAR2, VAR4->VAR13[0], VAR14) & VAR15) {
VAR4->VAR7 = 1;
return;
}
FUN4(100);
}
}
}