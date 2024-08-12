void FUN1(VAR1 *VAR2, int* VAR3) {
int VAR4;


if (VAR5 == 16384 && VAR6 == 6) {
VAR1 *VAR7 = VAR2;
unsigned long VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17,
VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
for (VAR4 = 0; VAR4 < 1024; VAR4++) {

VAR8 = VAR7[0] & 63;
VAR9 = (VAR7[0] >> 6 | VAR7[1] << 2) & 63;
VAR10 = (VAR7[1] >> 4 | VAR7[2] << 4) & 63;
VAR11 = (VAR7[2] >> 2) & 63;
VAR12 = VAR7[3] & 63;
VAR13 = (VAR7[3] >> 6 | VAR7[4] << 2) & 63;
VAR14 = (VAR7[4] >> 4 | VAR7[5] << 4) & 63;
VAR15 = (VAR7[5] >> 2) & 63;
VAR16 = VAR7[6] & 63;
VAR17 = (VAR7[6] >> 6 | VAR7[7] << 2) & 63;
VAR18 = (VAR7[7] >> 4 | VAR7[8] << 4) & 63;
VAR19 = (VAR7[8] >> 2) & 63;
VAR20 = VAR7[9] & 63;
VAR21 = (VAR7[9] >> 6 | VAR7[10] << 2) & 63;
VAR22 = (VAR7[10] >> 4 | VAR7[11] << 4) & 63;
VAR23 = (VAR7[11] >> 2) & 63;

VAR3[VAR8]++;
VAR3[VAR9]++;
VAR3[VAR10]++;
VAR3[VAR11]++;
VAR3[VAR12]++;
VAR3[VAR13]++;
VAR3[VAR14]++;
VAR3[VAR15]++;
VAR3[VAR16]++;
VAR3[VAR17]++;
VAR3[VAR18]++;
VAR3[VAR19]++;
VAR3[VAR20]++;
VAR3[VAR21]++;
VAR3[VAR22]++;
VAR3[VAR23]++;

VAR7 += 12;
}
} else {
for(VAR4 = 0; VAR4 < VAR5; VAR4++) {
unsigned long VAR24;
FUN2(VAR24,VAR2,VAR4);
VAR3[VAR24]++;
}
}
}