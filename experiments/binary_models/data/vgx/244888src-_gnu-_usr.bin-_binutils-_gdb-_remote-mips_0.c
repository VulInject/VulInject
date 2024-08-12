FUN1 (unsigned long VAR1, char *VAR2, int VAR3, int *VAR4)
{
int VAR5 = (VAR3 / 6);

if ((VAR3 % 12) != 0)
{
FUN2 (VAR6,
"", VAR3, (VAR3 == 1) ? "" : "");
return (0);
}
if (VAR3 > 36)
{
FUN2 (VAR6,
"", VAR3);
return (0);
}


if (VAR4 != NULL)
{
switch (VAR3)
{
case 36:
*VAR4 += ((VAR1 >> 24) & 0xFFF);
case 24:
*VAR4 += ((VAR1 >> 12) & 0xFFF);
case 12:
*VAR4 += ((VAR1 >> 0) & 0xFFF);
}
}

do
{
VAR3 -= 6;
*VAR2++ = VAR7[(VAR1 >> VAR3) & 0x3F];
}
while (VAR3 > 0);

return (VAR5);
}