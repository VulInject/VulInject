static int
FUN1(const unsigned char *VAR1, unsigned char *VAR2, int VAR3, bool VAR4)
{
const unsigned char *VAR5 = VAR1;
int			VAR6;

while (VAR3 > 0)
{
VAR6 = *VAR1;
if (FUN2(VAR6))
{
if (VAR6 != VAR7)
{
if (VAR4)
break;
FUN3(VAR8, VAR9,
(const char *) VAR1, VAR3);
}
if (VAR3 < 3 || !FUN2(VAR1[1]) || !FUN2(VAR1[2]))
{
if (VAR4)
break;
FUN4(VAR8,
(const char *) VAR1, VAR3);
}
VAR1++;
*VAR2++ = *VAR1++;
*VAR2++ = *VAR1++;
VAR3 -= 3;
}
else
{						
if (VAR6 == 0)
{
if (VAR4)
break;
FUN4(VAR8,
(const char *) VAR1, VAR3);
}
*VAR2++ = VAR6;
VAR1++;
VAR3--;
}
}
*VAR2 = '';

return VAR1 - VAR5;
}