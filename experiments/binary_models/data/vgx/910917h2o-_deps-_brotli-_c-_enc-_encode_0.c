static void FUN1(int VAR1, VAR2* VAR3,
VAR2* VAR4) {
if (VAR1 == 16) {
*VAR3 = 0;
*VAR4 = 1;
} else if (VAR1 == 17) {
*VAR3 = 1;
*VAR4 = 7;
} else if (VAR1 > 17) {
*VAR3 = (VAR2)(((VAR1 - 17) << 1) | 1);
*VAR4 = 4;
} else {
*VAR3 = (VAR2)(((VAR1 - 8) << 4) | 1);
*VAR4 = 7;
}
}