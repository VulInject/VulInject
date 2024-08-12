void FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5,
int VAR6, unsigned int VAR7,
unsigned int *VAR8, unsigned int *VAR9, unsigned int *VAR10,
VAR11 *VAR12, int *VAR13)
{
unsigned int VAR14;
VAR11 *VAR15 = FUN2(VAR12, VAR13, VAR6);


unsigned int VAR16  = *VAR8;
unsigned int VAR17   = *VAR9;
unsigned int VAR18 = *VAR10;

VAR15 += VAR7 * VAR19;


for (VAR14 = 0; VAR14 < VAR3; VAR14++) {
unsigned int VAR20  = VAR16 - VAR17 + 1;
unsigned int VAR21 = (((VAR18 - VAR17 + 1) << VAR22) - 1) / VAR20;
unsigned int VAR23 = VAR15[VAR21 >> (VAR22 - VAR24)] << VAR6;

while (VAR25[VAR7][VAR23] > VAR21)
VAR23 += 1 << VAR6;

VAR23 = (VAR23 >> VAR6) - 1;

VAR16 = VAR17 + ((VAR20 * VAR25[VAR7][(VAR23)     << VAR6] - (1 << VAR22)) >> VAR22);
VAR17  = VAR17 + ((VAR20 * VAR25[VAR7][(VAR23 + 1) << VAR6])                    >> VAR22);

while (1) {
if (VAR16 >= VAR26) {
if (VAR17 >= VAR26) {
VAR18 -= VAR26;
VAR17   -= VAR26;
VAR16  -= VAR26;
} else if (VAR17 >= VAR27 && VAR16 < VAR28) {
VAR18 -= VAR27;
VAR17   -= VAR27;
VAR16  -= VAR27;
} else
break;
}

VAR17  *= 2;
VAR16  = 2 * VAR16 + 1;
VAR18 = 2 * VAR18 + FUN3(VAR2);
}

*VAR5++ = VAR23;
}


*VAR8 = VAR16;
*VAR9 = VAR17;
*VAR10 = VAR18;
}