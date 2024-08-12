static double FUN1 (int VAR1, double VAR2)
{

const double VAR3 = 1.0E-12;
double VAR4;
double VAR5 = 0.0;
double VAR6;
double VAR7;
double VAR8;
double VAR9;
int VAR10;
int VAR11;
int VAR12 = (int) (VAR1 * (1.0 - VAR2));

if (VAR1 > 200000)
return FUN2 (VAR1, VAR2);


if ((1.0 - VAR2 - (double) VAR12 / VAR1) <= 0.0)
VAR12--;

if (VAR1 > 3000)
VAR11 = 2;
else
VAR11 = 3;

VAR10 = VAR12 / VAR11 + 1;
VAR8 = FUN3 (VAR1) - FUN3 (VAR10) -
FUN3 (VAR1 - VAR10);
VAR9 = VAR8;

while (VAR10 <= VAR12) {
VAR4 = (double) VAR10 / VAR1 + VAR2;
VAR6 = VAR8 + (VAR10 - 1) * FUN4 (VAR4) + (VAR1 - VAR10) * FUN5 (-VAR4);
VAR7 = FUN6 (VAR6);
VAR5 += VAR7;
VAR8 += FUN4 ((double) (VAR1 - VAR10) / (VAR10 + 1));
if (VAR7 <= VAR5 * VAR3)
break;
VAR10++;
}

VAR10 = VAR12 / VAR11;
VAR8 = VAR9 + FUN4 ((double) (VAR10 + 1) / (VAR1 - VAR10));

while (VAR10 > 0) {
VAR4 = (double) VAR10 / VAR1 + VAR2;
VAR6 = VAR8 + (VAR10 - 1) * FUN4 (VAR4) + (VAR1 - VAR10) * FUN5 (-VAR4);
VAR7 = FUN6 (VAR6);
VAR5 += VAR7;
VAR8 += FUN4 ((double) VAR10 / (VAR1 - VAR10 + 1));
if (VAR7 <= VAR5 * VAR3)
break;
VAR10--;
}

VAR5 *= VAR2;

VAR5 += FUN6 (VAR1 * FUN5 (-VAR2));
return VAR5;
}