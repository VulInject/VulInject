static int
FUN1(const char* VAR1)
{
uint8_t VAR2;
size_t VAR3;
const VAR4* VAR5 = (const VAR4*) VAR1;


while ((VAR2 = *VAR5++))	{

if(VAR2 < 0x80) continue;


else if ((VAR2 < 0xC2) || (VAR2 > 0xFD))
return 0;

if (((VAR2 == 0xC2) && (VAR5[0] < 0xA0)) ||
((VAR2 == 0xEF) && (VAR5[0] == 0xBF) && (VAR5[1] > 0xBD)))

return 0;


if      (VAR2 < 0xE0) VAR3 = 1;
else if (VAR2 < 0xF0) VAR3 = 2;
else if (VAR2 < 0xF8)	VAR3 = 3;
else if (VAR2 < 0xFC)	VAR3 = 4;
else
VAR3 = 5;

while (VAR3--)
if ((*VAR5++ & 0xC0) != 0x80)
return 0;
}


return 1;
}