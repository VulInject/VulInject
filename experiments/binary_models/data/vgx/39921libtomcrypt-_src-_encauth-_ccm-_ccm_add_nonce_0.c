int FUN1(VAR1 *VAR2,
const unsigned char *VAR3,     unsigned long VAR4)
{
unsigned long VAR5, VAR6, VAR7;
int           VAR8;

FUN2(VAR2   != NULL);
FUN2(VAR3 != NULL);


VAR2->VAR4 = (VAR4 > 13) ? 13 : VAR4;
if ((15 - VAR2->VAR4) > VAR2->VAR9) {
VAR2->VAR9 = 15 - VAR2->VAR4;
}
if (VAR2->VAR9 > 8) {
return VAR10;
}


if ((VAR2->VAR4 + VAR2->VAR9) > 15) {
VAR2->VAR4 = 15 - VAR2->VAR9;
}


VAR5 = 0;
VAR2->VAR11[VAR5++] = (unsigned char)(((VAR2->VAR12 > 0) ? (1<<6) : 0) |
(((VAR2->VAR13 - 2)>>1)<<3)        |
(VAR2->VAR9-1));


for (VAR6 = 0; VAR6 < 15 - VAR2->VAR9; VAR6++) {
VAR2->VAR11[VAR5++] = VAR3[VAR6];
}


VAR7 = VAR2->VAR14;


for (VAR6 = VAR2->VAR9; VAR6 < 4; VAR6++) {
VAR7 <<= 8;
}


for (VAR6 = 0; VAR2->VAR9 > 4 && (VAR2->VAR9-VAR6)>4; VAR6++) {
VAR2->VAR11[VAR5++] = 0;
}
for (; VAR6 < VAR2->VAR9; VAR6++) {
VAR2->VAR11[VAR5++] = (unsigned char)((VAR7 >> 24) & 255);
VAR7 <<= 8;
}


if ((VAR8 = VAR15[VAR2->VAR16].FUN3(VAR2->VAR11, VAR2->VAR11, &VAR2->VAR17)) != VAR18) {
return VAR8;
}


VAR2->VAR5 = 0;
if (VAR2->VAR12 > 0) {

if (VAR2->VAR12 < ((1UL<<16) - (1UL<<8))) {
VAR2->VAR11[VAR2->VAR5++] ^= (VAR2->VAR12>>8) & 255;
VAR2->VAR11[VAR2->VAR5++] ^= VAR2->VAR12 & 255;
} else {
VAR2->VAR11[VAR2->VAR5++] ^= 0xFF;
VAR2->VAR11[VAR2->VAR5++] ^= 0xFE;
VAR2->VAR11[VAR2->VAR5++] ^= (VAR2->VAR12>>24) & 255;
VAR2->VAR11[VAR2->VAR5++] ^= (VAR2->VAR12>>16) & 255;
VAR2->VAR11[VAR2->VAR5++] ^= (VAR2->VAR12>>8) & 255;
VAR2->VAR11[VAR2->VAR5++] ^= VAR2->VAR12 & 255;
}
}


VAR5 = 0;


VAR2->VAR19[VAR5++] = (unsigned char)VAR2->VAR9-1;


for (VAR6 = 0; VAR6 < (16 - (VAR2->VAR9+1)); ++VAR6) {
VAR2->VAR19[VAR5++] = VAR3[VAR6];
}

while (VAR5 < 16) {
VAR2->VAR19[VAR5++] = 0;
}

VAR2->VAR20 = 16;
return VAR18;
}