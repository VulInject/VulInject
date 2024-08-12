static char * FUN1(VAR1 *VAR2, char *VAR3)
{
int VAR4, VAR5 = 0;
char *VAR6 = VAR3;
char *VAR7 = 0;

for (VAR4 = VAR8 - 4; VAR4 >= 0; VAR4 -= 4) {
char VAR9 = 0;
if (FUN2(VAR2, VAR4))
VAR9 |= 1;
if (FUN2(VAR2, VAR4 + 1))
VAR9 |= 2;
if (FUN2(VAR2, VAR4 + 2))
VAR9 |= 4;
if (FUN2(VAR2, VAR4 + 3))
VAR9 |= 8;
if ((VAR5 == 0) && (VAR9 == 0) && (VAR4 > 124)) {

continue;
}
VAR5 = 1;
if (!VAR7 && VAR9)
VAR7 = VAR6;
*VAR6++ = FUN3(VAR9);
}
*VAR6 = 0;
return VAR7 ? VAR7 : VAR6 - 1;
}