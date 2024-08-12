static int
FUN1(struct VAR1 *VAR2, code_int VAR3)
{
int VAR4;

if (VAR3 >= 0) {
int VAR5;
VAR6 *VAR7;


VAR7 = VAR2->VAR8 + (VAR2->VAR9 >> 3);
VAR5 = VAR2->VAR9 & 7;
VAR4 = VAR2->VAR10;


*VAR7 = (*VAR7 & VAR11[VAR5]) | ((VAR3 << VAR5) & VAR12[VAR5]);
VAR7++;
VAR4 -= (8 - VAR5);
VAR3 >>= 8 - VAR5;

if (VAR4 >= 8) {
*VAR7++ = VAR3;
VAR3 >>= 8;
VAR4 -= 8;
}

if (VAR4)
*VAR7 = VAR3;
VAR2->VAR9 += VAR2->VAR10;
if (VAR2->VAR9 == (VAR2->VAR10 << 3)) {
VAR2->VAR8 += VAR2->VAR10;
VAR2->VAR9 = 0;
}

if (VAR2->VAR13 > VAR2->VAR14 ||
(VAR2->VAR15 > 0)) {

if (VAR2->VAR9 > 0) {
VAR2->VAR8 += VAR2->VAR10;
VAR2->VAR9 = 0;
}

if (VAR2->VAR15) {
VAR2->VAR14 =
FUN2(VAR2->VAR10 = VAR16);
VAR2->VAR15 = 0;
} else {
VAR2->VAR10++;
if (VAR2->VAR10 == VAR2->VAR17)
VAR2->VAR14 = VAR2->VAR18;
else
VAR2->VAR14 =
FUN2(VAR2->VAR10);
}
}

if (VAR2->VAR8 + VAR2->VAR10 > &VAR2->VAR19[VAR20]) {
VAR4 = VAR2->VAR8 - VAR2->VAR19;
if (write(VAR2->VAR21, VAR2->VAR19, VAR4) != VAR4)
return (-1);
VAR2->VAR22 += VAR4;
if (VAR2->VAR9 > 0)
fprintf (VAR23, "");
VAR2->VAR8 = VAR2->VAR19;
}
} else {

if (VAR2->VAR9 > 0)
VAR2->VAR8 += (VAR2->VAR9 + 7) / 8;
if (VAR2->VAR8 > VAR2->VAR19) {
VAR4 = VAR2->VAR8 - VAR2->VAR19;
if (write(VAR2->VAR21, VAR2->VAR19, VAR4) != VAR4)
return (-1);
VAR2->VAR22 += VAR4;
}
VAR2->VAR9 = 0;
VAR2->VAR8 = VAR2->VAR19;
}
return (0);
}