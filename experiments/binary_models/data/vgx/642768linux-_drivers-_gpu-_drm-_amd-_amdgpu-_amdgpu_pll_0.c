static void FUN1(unsigned *VAR1, unsigned *VAR2,
unsigned VAR3, unsigned VAR4)
{
unsigned VAR5;


VAR5 = FUN2(*VAR1, *VAR2);
*VAR1 /= VAR5;
*VAR2 /= VAR5;


if (*VAR1 < VAR3) {
VAR5 = FUN3(VAR3, *VAR1);
*VAR1 *= VAR5;
*VAR2 *= VAR5;
}


if (*VAR2 < VAR4) {
VAR5 = FUN3(VAR4, *VAR2);
*VAR1 *= VAR5;
*VAR2 *= VAR5;
}
}