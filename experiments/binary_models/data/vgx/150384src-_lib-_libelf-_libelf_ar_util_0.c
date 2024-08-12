int
FUN1(const char *VAR1, size_t VAR2, unsigned int VAR3,
VAR4 *VAR5)
{
size_t VAR6;
unsigned int VAR7, VAR8;
const unsigned char *VAR9, *VAR10;

assert(VAR3 <= 10);

VAR10 = (const unsigned char *) VAR1;
VAR9 = VAR10 + VAR2;


for (;VAR10 < VAR9 && (VAR7 = *VAR10) == ''; VAR10++)
;

VAR6 = 0L;
for (;VAR10 < VAR9; VAR10++) {
if ((VAR7 = *VAR10) == '')
break;
if (VAR7 < '' || VAR7 > '')
return (0);
VAR8 = VAR7 - '';
if (VAR8 >= VAR3)		
break;
VAR6 *= VAR3;
VAR6 += VAR8;
}

*VAR5 = VAR6;

return (1);
}