static void
FUN1(unsigned char *VAR1)
{
unsigned char *VAR2;

VAR2 = VAR1;
while (*VAR2) {
if (*VAR2 == VAR3 && *(VAR2+1) == VAR3) {


FUN2(VAR2+1, VAR2);
continue;
}
VAR2++;
}

--VAR2;
if (VAR2 > VAR1 && *VAR2 == VAR3) {


*VAR2 = VAR4;
}
}