double
FUN1(double VAR1) {
int VAR2, VAR3, VAR4, VAR5, VAR6;

VAR5 = 0;
VAR3 = ((int *) &VAR1)[VAR7]; VAR4 = VAR3 & 0x7fffffff;
VAR6 = ((int *) &VAR1)[VAR8];


if ((VAR3 + 0x100000) < 0x200000) {
if (VAR4 >= 0x7ff80000)		
return (VAR1);		
if (((VAR3 << 1) | VAR6) == 0)	
return (VAR9 / FUN2(VAR1));
if (VAR3 < 0) {	
if (VAR4 >= 0x7ff00000)
return (VAR1 - VAR1);	
else
return (VAR10 / (VAR1 - VAR1));
}
if (((VAR3 - 0x7ff00000) | VAR6) == 0)	
return (VAR1);
if (VAR4 >= 0x7ff00000)		
return (VAR1 - VAR1);
VAR1 *= VAR11;
VAR5 = -52;
VAR3 = ((int *) &VAR1)[VAR7]; VAR4 = VAR3 & 0x7fffffff;
VAR6 = ((int *) &VAR1)[VAR8];
}


VAR2 = VAR4 >> 19;
if (VAR2 >= 0x7f7 && VAR2 <= 0x806) {

if (VAR4 >= 0x3fec0000 && VAR4 < 0x3ff20000) {
double VAR12, VAR13, VAR14, VAR15;
VAR12 = VAR1 - VAR16; VAR13 = VAR12 * VAR12; VAR14 = (VAR17 * VAR12) * (VAR18 + VAR12);
VAR15 = VAR13 * VAR12;
if (((VAR4 << 12) | VAR6) == 0)
return (VAR13);
else
return (VAR19 * VAR12 - (VAR20 * VAR12 - ((VAR21 * VAR13) *
((VAR22 + (VAR23 * VAR12) * (VAR24 + VAR12)) + VAR15 * (VAR9 + VAR12))) *
(((VAR25 + VAR12 * (VAR26 + VAR12)) + VAR15 * (VAR27 + VAR12)) *
((VAR28 + VAR14) + VAR15 * (VAR29 + VAR12)))));
} else {
double *VAR30, VAR12;
VAR2 = (VAR4 - 0x3fb80000) >> 15;
VAR30 = (double *) VAR31 + (VAR2 + VAR2 + VAR2);
if (((VAR4 << 12) | VAR6) == 0)	
return ((double) ((VAR4 >> 20) - 0x3ff));
VAR12 = (VAR1 - VAR30[0]) * VAR30[1];
return (VAR19 * VAR30[2] - (VAR20 * VAR30[2] - ((VAR32 * VAR12) *
(VAR33 + VAR12 * (VAR34 + VAR12))) *
(((VAR35 + VAR12 * VAR36) + (VAR12 * VAR12) * (VAR37 + VAR12)) *
(VAR38 + VAR12 * (VAR39 + VAR12)))));
}
} else {
double *VAR30, VAR40, VAR12;
VAR40 = (double) (VAR5 + ((VAR4 >> 20) - 0x3ff));
VAR4 <<= 12;
if ((VAR4 | VAR6) == 0)
return (VAR40);
VAR2 = ((unsigned) VAR4 >> 12) | 0x3ff00000;	
((int *) &VAR1)[VAR7] = VAR2;
VAR2 = (VAR2 - 0x3fb80000) >> 15;
VAR30 = (double *) VAR31 + (VAR2 + VAR2 + VAR2);
VAR12 = (VAR1 - VAR30[0]) * VAR30[1];
return (VAR40 + (VAR30[2] * VAR41 + ((VAR32 * VAR12) *
(VAR33 + VAR12 * (VAR34 + VAR12))) *
(((VAR35 + VAR12 * VAR36) + (VAR12 * VAR12) * (VAR37 + VAR12)) *
(VAR38 + VAR12 * (VAR39 + VAR12)))));
}
}