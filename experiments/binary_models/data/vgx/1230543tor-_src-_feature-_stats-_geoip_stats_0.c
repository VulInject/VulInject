static void
FUN1(country_t VAR1)
{
if (VAR1 < 0)
return;

if ((VAR2)VAR1 >= VAR3) {

size_t VAR4;
if (VAR3 == 0)
VAR4 = 256;
else
VAR4 = VAR3 * 2;
if (VAR4 <= (VAR2)VAR1)
VAR4 = ((VAR2)VAR1)+1;
VAR5 = FUN2(VAR5, VAR4,
sizeof(VAR6));
memset(VAR5 + VAR3, 0,
sizeof(VAR6)*(VAR4 - VAR3));
VAR3 = VAR4;
}

VAR5[VAR1] += 1;
}