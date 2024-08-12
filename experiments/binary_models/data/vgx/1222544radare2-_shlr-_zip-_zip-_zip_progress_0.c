int
FUN1(VAR1 *VAR2, double VAR3) {
double VAR4;

if (VAR2 == NULL) {
return 0;
}

if (VAR2->VAR5 != NULL) {
VAR4 = FUN2(FUN3(VAR3, 0.0), 1.0) * (VAR2->VAR6 - VAR2->VAR7) + VAR2->VAR7;

if (VAR4 - VAR2->VAR8 > VAR2->VAR9) {
VAR2->FUN4(VAR2->VAR10, VAR4, VAR2->VAR11);
VAR2->VAR8 = VAR4;
}
}

if (VAR2->VAR12 != NULL) {
if (VAR2->FUN5(VAR2->VAR10, VAR2->VAR13)) {
return -1;
}
}

return 0;
}