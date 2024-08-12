static char *FUN1(const char *VAR1, const char *VAR2,
int VAR3, int VAR4, int VAR5)
{
char VAR6   = (VAR4) ? ''  : ''; 
char VAR7 = (VAR4) ? '' : '';  

size_t VAR8 = VAR2 ? strlen(VAR2) + 1 : 0; 
size_t VAR9 = strlen(VAR1);


char *VAR10 =  malloc(VAR8 + (VAR9 * 4) + 2);

unsigned char *VAR11    = (unsigned char *) &VAR1[0];
unsigned char *VAR12 = (unsigned char *) &VAR1[VAR9];
unsigned char *VAR13    = (unsigned char *) &VAR10[VAR8], VAR14;

if (!VAR10) {
fprintf(VAR15, "");
return NULL;
}


if (VAR2) {
strcpy(VAR10, VAR2);
VAR10[VAR8 - 1] = '';
}


if (VAR5) {

while (VAR11 < VAR12) {

int VAR16;
if ((VAR14 = *VAR11++) < 0x80) {
VAR16 = VAR14;
}
else if (VAR14 >= 0xC2 && VAR14 < 0xE0 && VAR11 <= VAR12 && (VAR11[0] & 0xC0) == 0x80) {
VAR16 = (VAR14 & 0x1F) << 6;
VAR16 |= *VAR11++ & 0x3F;
}
else if (VAR14 >= 0xE0 && VAR14 < 0xF0 && VAR11+1 <= VAR12 && (VAR11[0] & 0xC0) == 0x80 &&
(VAR11[1] & 0xC0) == 0x80)
{
VAR16 = (VAR14 & 0x0F) << 12;
VAR16 |= (*VAR11++ & 0x3F) << 6;
VAR16 |= *VAR11++ & 0x3F;
}
else if (VAR14 >= 0xF0 && VAR14 < 0xF5 && VAR11+2 <= VAR12 && (VAR11[0] & 0xC0) == 0x80 &&
(VAR11[1] & 0xC0) == 0x80 && (VAR11[2] & 0xC0) == 0x80)
{
VAR16 = (VAR14 & 0x07) << 18;
VAR16 |= (*VAR11++ & 0x3F) << 12;
VAR16 |= (*VAR11++ & 0x3F) << 6;
VAR16 |= *VAR11++ & 0x3F;
}
else {
VAR16 = 0xFFFD; 
}

if (VAR16 <= 0 || VAR16 > 0x10FFFF || (VAR16 >= 0xD800 && VAR16 <= 0xDFFF) ||
VAR16 == 0xFFFE || VAR16 == 0xFFFF)
{
VAR16 = 0xFFFD; 
}

if (VAR3) VAR16 = FUN2(VAR16);
if (VAR3 && VAR16 < 256) VAR16 = FUN3(VAR16);


if (VAR16 == VAR6) VAR16 = ''; else if (VAR16 == VAR7) VAR16 = '';


if (VAR16 < 0x80) {
*VAR13++ = (unsigned char) VAR16;
}
else if (VAR16 < 0x800) {
*VAR13++ = 0xC0 | (VAR16 >> 6);
*VAR13++ = 0x80 | (VAR16 & 0x3F);
}
else if (VAR16 < 0x10000) {
*VAR13++ = 0xE0 | (VAR16 >> 12);
*VAR13++ = 0x80 | ((VAR16 >> 6) & 0x3F);
*VAR13++ = 0x80 | (VAR16 & 0x3F);
}
else if (VAR16 <= 0x10FFFF) {
*VAR13++ = 0xF0 | (VAR16 >> 18);
*VAR13++ = 0x80 | ((VAR16 >> 12) & 0x3F);
*VAR13++ = 0x80 | ((VAR16 >> 6) & 0x3F);
*VAR13++ = 0x80 | (VAR16 & 0x3F);
}
else {
*VAR13++ = 0xEF; 
*VAR13++ = 0xBF;
*VAR13++ = 0xBD;
}
}
*VAR13++ = '';
FUN4(&VAR10[VAR8]);
}
else {

while (VAR11 < VAR12) {
VAR14 = *VAR11++;
if (VAR3) VAR14 = (unsigned char) FUN3((int) VAR14);
if (VAR14 == VAR6) VAR14 = ''; else if (VAR14 == VAR7) VAR14 = '';
*VAR13++ = VAR14;
}
*VAR13++ = '';
}


VAR13 = (unsigned char *) &VAR10[VAR8];
for (VAR11 = VAR13; *VAR11 == '' || *VAR11 == ''; VAR11++);
if (VAR11 != VAR13) {
size_t VAR17 = strlen((char *) VAR11);
if (VAR17 > 0) {
memmove(VAR13, VAR11, VAR17 + 1);
}
else {

strcpy((char *) VAR13, "");
}
}


for (; *VAR13; VAR13++) {
if ((VAR13[0] == '') && (VAR13[1] == '') && (VAR13[2] == '' || VAR13[2] == '')) {
VAR13[0] = VAR13[1] = '';
VAR13 += 2;
}
}

return VAR10;
}