FUN1 (ucs4_t VAR1)
{

unsigned int VAR2 = 0;
unsigned int VAR3 = FUN2 (VAR4);

for (;;)
{
unsigned int VAR5 = (VAR2 + VAR3) >> 1;
ucs4_t VAR6 =
VAR4[VAR5].VAR7 + VAR4[VAR5].VAR8;
ucs4_t VAR9 =
VAR6 + VAR4[VAR5].VAR10 - 1;

if (VAR6 <= VAR1 && VAR1 <= VAR9)
return VAR1 - VAR4[VAR5].VAR8;

if (VAR9 < VAR1)
{
if (VAR2 == VAR5)
break;

VAR2 = VAR5;
}
else if (VAR1 < VAR6)
{
if (VAR3 == VAR5)
break;

VAR3 = VAR5;
}
}
return VAR11;
}