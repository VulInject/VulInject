static void FUN1(int *VAR1, int *VAR2, int VAR3,
VAR4 *VAR5, int VAR6)
{
if (VAR6 == 0 || VAR6 == 2) {
if (VAR3 < 376) {
*VAR1  = (VAR3 + 137) >> 2;
*VAR2 = VAR3 - (*VAR1 << 2) + 136;
} else if (VAR3 < 440) {
*VAR1  = (VAR3 + 257 - 376) >> 1;
*VAR2 = (VAR3 - (*VAR1 << 1) + 256 - 376) << 1;

} else {
*VAR1  = VAR3 - 280;
*VAR2 = 0;
}

*VAR5 = FUN2(*VAR1 - 8 - (*VAR2 < 0),
VAR7, VAR8 - 15);



} else {
*VAR1  = (VAR3 + 1) >> 2;
*VAR2 = VAR3 - (*VAR1 << 2);
*VAR1 += *VAR5;
}
}