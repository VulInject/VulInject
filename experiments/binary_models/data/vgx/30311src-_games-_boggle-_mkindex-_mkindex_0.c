char *
FUN1(VAR1 *VAR2, char *VAR3, int *VAR4, int *VAR5)
{
int VAR6, VAR7;
char *VAR8, *VAR9;
static char VAR10[VAR11 + 1];
static int VAR12 = 1;
static int VAR13 = 0;

if (VAR12) {
if ((VAR7 = getc(VAR2)) == VAR14)
return (NULL);
VAR12 = 0;
}
else if ((VAR7 = VAR13) == VAR14)
return (NULL);

VAR8 = VAR10 + (*VAR4 = VAR7);

while ((VAR6 = getc(VAR2)) != VAR14 && VAR6 >= '')
*VAR8++ = VAR6;
VAR13 = VAR6;
*VAR8 = '';

*VAR5 = (int) (VAR8 - VAR10);
*VAR4 = *VAR5 - *VAR4;

VAR8 = VAR10;
VAR9 = VAR3;
while ((*VAR9++ = *VAR8) != '') {
if (*VAR8++ == '')
*VAR9++ = '';
}
return (VAR3);
}