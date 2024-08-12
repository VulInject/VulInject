VAR1
FUN1(uint_t VAR2)
{
uint_t	VAR3, VAR4;

if (VAR2 <= 3)
return (3);



if ((VAR2 & 0x1) == 0)
VAR2++;

for (VAR3 = VAR2, VAR4 = 2; VAR4 * VAR4 <= VAR3; VAR4++)
if ((VAR3 % VAR4) == 0)
VAR3 += VAR4 = 1;
return (VAR3);
}