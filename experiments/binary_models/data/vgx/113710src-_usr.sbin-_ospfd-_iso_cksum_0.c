VAR1
FUN1(void *VAR2, u_int16_t VAR3, u_int16_t VAR4)
{
VAR5	*VAR6 = VAR2;
int		 VAR7 = 0, VAR8 = 0, VAR9;	
u_int16_t	 VAR10;

VAR10 = VAR3 - VAR4 - 1;	
VAR6 += 2;			
VAR3 -= 2;
while (VAR3--) {
VAR7 += *VAR6++;
VAR8 += VAR7;
if ((VAR3 & 0xfff) == 0) {

VAR7 %= 255;
VAR8 %= 255;
}
}

if (VAR4) {
VAR9 = ((VAR10 * VAR7 - VAR8)) % 255;
if (VAR9 <= 0)
VAR9 += 255;
VAR8 = 510 - VAR7 - VAR9;
if (VAR8 > 255)
VAR8 -= 255;
VAR7 = VAR9;
}

return (VAR7 << 8 | VAR8);
}