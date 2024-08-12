static void FUN1(int VAR1, int *VAR2, int *VAR3, int *VAR4, int *VAR5)
{
int VAR6 = (1 << VAR1) - 1;

*VAR4 = (-*VAR2) & VAR6;
*VAR2 += *VAR4;
*VAR4 = FUN2(*VAR4, *VAR3);
*VAR3 -= *VAR4;
*VAR5 = *VAR3 & VAR6;
*VAR3 >>= VAR1;
}


static void FUN3(VAR7 *VAR8, unsigned VAR9, unsigned VAR10,
int VAR11, int VAR3, unsigned VAR12, int VAR13, int VAR14)
{
unsigned VAR15 = VAR10 * VAR9;
unsigned VAR16 = 0x1010101 - VAR10;
int VAR2;

if (VAR13) {
unsigned VAR17 = (VAR13 * VAR10) >> VAR12;
*VAR8 = (*VAR8 * (0x1010101 - VAR17) + VAR9 * VAR17) >> 24;
VAR8 += VAR11;
}
for (VAR2 = 0; VAR2 < VAR3; VAR2++) {
*VAR8 = (*VAR8 * VAR16 + VAR15) >> 24;
VAR8 += VAR11;
}
if (VAR14) {
unsigned VAR17 = (VAR14 * VAR10) >> VAR12;
*VAR8 = (*VAR8 * (0x1010101 - VAR17) + VAR9 * VAR17) >> 24;
}
}