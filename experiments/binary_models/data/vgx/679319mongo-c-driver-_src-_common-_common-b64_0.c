FUN1 (uint8_t const *VAR1,
size_t VAR2,
char *VAR3,
size_t VAR4)
{
size_t VAR5 = 0;
uint8_t VAR6[3];
uint8_t VAR7[4];
size_t VAR8;

if (!VAR3) {
return -1;
}

while (2 < VAR2) {
VAR6[0] = *VAR1++;
VAR6[1] = *VAR1++;
VAR6[2] = *VAR1++;
VAR2 -= 3;

VAR7[0] = VAR6[0] >> 2;
VAR7[1] = ((VAR6[0] & 0x03) << 4) + (VAR6[1] >> 4);
VAR7[2] = ((VAR6[1] & 0x0f) << 2) + (VAR6[2] >> 6);
VAR7[3] = VAR6[2] & 0x3f;
FUN2 (VAR7[0] < 64);
FUN2 (VAR7[1] < 64);
FUN2 (VAR7[2] < 64);
FUN2 (VAR7[3] < 64);

if (VAR5 + 4 > VAR4) {
return -1;
}
VAR3[VAR5++] = VAR9[VAR7[0]];
VAR3[VAR5++] = VAR9[VAR7[1]];
VAR3[VAR5++] = VAR9[VAR7[2]];
VAR3[VAR5++] = VAR9[VAR7[3]];
}


if (0 != VAR2) {

VAR6[0] = VAR6[1] = VAR6[2] = '';

for (VAR8 = 0; VAR8 < VAR2; VAR8++) {
VAR6[VAR8] = *VAR1++;
}
VAR7[0] = VAR6[0] >> 2;
VAR7[1] = ((VAR6[0] & 0x03) << 4) + (VAR6[1] >> 4);
VAR7[2] = ((VAR6[1] & 0x0f) << 2) + (VAR6[2] >> 6);
FUN2 (VAR7[0] < 64);
FUN2 (VAR7[1] < 64);
FUN2 (VAR7[2] < 64);

if (VAR5 + 4 > VAR4) {
return -1;
}
VAR3[VAR5++] = VAR9[VAR7[0]];
VAR3[VAR5++] = VAR9[VAR7[1]];

if (VAR2 == 1) {
VAR3[VAR5++] = VAR10;
} else {
VAR3[VAR5++] = VAR9[VAR7[2]];
}
VAR3[VAR5++] = VAR10;
}

if (VAR5 >= VAR4) {
return -1;
}
VAR3[VAR5] = ''; 
return (int) VAR5;
}