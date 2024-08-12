int
FUN1(const char *VAR1, int VAR2, char *VAR3, int VAR4)
{
char	   *VAR5;
const char *VAR6,
*VAR7 = VAR1 + VAR2;
int			VAR8 = 2;
uint32		VAR9 = 0;

VAR6 = VAR1;
VAR5 = VAR3;

while (VAR6 < VAR7)
{
VAR9 |= (unsigned char) *VAR6 << (VAR8 << 3);
VAR8--;
VAR6++;


if (VAR8 < 0)
{

if ((VAR5 - VAR3 + 4) > VAR4)
goto VAR10;

*VAR5++ = VAR11[(VAR9 >> 18) & 0x3f];
*VAR5++ = VAR11[(VAR9 >> 12) & 0x3f];
*VAR5++ = VAR11[(VAR9 >> 6) & 0x3f];
*VAR5++ = VAR11[VAR9 & 0x3f];

VAR8 = 2;
VAR9 = 0;
}
}
if (VAR8 != 2)
{

if ((VAR5 - VAR3 + 4) > VAR4)
goto VAR10;

*VAR5++ = VAR11[(VAR9 >> 18) & 0x3f];
*VAR5++ = VAR11[(VAR9 >> 12) & 0x3f];
*VAR5++ = (VAR8 == 0) ? VAR11[(VAR9 >> 6) & 0x3f] : '';
*VAR5++ = '';
}

FUN2((VAR5 - VAR3) <= VAR4);
return VAR5 - VAR3;

VAR10:
memset(VAR3, 0, VAR4);
return -1;
}