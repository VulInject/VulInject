FUN1 (char **VAR1, char *VAR2, const char *VAR3)
{
char       *VAR4;
const char *VAR5;
int         VAR6, VAR7;

VAR5      = VAR3;
VAR7 = VAR3 ? strlen(VAR3) : 0;
VAR4      = *VAR1;

*VAR4++ = '';
for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
unsigned char VAR8;

VAR8 = VAR5[VAR6];
if (VAR8 < 32 || VAR8 > 126) {
VAR4 += sprintf(VAR4, "", VAR8);
} else {
switch (VAR8) {
case '': case '': case '':
*VAR4++ = '';
*VAR4++ = VAR8;
break;
default:
*VAR4++ = VAR8;
break;
}
}
}
*VAR4++ = '';

*VAR1 = VAR4;
}