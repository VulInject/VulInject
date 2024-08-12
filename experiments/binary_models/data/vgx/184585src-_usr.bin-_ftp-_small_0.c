char *
FUN1(char *VAR1)
{
static char new[VAR2];
char *VAR3 = VAR1, *VAR4 = VAR5;
char *VAR6[9], *VAR7[9];
int VAR8, VAR9[9], VAR10 = 0, VAR11 = 1;

for (VAR8=0; VAR8 < 9; ++VAR8) {
VAR9[VAR8] = 0;
}
while (VAR11 && *VAR3 && *VAR4) {
switch (*VAR4) {
case '':
if (*++VAR4 != *VAR3) {
VAR11 = 0;
}
break;
case '':
if (*(VAR4+1) >= '' && (*VAR4+1) <= '') {
if (*VAR3 != *(++VAR4+1)) {
VAR9[VAR10 = *VAR4 - '']++;
VAR6[VAR10] = VAR3;
while (*++VAR3 && *(VAR4+1)
!= *VAR3);
VAR7[VAR10] = VAR3;
}
VAR4++;
break;
}

default:
if (*VAR4 != *VAR3) {
VAR11 = 0;
}
break;
}
if (VAR11 && *VAR3) {
VAR3++;
}
if (VAR11 && *VAR4) {
VAR4++;
}
}
if (!VAR11 && *VAR3) 
{
VAR9[VAR10] = 0;
}
VAR3 = new;
*VAR3 = '';
VAR4 = VAR12;
while (*VAR4) {
VAR11 = 0;
switch (*VAR4) {
case '':
if (*(VAR4 + 1)) {
*VAR3++ = *++VAR4;
}
break;
case '':
VAR13:
if (*++VAR4 == '' && FUN2((unsigned char)*(VAR4 + 1))) {
if (*++VAR4 == '') {
char *VAR14 = VAR1;

while (*VAR14) {
*VAR3++ = *VAR14++;
}
VAR11 = 1;
} else if (VAR9[VAR10 = *VAR4 - '']) {
char *VAR14 = VAR6[VAR10];

while (VAR14 != VAR7[VAR10]) {
*VAR3++ = *VAR14++;
}
VAR11 = 1;
}
} else {
while (*VAR4 && *VAR4 != '' &&
*VAR4 != '') {
if (*VAR4 == '') {
VAR4++;
} else if (*VAR4 == '' &&
FUN2((unsigned char)*(VAR4 + 1))) {
if (*++VAR4 == '') {
char *VAR14 = VAR1;

while (*VAR14) {
*VAR3++ = *VAR14++;
}
} else if (VAR9[VAR10 =
*VAR4 - '']) {
char *VAR14=VAR6[VAR10];

while (VAR14 !=
VAR7[VAR10]) {
*VAR3++ = *VAR14++;
}
}
} else if (*VAR4) {
*VAR3++ = *VAR4++;
}
}
if (!*VAR4) {
fputs(
"", VAR15);
return (VAR1);
}
VAR11 = 1;
VAR4--;
}
if (VAR11) {
while (*++VAR4 && *VAR4 != '') {
if (*VAR4 == '' && *(VAR4 + 1)) {
VAR4++;
}
}
if (!*VAR4) {
fputs(
"", VAR15);
return (VAR1);
}
break;
}
switch (*++VAR4) {
case '':
goto VAR13;
case '':
break;
default:
VAR4--;
goto VAR13;
}
break;
case '':
if (FUN2((unsigned char)*(VAR4 + 1))) {
if (*++VAR4 == '') {
char *VAR14 = VAR1;

while (*VAR14) {
*VAR3++ = *VAR14++;
}
} else if (VAR9[VAR10 = *VAR4 - '']) {
char *VAR14 = VAR6[VAR10];

while (VAR14 != VAR7[VAR10]) {
*VAR3++ = *VAR14++;
}
}
break;
}

default:
*VAR3++ = *VAR4;
break;
}
VAR4++;
}
*VAR3 = '';
if (!*new) {
return (VAR1);
}
return (new);
}