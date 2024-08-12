static int
FUN1(char *VAR1, char *VAR2, int *VAR3, int *VAR4)
{
char *VAR5, *VAR6;
int VAR7;

VAR6 = NULL;
VAR5 = VAR1;
while (VAR5 < VAR2) {
if (*VAR5 == '')
VAR6 = VAR5;
VAR5++;
}

if (VAR6 != NULL) {
VAR7 = 0;
if (VAR6 - VAR1 < 1)
*VAR3 = -1;
else
VAR7 = FUN2(VAR1, VAR6, VAR3);

if (VAR7 == 0) {
if ((VAR2 - VAR6 - 1) < 1)
*VAR4 = -1;
else
VAR7 = FUN2(VAR6 + 1, VAR2, VAR4);
}
} else {
VAR7 = FUN2(VAR1, VAR2, VAR3);
*VAR4 = *VAR3;
}

if (VAR7 == 0) {
if (*VAR3 > 99 || *VAR4 > 99)
VAR7 = -1;
}

return (VAR7);
}