static char *
FUN1(u_int16_t VAR1, char *VAR2, size_t VAR3)
{
u_int16_t VAR4;
char *VAR5;

if (VAR1 == 0)
return "";

VAR5 = VAR2 + VAR3 - 1;
VAR4 = VAR1;
FUN2(VAR2, VAR3);
while (VAR4) {
*--VAR5 = '' + (VAR4 % 10);
VAR4  /= 10;
}
return (VAR5);
}