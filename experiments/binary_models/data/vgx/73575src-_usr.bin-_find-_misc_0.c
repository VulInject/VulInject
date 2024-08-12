void
FUN1(char *VAR1, char **VAR2, char *VAR3, int VAR4)
{
int VAR5;
char VAR6, *VAR7;

VAR5 = strlen(VAR3);
for (VAR7 = *VAR2; (VAR6 = *VAR1); ++VAR1)
if (VAR6 == '' && VAR1[1] == '') {
while ((VAR7 - *VAR2) + VAR5 > VAR4) {
ptrdiff_t VAR8;
char *VAR9;

VAR8 = (VAR7 - *VAR2);
VAR9 = FUN2(*VAR2, VAR4, 2);
if (VAR9 == NULL)
FUN3(1, NULL);
VAR7 = VAR9 + VAR8;
*VAR2 = VAR9;
VAR4 *= 2;
}
memmove(VAR7, VAR3, VAR5);
VAR7 += VAR5;
++VAR1;
} else
*VAR7++ = VAR6;
*VAR7 = '';
}