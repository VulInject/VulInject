static int
FUN1(const unsigned char *VAR1, unsigned char *VAR2, int VAR3, bool VAR4)
{
const unsigned char *VAR5 = VAR1;
int			VAR6,
VAR7,
VAR8,
VAR9;

while (VAR3 > 0)
{
VAR6 = *VAR1;
if (!FUN2(VAR6))
{

if (VAR6 == 0)
{
if (VAR4)
break;
FUN3(VAR10,
(const char *) VAR1, VAR3);
}
*VAR2++ = VAR6;
VAR1++;
VAR3--;
continue;
}
VAR9 = FUN4(VAR10, (const char *) VAR1, VAR3);
if (VAR9 < 0)
{
if (VAR4)
break;
FUN3(VAR10,
(const char *) VAR1, VAR3);
}
if (VAR6 == VAR11)
*VAR2++ = VAR1[1];
else if (VAR6 == VAR12)
{
VAR6 = VAR1[1];
VAR7 = VAR1[2];
VAR8 = (VAR6 << 8) | (VAR7 & 0xff);
if (VAR8 >= 0xf5a1)
{

VAR6 -= 0x54;
*VAR2++ = ((VAR6 - 0xa1) >> 1) + ((VAR6 < 0xdf) ? 0x81 : 0xc1) + 0x6f;
}
else
*VAR2++ = ((VAR6 - 0xa1) >> 1) + ((VAR6 < 0xdf) ? 0x81 : 0xc1);
*VAR2++ = VAR7 - ((VAR6 & 1) ? ((VAR7 < 0xe0) ? 0x61 : 0x60) : 2);
}
else if (VAR6 == VAR13)
{
int			VAR14,
VAR15;

VAR6 = VAR1[1];
VAR7 = VAR1[2];
VAR8 = VAR6 << 8 | VAR7;
if (VAR8 >= 0xf5a1)
{

VAR6 -= 0x54;
*VAR2++ = ((VAR6 - 0xa1) >> 1) + ((VAR6 < 0xdf) ? 0x81 : 0xc1) + 0x74;
*VAR2++ = VAR7 - ((VAR6 & 1) ? ((VAR7 < 0xe0) ? 0x61 : 0x60) : 2);
}
else
{

for (VAR14 = 0;; VAR14++)
{
VAR15 = VAR16[VAR14].VAR17 & 0xffff;
if (VAR15 == 0xffff)
{
*VAR2++ = VAR18 >> 8;
*VAR2++ = VAR18 & 0xff;
break;
}
if (VAR15 == VAR8)
{
VAR8 = VAR16[VAR14].VAR19;
*VAR2++ = VAR8 >> 8;
*VAR2++ = VAR8 & 0xff;
break;
}
}
}
}
else
{
if (VAR4)
break;
FUN5(VAR10, VAR20,
(const char *) VAR1, VAR3);
}
VAR1 += VAR9;
VAR3 -= VAR9;
}
*VAR2 = '';

return VAR1 - VAR5;
}