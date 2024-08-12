VAR1 FUN1(char* VAR2, size_t VAR3, const unsigned short** VAR4)
{

size_t VAR5;
const unsigned short * VAR6 = *VAR4;

if (VAR2 != NULL) {
char* VAR7 = VAR2;
for (;; VAR6++) {
unsigned char VAR8;
unsigned short VAR9 = *VAR6;
if (VAR9 < 0x80) {
if (VAR9 == (wchar_t)'') {
if (VAR3 == 0) {
*VAR4 = VAR6;
break;
}
*VAR7 = '';
*VAR4 = NULL;
break;
}
VAR5 = 0;
VAR8 = (unsigned char) VAR9;
} else if (VAR9 < 0x800) {
VAR5 = 1;
VAR8 = (unsigned char) ((VAR9 >> 6) | 0xC0);
} else {
VAR5 = 2;
VAR8 = (unsigned char) ((VAR9 >> 12) | 0xE0);
}
if (VAR3 <= VAR5) {
*VAR4 = VAR6;
break;
}
VAR3 -= VAR5+1;
*VAR7++ = VAR8;
if (VAR5 > 0)
do {
*VAR7++ = (unsigned char)(((VAR9 >> (6 * --VAR5)) & 0x3F) | 0x80);
} while (VAR5 > 0);
}
return (VAR1) (VAR7 - VAR2);
} else {

size_t VAR10 = 0;
for (;; VAR6++) {
unsigned short VAR9 = *VAR6;
size_t VAR5;
if (VAR9 < 0x80) {
if (VAR9 == (wchar_t)'') {
*VAR4 = NULL;
break;
}
VAR5 = 1;
} else if (VAR9 < 0x800) {
VAR5 = 2;
} else {
VAR5 = 3;
}
VAR10 += VAR5;
}
return (VAR1) VAR10;
}
}


typedef struct
{
u32 VAR5 : 16;   
u32 VAR11 : 16;   

} VAR12;