static VAR1 FUN1(unsigned char **VAR2, VAR1 *VAR3, VAR4 *VAR5, size_t VAR6, unsigned int *VAR7)
{
unsigned char *VAR8 = *VAR2, *VAR9 = VAR8 + *VAR3;
VAR4 *VAR10 = VAR5, *VAR11 = VAR5 + VAR6 - 1;

while (VAR8 < VAR9 && VAR10 < VAR11) {
unsigned char VAR12 = *VAR8++;

if (VAR12 == 0x1B) {
if ((VAR9 - VAR8) < 2) {
VAR8 = VAR9;
*VAR10++ = VAR13;
break;
}
unsigned char VAR14 = *VAR8++;
unsigned char VAR15 = *VAR8++;

if (VAR14 == '') {
if (VAR15 == '' || VAR15 == '') {
*VAR7 = VAR16;
} else if (VAR15 == '') {
if (VAR8 == VAR9) {
*VAR10++ = VAR13;
break;
}
unsigned char VAR17 = *VAR8++;

if (VAR17 == '' || VAR17 == '') {
*VAR7 = VAR16;
} else {
*VAR10++ = VAR13;
}
} else {
*VAR10++ = VAR13;
}
} else if (VAR14 == '') {
if (VAR15 == '' || VAR15 == '') {
*VAR7 = VAR18;
} else if (VAR15 == '') {
*VAR7 = VAR19;
} else {
*VAR10++ = VAR13;
}
} else {
VAR8--;
*VAR10++ = VAR13;
}
} else if (*VAR7 == VAR19 && VAR12 >= 0x21 && VAR12 <= 0x5F) {
*VAR10++ = 0xFF40 + VAR12;
} else if (*VAR7 == VAR16 && VAR12 >= 0x21 && VAR12 <= 0x7F) {
if (VAR8 == VAR9) {
*VAR10++ = VAR13;
break;
}
unsigned char VAR14 = *VAR8++;

if (VAR14 >= 0x21 && VAR14 <= 0x7E) {
unsigned int VAR20 = ((VAR12 - 0x21) * 94) + VAR14 - 0x21;
uint32_t VAR21 = 0;

if (VAR20 <= 137) {
if (VAR20 == 31) {
VAR21 = 0xFF3C; 
} else if (VAR20 == 32) {
VAR21 = 0xFF5E; 
} else if (VAR20 == 33) {
VAR21 = 0x2225; 
} else if (VAR20 == 60) {
VAR21 = 0xFF0D; 
} else if (VAR20 == 80) {
VAR21 = 0xFFE0; 
} else if (VAR20 == 81) {
VAR21 = 0xFFE1; 
} else if (VAR20 == 137) {
VAR21 = 0xFFE2; 
}
}

if (VAR20 >= (84 * 94) && VAR20 < (91 * 94)) {
int VAR22 = 0;
VAR20 += 22 * 94;
VAR21 = FUN2(VAR20, &VAR22);
if (VAR21 && VAR22) {
*VAR10++ = VAR22;
}
}

if (!VAR21) {
if (VAR20 >= VAR23 && VAR20 < VAR24) {
VAR21 = VAR25[VAR20 - VAR23];
} else if (VAR20 < VAR26) {
VAR21 = VAR27[VAR20];
}
}

*VAR10++ = VAR21 ? VAR21 : VAR13;
} else {
*VAR10++ = VAR13;
}
} else if (VAR12 <= 0x7F) {
*VAR10++ = VAR12;
} else if (VAR12 >= 0xA1 && VAR12 <= 0xDF) {
*VAR10++ = 0xFEC0 + VAR12;
} else {
*VAR10++ = VAR13;
}
}

*VAR3 = VAR9 - VAR8;
*VAR2 = VAR8;
return VAR10 - VAR5;
}