static long FUN1(double VAR1, VAR2 * VAR3, long VAR4, int VAR5)
{
long VAR6 = 0;
double VAR7;
VAR7 = FUN2(VAR1 + 0.5);
if (VAR5 == VAR8) {
long VAR9;
VAR9 = (long) VAR1;
if (VAR4 < 5)
FUN3("","");
VAR3[0] = 29;
VAR3[1] = (VAR2) ((VAR9 >> 24) & 0xff);
VAR3[2] = (VAR2) ((VAR9 >> 16) & 0xff);
VAR3[3] = (VAR2) ((VAR9 >> 8) & 0xff);
VAR3[4] = (VAR2) (VAR9 & 0xff);
VAR6 = 5;
} else if (VAR1 > VAR10 || VAR1 < VAR11 || (FUN4(VAR1 - VAR7) > 1.0e-5)) {

VAR6 = FUN5(VAR3, VAR4, VAR1);
} else {

VAR6 = FUN6(VAR3, VAR4, (long) VAR7);
}
return VAR6;
}