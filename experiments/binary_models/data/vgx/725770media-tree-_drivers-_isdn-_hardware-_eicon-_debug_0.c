static void FUN1(VAR1 *VAR2) {


word VAR3 = ((VAR4 *)VAR2->VAR5)->VAR6 & ~VAR7;

VAR2->VAR5  += FUN2(VAR3);
VAR2->VAR8 -= VAR3;

if (VAR2->VAR9) {
if (VAR2->VAR5 >= VAR2->VAR9) {
VAR2->VAR5 = VAR2->VAR10;
VAR2->VAR9 = NULL;
}
} else if (VAR2->VAR5 >= VAR2->VAR11) {
VAR2->VAR5 = VAR2->VAR11 = VAR2->VAR10;
}
}