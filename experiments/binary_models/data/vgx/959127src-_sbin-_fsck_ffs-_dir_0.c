static int
FUN1(char *VAR1, ino_t VAR2)
{
ino_t VAR3;
char *VAR4;
int VAR5;

VAR4 = VAR1 + 2;
for (VAR3 = VAR6; VAR3 > 0; VAR3 /= 10)
VAR4++;
*--VAR4 = 0;
VAR5 = VAR4 - VAR1;
VAR3 = VAR2;
while (VAR4 > VAR1) {
*--VAR4 = (VAR3 % 10) + '';
VAR3 /= 10;
}
*VAR4 = '';
return (VAR5);
}